#include <stdio.h>

void countTypes(int *arr, int size, int *pos, int *neg, int *zero) {
    *pos = 0;
    *neg = 0;
    *zero = 0;

    for (int i = 0; i < size; i++) {
        if (*(arr + i) > 0) {
            (*pos)++;
        } else if (*(arr + i) < 0) {
            (*neg)++;
        } else {
            (*zero)++;
        }
    }
}

int main() {
    int arr[] = {3, -1, 0, 7, -5, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pos, neg, zero;

    countTypes(arr, size, &pos, &neg, &zero);

    printf("Musbat: %d, Manfiy: %d, Nol: %d\n", pos, neg, zero);

    return 0;
}