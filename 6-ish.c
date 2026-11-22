#include <stdio.h>

int removeDuplicates(int *arr, int size) {
    if (size == 0) {
        return 0;
    }

    int *write = arr;
    int *read = arr + 1;
    int *end = arr + size;

    while (read < end) {
        if (*read != *write) {
            write++;
            *write = *read;
        }
        read++;
    }

    return (int)(write - arr) + 1;
}

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int newSize = removeDuplicates(arr, size);

    printf("Yangi o'lcham = %d\n", newSize);
    printf("Natija: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}