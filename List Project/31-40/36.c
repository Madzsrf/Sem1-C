//36. Write a program to check if two strings are equal.

#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    char str1[MAX], str2[MAX];

    printf("Enter the first string: ");
    fgets(str1, MAX, stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline character

    printf("Enter the second string: ");
    fgets(str2, MAX, stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline character

    if (strcmp(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
