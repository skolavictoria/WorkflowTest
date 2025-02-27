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
void bubble_sort(int arr[], int size) {
    // TODO: Implement bubble sort
}
#include <stdio.h>

void bubbleSort(int array[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) { 
        for (j = 0; j < n - i - 1; j++) { 
            if (array[j] > array[j + 1]) { 
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(array) / sizeof(array[0]);
    
    printf("Unsorted array: \n");
    printArray(array, n);
    
    bubbleSort(array, n);
    
    printf("Sorted array: \n");
    printArray(array, n);
    
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
