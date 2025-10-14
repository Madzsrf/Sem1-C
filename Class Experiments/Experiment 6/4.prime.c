//4.	Develop a C function ISPRIME (num) that accepts an integer argument and returns 1 if the argument is prime, a 0 otherwise. Write a C program that invokes this function to generate prime numbers between the given ranges. 

#include <stdio.h>
int is_prime(int n) {
    if (n <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Found a divisor, not prime
        }
    }
    return 1; // No divisors found, it's prime
}
int main() {
    int lower, upper;

    printf("Enter the lower and upper range to find prime numbers: ");
    scanf("%d %d", &lower, &upper);

    if (lower > upper || lower < 0) {
        printf("Invalid input. Ensure that lower <= upper and both are non-negative.\n");
        return 1;
    }

    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for (int num = lower; num <= upper; num++) {
        if (is_prime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}