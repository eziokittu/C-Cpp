// Pattern Question : 44
// *
// ***
// *****
// *****
// ***
// *

#include<stdio.h>

int main()
{
    int r;
    printf("Enter range of the pattern : ");
    scanf("%d", &r);

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= (2*i)-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= r; i++)
    {
        for (int j = ((r-i+1)*2)-1; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}