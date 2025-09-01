//5.Write a program to calculate the area of a circle.

#include <stdio.h>

void main() 
{
    float r,a;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    a = 3.14 * r * r;
    printf("Area of circle: %f", a);
}