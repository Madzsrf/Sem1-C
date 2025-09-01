//19.Write a program to find the factorial of a number.

#include <stdio.h>

void main() {
    int a,b,c,i;
    b=1;
    printf("Enter an integer: ");
    scanf("%d", &a);
        for(int i = 1; i <= a; ++i) {
        b *= i;
    }
    printf("Factorial of %d = %d\n", a, b);
}