//37. Write a program to reverse a string.

#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    char str[MAX];
    int n, i;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character

    n = strlen(str);

    // Reverse the string
    for (i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
