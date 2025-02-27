#include <stdio.h>
#include <stdlib.h> 

void bubbleSort(int arr[], int n) {
    if (n == 0) return;

    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - 1 - i; j++) { 
            if (arr[j] > arr[j + 1]) { 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    if (n == 0) {
        printf("Array is empty.\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
