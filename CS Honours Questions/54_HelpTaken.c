// Pattern Question : 54
// Pascal's Triangle
//         1
//        1  1
//       1  2  1
//     1  3  3  1
//   1  4  6  4  1 
//  1  5 10 10 5  1

#include<stdio.h>

int main()
{
    int r, coef = 1, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    for (i = 0; i < r; i++)
    {
        // spaces  
        for (j = 1; j <= r - i; j++)
            printf("  ");

        // pattern
        for (j = 0; j <= i; j++)
        {
            // for left and right most
            if (j == 0 || i == 0)
                coef = 1;

            // rest
            else
                coef = coef * (i - j + 1) / j; // doubt
            
            // printing
            printf("%4d", coef);
        }
        printf("\n");
    }
    return 0;
}