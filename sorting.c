/**
 * sorting.c
 * Implementation of various sorting algorithms
 * 
 * This file contains the implementations of the sorting algorithms
 * declared in sorting.h
 * 
 * IMPORTANT: Rename this file to sorting.c before implementing your solutions
 */

#include "sorting.h"

/**
 * Bubble Sort implementation
 * 
 * Time Complexity: O(n²) - where n is the size of the array
 * Space Complexity: O(1) - in-place sorting
 */
    // TODO: Implement bubble sort#include <stdio.h>

void bubble_sort(int arr[], int size) {
    int i = 0; 

    while (i < size - 1) { 
        int j = 0; 

        while (j < size - i - 1) { 
            if (arr[j] > arr[j + 1]) { 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            j += 1; 
        }
        i += 1; 
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    bubbleSort(array, size);

    printf("Sorted array: ");
    printArray(array, size);

    return 0;
}



/**
 * Selection Sort implementation
 * 
 * Time Complexity: O(n²) - where n is the size of the array
 * Space Complexity: O(1) - in-place sorting
 */
void selection_sort(int arr[], int size) {
    // TODO: Implement selection sort
}

/**
 * Insertion Sort implementation
 * 
 * Time Complexity: O(n²) - where n is the size of the array
 * Space Complexity: O(1) - in-place sorting
 */
void insertion_sort(int arr[], int size) {
    // TODO: Implement insertion sort
}

/**
 * Merge Sort implementation
 * 
 * Time Complexity: O(n log n) - where n is the size of the array
 * Space Complexity: O(n) - requires additional space
 */
void merge_sort(int arr[], int size) {
    // TODO: Implement merge sort
    // Hint: You may need to create helper functions
}

/**
 * Quick Sort implementation
 * 
 * Time Complexity: O(n log n) average case, O(n²) worst case
 * Space Complexity: O(log n) - recursive call stack
 */
void quick_sort(int arr[], int size) {
    // TODO: Implement quick sort
    // Hint: You may need to create helper functions
}
