#include <stdio.h>

void copyArray(int *src, int *dest, int size) {
    for (int i = 0; i < size; i++) {
        *(dest + i) = *(src + i);
    }
}

int main() {
    int src[] = {1, 2, 3, 4, 5};
    int size = sizeof(src) / sizeof(src[0]);
    int dest[size];

    copyArray(src, dest, size);

    printf("src:  ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(src + i));
    }
    printf("\n");

    printf("dest: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(dest + i));
    }
    printf("\n");

    return 0;
}