// Question : 29
// Write a C program to find row sum and
// column sum of a given matrix

#include<stdio.h>

int main()
{
    int r, c, i, j;

    printf("\nEnter no. of rows : ");
    scanf("%d", &r);
    printf("Enter no. of columns : ");
    scanf("%d", &c);

    int m[r][c], sumR = 0;
    int sumC[c];

    // Getting Data
    printf("Enter Data (Integer):\n");
    for (i = 0; i < r; i++)
    {
        printf("\nRow %d ---\n", i+1);

        for (j = 0; j < c; j++)
        {
            printf("Matrix[%d][%d] : ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    // Initialize sumC
    for (j=0; j<c; j++)
    {
        sumC[j] = 0;
    }

    printf("\nPrinting the matrix ---\n");
    // Getting sum of rows, columns and printing rows
    for (i = 0; i < r; i++)
    {
        sumR = 0;
        
        for (j = 0; j < c; j++)
        {
            printf("%d  ", m[i][j]);
            sumR += m[i][j];
            sumC[j] += m[i][j];
        }

        printf("\t\tRow [%d] Sum = %d", i+1, sumR);
        printf("\n");
    }

    // printing sum of columns
    for(i=0; i<c; i++)
    {
        printf(" Column[%d] Sum = %d  ", i+1, sumC[i]);
    }

    return 0;
}