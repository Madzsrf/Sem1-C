//6.Write a program to swap two variables (with a third variable).

#include <stdio.h>

void main() 
{
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("After swapping: a = %d, b = %d", a, b);
}