//2.	Write a program to apply left shift and right shift operator.

#include <stdio.h>
void main()
{
    int a, leftShift, rightShift;
    printf("Enter an integer: ");
    scanf("%d", &a);

    leftShift = a << 1;
    rightShift = a >> 1; 

    printf("Left shift of %d by 1 is: %d\n", a, leftShift);
    printf("Right shift of %d by 1 is: %d\n", a, rightShift);
}