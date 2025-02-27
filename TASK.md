# Sorting Algorithms Assignment

## Overview

In this assignment, you will implement five classic sorting algorithms in C. This task will help you understand the mechanics, efficiency, and trade-offs of different sorting techniques.

## Learning Objectives

- Implement and understand common sorting algorithms
- Analyze algorithm efficiency in terms of time and space complexity
- Practice writing clean, well-documented C code
- Gain experience with testing and debugging C programs

## Detailed Requirements

### 1. Implement the following sorting algorithms:

- **Bubble Sort**: A simple comparison-based algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
- **Selection Sort**: An in-place comparison sort that divides the input list into a sorted and an unsorted region, and iteratively shrinks the unsorted region by selecting the smallest element and moving it to the sorted region.
- **Insertion Sort**: Builds the final sorted array one item at a time, taking one element from the input data in each iteration and inserting it into its correct position in the already-sorted part of the array.
- **Merge Sort**: A divide-and-conquer algorithm that divides the input array into two halves, recursively sorts them, and then merges the sorted halves.
- **Quick Sort**: Another divide-and-conquer algorithm that selects a 'pivot' element and partitions the array around the pivot, placing elements less than the pivot to its left and elements greater than the pivot to its right.

### 2. Technical Requirements:

- All sorting functions must sort the array in ascending order
- All sorting functions must modify the array in-place
- Your implementation must handle edge cases:
  - Empty arrays
  - Arrays with a single element
  - Arrays with duplicate elements
  - Arrays that are already sorted
  - Arrays in reverse order

### 3. Code Structure:

- Implement all sorting algorithms in a file named `sorting.c`
- Use the provided `sorting.h` header file without modifications
- Follow the function signatures exactly as specified in the header file
- Add appropriate comments to explain your implementation

## Testing

Your code will be tested using the provided pytest file, which:
- Compiles your C code into a shared library
- Tests each sorting algorithm with various input arrays
- Verifies that the arrays are correctly sorted
- Checks performance with larger arrays

To run the tests:
```
make test
```

## Submission Guidelines

1. Rename `sorting.c.template` to `sorting.c` and implement all required functions
2. Test your implementation using the provided test file
3. Follow the workflow instructions in `workflow.md`
4. Submit your completed `sorting.c` file

## Evaluation Criteria

Your submission will be evaluated based on:
1. **Correctness (50%)**: All sorting algorithms work correctly for all test cases
2. **Code Quality (30%)**: Clean, readable, and well-documented code
3. **Efficiency (20%)**: Appropriate implementation of algorithms with expected time and space complexity

## Resources

- Review the time and space complexity of each algorithm before implementation
- Consider edge cases in your implementation
- Test your code thoroughly before submission
