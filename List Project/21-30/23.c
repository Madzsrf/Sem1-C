//23.Write a program to calculate the power of a number.
#include <stdio.h>
#include <math.h>
int main()
{
    int base, exponent;
    long long result = 1;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);
    for (int i = 0; i < exponent; i++)
        result *= base;
    printf("%d^%d = %lld\n", base, exponent, result);
    return 0;
}
