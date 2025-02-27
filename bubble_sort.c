#include <stdio.h>

void bubbleSort(int arr[], int size) {
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
