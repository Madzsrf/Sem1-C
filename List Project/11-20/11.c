//11.Write a program to find the largest of two numbers.

#include <stdio.h>

void main() {
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    if (a > b) {
        printf("Largest: %d\n", a);
    } else if (b > a) {
        printf("Largest: %d\n", b);
    } else {
        printf("Both are equal\n");
    }
}