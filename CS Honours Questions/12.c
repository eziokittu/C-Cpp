// Question : 12
// Write a C program to find out the difference between
// the largest and smallest numbers of a user given matrix
// Your program should print the position of highest and
// lowest number residing in the matrix.

#include <stdio.h>

int main()
{
    int rows, columns;
    float max, min;
    int i,j, maxI, maxJ, minI, minJ;
    printf("Enter the matrix :\n");
    printf("No. of rows : ");
    scanf("%d", &rows);
    printf("No. of columns : ");
    scanf("%d", &columns);
    float m[rows][columns];

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
    max = m[0][0];
    min = max;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (m[i][j] > max) 
            {
                max = m[i][j];
                maxI = i;
                maxJ = j;
            }
            if (m[i][j] < min)
            {
                min = m[i][j];
                minI = i;
                minJ = j;
            }
        } 
    }

    // printing
    printf("\nFrom the given matrix,");
    printf("\nLargest number : %.2f at position [%d][%d]", max, maxI, maxJ);
    printf("\nSmallest number : %.2f at position [%d][%d]\n\n", min, minI, minJ);

    return 0;
}