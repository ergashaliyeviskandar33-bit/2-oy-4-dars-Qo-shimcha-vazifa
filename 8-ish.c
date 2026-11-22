#include <stdio.h>

int myStrlen(char *str) {
    char *p = str;

    while (*p != '\0') {
        p++;
    }

    return (int)(p - str);
}

int main() {
    char s1[] = "Salom";
    char s2[] = "";
    char s3[] = "Pointer";

    printf("\"%s\" -> %d\n", s1, myStrlen(s1));
    printf("\"%s\" -> %d\n", s2, myStrlen(s2));
    printf("\"%s\" -> %d\n", s3, myStrlen(s3));

    return 0;
}