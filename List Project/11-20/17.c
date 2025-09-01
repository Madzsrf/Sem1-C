//17.Write a program to print the multiplication table of a given number.

#include <stdio.h>

void main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Multiplication table of %d:\n", a);
    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", a, i, a * i);
    }
}
