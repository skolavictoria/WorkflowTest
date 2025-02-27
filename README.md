# Sorting Algorithms in C

## Task Description

In this assignment, you will implement various sorting algorithms in C. The goal is to understand the mechanics, efficiency, and use cases of different sorting techniques.

### Required Sorting Algorithms

You must implement the following sorting algorithms:

1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
5. Quick Sort

### Requirements

1. Create a file named `sorting.c` that contains all your sorting algorithm implementations.
2. Create a header file named `sorting.h` that declares all your sorting functions.
3. Each sorting function should have the following signature:
   ```c
   void algorithm_name_sort(int arr[], int size);
   ```
   For example: `void bubble_sort(int arr[], int size);`

4. Your implementation must sort the array in ascending order.
5. Do not modify the function signatures as they will be used for testing.

### Input and Output Format

- Each sorting function takes an array of integers and its size as input.
- The functions should modify the array in-place to sort it in ascending order.
- No specific output is required from the sorting functions themselves.

### Performance Considerations

- Your implementation should handle arrays of various sizes efficiently.
- Consider the time and space complexity of your algorithms.

## Testing

Your code will be tested with various test cases, including:
- Arrays of different sizes (small, medium, large)
- Already sorted arrays
- Reverse sorted arrays
- Arrays with duplicate elements
- Empty arrays
- Arrays with a single element

## Submission Guidelines

1. Follow the workflow instructions in `workflow.md`
2. Make sure your code compiles without warnings
3. Ensure all tests pass before submission

## Evaluation Criteria

Your submission will be evaluated based on:
1. Correctness of the sorting algorithms
2. Code quality and organization
3. Handling of edge cases
4. Documentation (comments explaining your code)
