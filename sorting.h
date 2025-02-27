/**
 * sorting.h
 * Header file for sorting algorithm implementations
 * 
 * This file contains the function declarations for various sorting algorithms.
 * Students must implement these functions in sorting.c
 */

#ifndef SORTING_H
#define SORTING_H

/**
 * Sorts an array of integers in ascending order using the Bubble Sort algorithm
 * 
 * @param arr The array to be sorted
 * @param size The size of the array
 */
void bubble_sort(int arr[], int size);

/**
 * Sorts an array of integers in ascending order using the Selection Sort algorithm
 * 
 * @param arr The array to be sorted
 * @param size The size of the array
 */
void selection_sort(int arr[], int size);

/**
 * Sorts an array of integers in ascending order using the Insertion Sort algorithm
 * 
 * @param arr The array to be sorted
 * @param size The size of the array
 */
void insertion_sort(int arr[], int size);

/**
 * Sorts an array of integers in ascending order using the Merge Sort algorithm
 * 
 * @param arr The array to be sorted
 * @param size The size of the array
 */
void merge_sort(int arr[], int size);

/**
 * Sorts an array of integers in ascending order using the Quick Sort algorithm
 * 
 * @param arr The array to be sorted
 * @param size The size of the array
 */
void quick_sort(int arr[], int size);

#endif /* SORTING_H */
