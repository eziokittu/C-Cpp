// Question : 6
// Write a C program to print the difference
// between largest and 2md largest elements 
// of a user given matrix

# include <stdio.h>

int main()
{
    int rows, columns;
    int i=0, j=0, maxCount=0;
    printf("Enter the matrix :\n");
    printf("No. of rows : ");
    scanf("%d", &rows);
    printf("No. of columns : ");
    scanf("%d", &columns);
    float matrix[rows][columns];
    float max1, max2;

    // Taking user input for the matrix
    printf("Enter the data for the matrix --\n");
    for (i = 0; i < rows; i++)
    {
        printf("Row %d -\n", i+1);
        for (j = 0; j < columns; j++)
        {
            scanf("%f", &matrix[i][j]);
        } 
    }

    // printing the matrix and getting the max and 2nd max
    printf("\nThe matrix ----\n");
    max1 = matrix[0][0];
    max2 = matrix[0][1]; // if no of columns < 2 , this line will create error
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%.2f   ", matrix[i][j]);

            if (matrix[i][j] >= max1)
            {
                max1 = matrix[i][j]; 
            }
        } 
        printf("\n");
    }

    // printing
    printf("\nMax number : %.2f\n", max1);
    printf("2nd Max number : %.2f\n", max2);
    printf("Difference : %.2f\n", max1 - max2);

    return 0;
}