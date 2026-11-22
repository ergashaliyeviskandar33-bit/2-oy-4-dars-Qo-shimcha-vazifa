#include <stdio.h>

int countGreater(int *arr, int size, int value) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (*(arr + i) > value) {
            count++;
        }
    }

    return count;
}

int main() {
    int arr[] = {5, 12, 8, 20, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value;

    printf("Qiymatni kiriting: ");
    scanf("%d", &value);

    int result = countGreater(arr, size, value);

    printf("%d dan katta elementlar soni: %d\n", value, result);

    return 0;
}