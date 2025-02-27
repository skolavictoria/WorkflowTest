#include <stdio.h>

// Функция для обмена значениями
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Функция сортировки пузырьком
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;  // Флаг для оптимизации
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;
            }
        }
        if (!swapped) break; // Если не было обменов, массив уже отсортирован
    }
}

// Функция для вывода массива
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Главная функция
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Исходный массив:\n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Отсортированный массив:\n");
    printArray(arr, n);
    
    return 0;
}