#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "sorting.h"

// Function to print an array
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to generate a random array
void generate_random_array(int arr[], int size, int min, int max) {
    for (int i = 0; i < size; i++) {
        arr[i] = min + rand() % (max - min + 1);
    }
}

// Function to copy an array
void copy_array(int dest[], int src[], int size) {
    memcpy(dest, src, size * sizeof(int));
}

// Function to check if an array is sorted
int is_sorted(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i-1]) {
            return 0;  // Not sorted
        }
    }
    return 1;  // Sorted
}

// Function to measure sorting time
double measure_sort_time(void (*sort_func)(int[], int), int arr[], int size) {
    clock_t start, end;
    
    start = clock();
    sort_func(arr, size);
    end = clock();
    
    return ((double) (end - start)) / CLOCKS_PER_SEC;
}

int main() {
    // Seed random number generator
    srand(time(NULL));
    
    // Test array sizes
    int sizes[] = {10, 100, 1000, 10000};
    int num_sizes = sizeof(sizes) / sizeof(sizes[0]);
    
    // Function pointers to sorting algorithms
    void (*sort_funcs[])(int[], int) = {
        bubble_sort,
        selection_sort,
        insertion_sort,
        merge_sort,
        quick_sort
    };
    
    char *sort_names[] = {
        "Bubble Sort",
        "Selection Sort",
        "Insertion Sort",
        "Merge Sort",
        "Quick Sort"
    };
    
    int num_sorts = sizeof(sort_funcs) / sizeof(sort_funcs[0]);
    
    printf("=== Sorting Algorithm Performance Test ===\n\n");
    
    // Test each size
    for (int i = 0; i < num_sizes; i++) {
        int size = sizes[i];
        printf("Array size: %d\n", size);
        printf("--------------------------------------------------\n");
        printf("%-15s | %-10s | %-10s\n", "Algorithm", "Time (sec)", "Sorted");
        printf("--------------------------------------------------\n");
        
        // Generate a random array
        int *original = (int *)malloc(size * sizeof(int));
        int *arr = (int *)malloc(size * sizeof(int));
        
        if (original == NULL || arr == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }
        
        generate_random_array(original, size, -1000, 1000);
        
        // Test each sorting algorithm
        for (int j = 0; j < num_sorts; j++) {
            // Copy the original array
            copy_array(arr, original, size);
            
            // Measure sorting time
            double time = measure_sort_time(sort_funcs[j], arr, size);
            
            // Check if sorted
            int sorted = is_sorted(arr, size);
            
            printf("%-15s | %-10.6f | %-10s\n", 
                   sort_names[j], time, sorted ? "Yes" : "No");
        }
        
        printf("\n");
        
        // Free memory
        free(original);
        free(arr);
    }
    
    // Small array test for visual verification
    printf("=== Visual Verification (Small Array) ===\n\n");
    
    int small_size = 10;
    int small_arr[10];
    int temp_arr[10];
    
    generate_random_array(small_arr, small_size, -50, 50);
    
    printf("Original array: ");
    print_array(small_arr, small_size);
    printf("\n");
    
    for (int j = 0; j < num_sorts; j++) {
        // Copy the original array
        copy_array(temp_arr, small_arr, small_size);
        
        // Sort
        sort_funcs[j](temp_arr, small_size);
        
        // Print result
        printf("%s: ", sort_names[j]);
        print_array(temp_arr, small_size);
    }
    
    return 0;
}
