// Pattern Question : 45
// *********
//  *******
//   *****
//    ***
//     *

#include<stdio.h>

int main()
{
    int r;
    printf("Enter range of the pattern : ");
    scanf("%d", &r);

    for (int i = 1; i <= r; i++)
    {
        //spaces
        for (int j = 1; j <= i-1; j++)
        {
            printf("  ");
        }

        // left part
        for (int j = 1; j <= (r-i+1); j++)
        {
            printf("* ");
        }

        // right part
        for (int j = 1; j <= (r-i); j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}