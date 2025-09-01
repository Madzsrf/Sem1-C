//4.Write a program to add, subtract, multiply, and divide two numbers.

#include <stdio.h>
void main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    printf("\nEnter first integer for addition: ");
    scanf("%d", &a);
    printf("\nEnter second integer for addition: ");
    scanf("%d", &b);
    c = a + b;
    printf("\nAddition: %d", c);  

    printf("\nEnter first integerfor subtraction: ");
    scanf("%d", &d);
    printf("\nEnter second integer for subtraction: ");
    scanf("%d", &e);    
    f = d - e;
    printf("\nSubtraction: %d", f);  

    printf("\nEnter first integer for multiplication: ");
    scanf("%d", &g);
    printf("\nEnter second integer for multiplication: ");
    scanf("%d", &h);
    i = g * h;
    printf("\nMultiplication: %d", c);  

    printf("\nEnter first integer for division: ");
    scanf("%d", &j);
    printf("\nEnter second integer for division: ");
    scanf("%d", &k);
    if (k != 0) {
        l = j / k ;
        printf("\nDivision: %d", l);  
    } else {
        printf("\nError: Division by zero is not allowed.\n");
    }
}
