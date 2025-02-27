#include <stdio.h>

void get_array(int* array, int size);
void sort(int* array, int size);
void out(int* array, int size);

int main() {
    int size;
    printf("What is the length of the array? ");
    scanf("%d", &size);

    int array[size];

    get_array(array, size);
    sort(array, size);
    out(array, size);

    return 0;
}

void get_array(int* array, int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &temp);
        array[i] = temp;
    }
}

void sort(int* array, int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void out(int* array, int size) {
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
