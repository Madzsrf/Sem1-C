#include <stdio.h>
void main()
{
    int i, j, k, num = 1, space, rows;

    printf("Part a:\n");
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    space = rows - 1;

    for (i = 1; i <= rows; i++)
    {
        for (k = 1; k <= space; k++)
            printf(" ");
        space--;
        for (j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    printf("\nPart b:\n");
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    space = rows - 1;

    for (i = 0; i < rows; i++)
    {
        int val = 1;
        for (k = 1; k <= space; k++)
            printf(" ");
        space--;
        for (j = 0; j <= i; j++)
        {
            printf("%d ", val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }
}
