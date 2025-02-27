#include <stdio.h>

int main() {
    int arr[] = {7, 2, 1, 9, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;
    
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n ");
    
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    

    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}