// Question : 37
// Write a C program to find the highest and lowest
// number from a two dimensional array using pointers

#include <stdio.h>

int main()
{
    int rows, columns;
    float max, min;
    int i,j;
    printf("Enter the matrix :\n");
    printf("No. of rows : ");
    scanf("%d", &rows);
    printf("No. of columns : ");
    scanf("%d", &columns);
    float m[rows][columns];
    float *ptr;
    ptr = m;

    // Taking user input for the matrix
    printf("Enter the data for the matrix --\n");
    for (i = 0; i < rows; i++)
    {
        printf("Row %d -\n", i+1);
        for (j = 0; j < columns; j++)
        {
            printf("[%d][%d] : ",i,j);
            scanf("%f", &m[i][j]);
        } 
    }

    // getting the max, min numbers and their indexes
    max = min = *ptr;
    for (i = 0; i < (rows * columns); i++)
    {
        if (*(ptr+i) < min) min = *(ptr+i);
        if (*(ptr+i) > max) max = *(ptr+i);
    }

    printf("\nFrom the given matrix,");
    printf("\nLargest number : %.2f", max);
    printf("\nSmallest number : %.2f", min);

    return 0;
}