//12.Write a program to find the largest of three numbers.

#include <stdio.h>

void main() {
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);

    if (a >= b && a >= c) {
        printf("Largest number is: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("Largest number is: %d\n", b);
    } else {
        printf("Largest number is: %d\n", c);
    }
}