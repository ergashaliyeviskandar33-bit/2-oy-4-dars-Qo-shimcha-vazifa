#include <stdio.h>

void rotateLeft(int *arr, int size) {
    if (size <= 1) {
        return;
    }

    int first = *arr;

    for (int i = 0; i < size - 1; i++) {
        *(arr + i) = *(arr + i + 1);
    }

    *(arr + size - 1) = first;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    rotateLeft(arr, size);

    printf("Natija: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}