//1.	Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages. 

#include <stdio.h>
int factorial_recursive(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial_recursive(n - 1);
    }
}

int factorial_non_recursive(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}



int binomial_coefficient(int n, int r, int (*factorial_func)(int)) {
    return factorial_func(n) / (factorial_func(r) * factorial_func(n - r));
}

int main() {
    int n, r;

    printf("Enter values for n and r (n >= r >= 0): ");
    scanf("%d %d", &n, &r);

    if (n < r || r < 0) {
        printf("Invalid input. Ensure that n >= r >= 0.\n");
        return 1;
    }

    printf("Using recursive factorial:\n");
    printf("C(%d, %d) = %d\n", n, r, binomial_coefficient(n, r, factorial_recursive));

    printf("Using non-recursive factorial:\n");
    printf("C(%d, %d) = %d\n", n, r, binomial_coefficient(n, r, factorial_non_recursive));

    return 0;
}
