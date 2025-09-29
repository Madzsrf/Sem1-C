#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Bitwise AND of %d and %d is: %d\n", a, b, a & b);
    printf("Bitwise OR of %d and %d is: %d\n", a, b, a | b);
    printf("Bitwise NOT of %d is: %d\n", a, ~a);
    printf("Bitwise NOT of %d is: %d\n", b, ~b);
}