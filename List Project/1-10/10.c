//10.Write a program to calculate the simple interest.

#include <stdio.h>

void main() {
    float p,r,t,si;
    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    printf("Enter time in years: ");
    scanf("%f", &t);

    si = (p*r*t)/100;

    printf("Simple Interest: %f\n", si);
}