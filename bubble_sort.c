#include <stdio.h>

void bubbleSort(int array[], int n) {
    int i = 0; 

    while (i < n - 1) { 
        int j = 0; 

        while (j < n - i - 1) { 
            if (array[j] > array[j + 1]) { 
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            j += 1; 
        }
        i += 1; 
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
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
