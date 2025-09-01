//8.Write a program to find the ASCII value of a character.

#include <stdio.h>

void main() {
    char c;
    int a;
    printf("Enter a character: ");
    scanf("%c", &c);

    a = (int)c;

    printf("ASCII value of %c is %d\n", c, a);
}