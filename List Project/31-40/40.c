//40. Write a program to concatenate two strings without using strcat.
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[50];
    int i, j;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline character if present

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline character if present

    // Find the end of the first string
    for (i = 0; str1[i] != '\0'; i++);

    // Append the second string to the first string
    for (j = 0; str2[j] != '\0'; j++, i++) {
        str1[i] = str2[j];
    }
    str1[i] = '\0'; // Null-terminate the concatenated string

    printf("Concatenated string: %s\n", str1);

    return 0;
}