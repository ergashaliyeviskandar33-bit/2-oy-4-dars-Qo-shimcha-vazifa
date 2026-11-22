#include <stdio.h>

int *findElement(int *arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == target) {
            return arr + i;
        }
    }
    return NULL;
}

int main() {
    int arr[] = {5, 12, 8, 20, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Qidirilayotgan son: ");
    scanf("%d", &target);

    int *found = findElement(arr, size, target);

    if (found != NULL) {
        printf("Topildi! Qiymat: %d, indeks: %ld\n", *found, (long)(found - arr));
    } else {
        printf("%d massivda topilmadi.\n", target);
    }

    return 0;
}