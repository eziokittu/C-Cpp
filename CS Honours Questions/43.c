// Pattern Question : 43
//    *
//   ***
//  *****
// *******

#include<stdio.h>

int main()
{
    int r;
    printf("Enter range of the pattern : ");
    scanf("%d", &r);

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r-i; j++)
        {
            printf("  ");
        }

        for (int j = 1; j <= (2*i)-1; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}