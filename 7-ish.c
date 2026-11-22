#include <stdio.h>

int isPalindrome(int *arr, int size) {
    int *left = arr;
    int *right = arr + size - 1;

    while (left < right) {
        if (*left != *right) {
            return 0;
        }
        left++;
        right--;
    }

    return 1;
}

int main() {
    int a[] = {1, 2, 3, 2, 1};
    int b[] = {1, 2, 3, 4, 5};
    int sizeA = sizeof(a) / sizeof(a[0]);
    int sizeB = sizeof(b) / sizeof(b[0]);

    printf("a: %d\n", isPalindrome(a, sizeA));
    printf("b: %d\n", isPalindrome(b, sizeB));

    return 0;
}