//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/

#include <stdio.h>
void find_pivot_integer(int n) {
    int total_sum = n * (n + 1) / 2; // Sum of first n natural numbers
    int left_sum = 0;
    for (int x = 1; x <= n; x++) {
        left_sum += x;
        int right_sum = total_sum - (left_sum - x); // Sum from x to n
        if (left_sum == right_sum) {
            printf("%d\n", x);
            return;
        }
    }
    printf("-1\n");
}
int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    find_pivot_integer(n);
    return 0;
}
