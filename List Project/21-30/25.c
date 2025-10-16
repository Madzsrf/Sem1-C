//25.Write a program to find the GCD (HCF) of two numbers.

#include <stdio.h>
int main() {
    int num1, num2, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    gcd = num1;

    printf("GCD of the two numbers is: %d\n", gcd);
    return 0;
}
