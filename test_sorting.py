import pytest
import subprocess
import ctypes
import os
import random
import numpy as np
from typing import List, Callable

# Compile the C code before running tests
@pytest.fixture(scope="session", autouse=True)
def compile_c_code():
    # Compile the shared library
    compile_result = subprocess.run(
        ["gcc", "-shared", "-o", "libsorting.so", "-fPIC", "sorting.c"],
        capture_output=True,
        text=True
    )
    
    if compile_result.returncode != 0:
        pytest.fail(f"Failed to compile sorting.c:\n{compile_result.stderr}")
    
    # Load the shared library
    try:
        lib = ctypes.CDLL("./libsorting.so")
        yield lib
    finally:
        # Clean up the compiled library after tests
        if os.path.exists("libsorting.so"):
            os.remove("libsorting.so")

# Test cases generator
def generate_test_cases():
    test_cases = [
        # Empty array
        [],
        # Single element
        [1],
        # Two elements
        [2, 1],
        # Small array
        [5, 3, 8, 4, 2],
        # Already sorted
        [1, 2, 3, 4, 5],
        # Reverse sorted
        [5, 4, 3, 2, 1],
        # Duplicates
        [3, 1, 4, 1, 5, 9, 2, 6, 5],
        # Negative numbers
        [-5, -2, -10, -8, -1],
        # Mixed positive and negative
        [-3, 5, 0, -8, 2, 7],
        # Larger array with random elements
        random.sample(range(-1000, 1000), 100),
        # Very large array with random elements (stress test)
        random.sample(range(-10000, 10000), 1000)
    ]
    return test_cases

# Helper function to run sorting algorithm and verify results
def run_sort_test(lib, sort_func_name: str, arr: List[int]):
    # Convert Python list to C array
    c_arr = (ctypes.c_int * len(arr))(*arr)
    c_size = ctypes.c_int(len(arr))
    
    # Get the sorting function from the library
    sort_func = getattr(lib, sort_func_name)
    sort_func.argtypes = [ctypes.POINTER(ctypes.c_int), ctypes.c_int]
    sort_func.restype = None
    
    # Call the sorting function
    sort_func(c_arr, c_size)
    
    # Convert C array back to Python list
    result = [c_arr[i] for i in range(len(arr))]
    
    # Verify the result is sorted
    expected = sorted(arr)
    assert result == expected, f"Array not sorted correctly using {sort_func_name}"

# Test each sorting algorithm with all test cases
@pytest.mark.parametrize("sort_func_name", [
    "bubble_sort",
    "selection_sort",
    "insertion_sort",
    "merge_sort",
    "quick_sort"
])
@pytest.mark.parametrize("test_case", generate_test_cases())
def test_sorting_algorithm(compile_c_code, sort_func_name, test_case):
    run_sort_test(compile_c_code, sort_func_name, test_case)

# Test performance (optional, can be skipped in CI)
@pytest.mark.parametrize("sort_func_name", [
    "bubble_sort",
    "selection_sort",
    "insertion_sort",
    "merge_sort",
    "quick_sort"
])
def test_sorting_performance(compile_c_code, sort_func_name):
    # Skip performance tests in CI environment
    if os.environ.get('CI') == 'true':
        pytest.skip("Skipping performance test in CI environment")
    
    # Create a large array for performance testing
    large_array = random.sample(range(-50000, 50000), 5000)
    
    # Convert Python list to C array
    c_arr = (ctypes.c_int * len(large_array))(*large_array)
    c_size = ctypes.c_int(len(large_array))
    
    # Get the sorting function from the library
    sort_func = getattr(compile_c_code, sort_func_name)
    sort_func.argtypes = [ctypes.POINTER(ctypes.c_int), ctypes.c_int]
    sort_func.restype = None
    
    # Call the sorting function and check it completes without error
    sort_func(c_arr, c_size)
    
    # Convert C array back to Python list
    result = [c_arr[i] for i in range(len(large_array))]
    
    # Verify the result is sorted
    assert result == sorted(large_array), f"Large array not sorted correctly using {sort_func_name}"
