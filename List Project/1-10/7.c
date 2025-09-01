//7.Write a program to swap two variables (without a third variable).

#include <stdio.h>

void main() 
{
    int a,b;
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d", a, b);
}