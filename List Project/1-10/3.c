//3.Write a program to read and print two integers.

#include <stdio.h>
void main() 
{
    int a,b;
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    printf("You entered: %d and %d",a,b);
}