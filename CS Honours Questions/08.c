// Question : 8
// Write a program to assign integer numbers to a
// 3 x 3 matrix. Calculate the sum of even numbers
// and odd numbers separately. Finallyy display the
// difference between the two calculated sum.

#include <stdio.h>

int main()
{
    int matrix[3][3], sumEven =0, sumOdd = 0;

    printf("Enter integer numbers for 3 x 3 matrix ---\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Row %d ---\n", i);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] % 2 == 0)
            {
                sumEven += matrix[i][j];
            }
            else if (matrix[i][j] % 2 == 1)
            {
                sumOdd += matrix[i][j];
            }
        }   
    }

    int d = sumEven - sumOdd;
    if (d<0)
    {
        d *= -1;
    }
    printf("\nSum of even numbers : %d", sumEven);
    printf("\nSum of odd numbers : %d", sumOdd);
    printf("\nDifference : %d", d);

    return 0;
}