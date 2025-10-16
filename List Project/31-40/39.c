//39. Write a program to check whether a string is a palindrome.

#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    char str[MAX];
    int n, i, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character

    n = strlen(str);

    // Check for palindrome
    for (i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}