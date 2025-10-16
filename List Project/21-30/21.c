//21.Write a program to print the Fibonacci series up to N terms.

#include <stdio.h>

void main() {
    int a,b,c,n;
    a = 0;
    b = 1;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d",&n);

    printf("Fibonacci Series:\n");
    for (int i=0;i<n;i++) {
        if (i<=1) {
            c=i;
        } else {
            c=a+b;
            a=b; 
            b=c; 
        }
        printf("%d ",c);
    }
    printf("\n");
}