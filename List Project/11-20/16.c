//16.Write a program to find the sum of first N natural numbers.

#include <stdio.h>

void main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i=1;i<=n;++i) {
        sum+=i;
    }

    printf("Sum of first %d natural numbers is: %d\n", n, sum);
}
