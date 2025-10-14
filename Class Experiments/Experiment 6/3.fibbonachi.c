//3.	Develop a recursive function FIBO (num) that accepts an integer argument. Write a C program that invokes this function to generate the Fibonacci sequence up to num. 

#include <stdio.h>
int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() {
    int num, i;
    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    printf("Fibonacci sequence up to %d terms:\n", num);
    for (i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
