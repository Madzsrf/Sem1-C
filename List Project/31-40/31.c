//31. Write a program to merge two arrays.

#include <stdio.h>
#define MAX 100
int main()
{
    int arr1[MAX], arr2[MAX], merged[MAX * 2];
    int n1, n2, i, j;

    // Input for first array
    printf("Enter number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements for the first array:\n", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input for second array
    printf("Enter number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements for the second array:\n", n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Merging the two arrays
    for (i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }
    for (j = 0; j < n2; j++)
    {
        merged[i + j] = arr2[j];
    }

    // Output the merged array
    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
