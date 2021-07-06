// Pattern Question : 51
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *


#include<stdio.h>

int main()
{
    int r;
    printf("Enter range of the pattern : ");
    scanf("%d", &r);

    printf("Pattern logic is same as 49.c just reversed printed -- \n\n");

    // BOTTOM
    for (int i = 1; i <= r; i++)
    {
        // Bottom Left Part
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        // Bottom Spaces
        for (int j = 1; j <= (r-i); j++)
        {
            printf("  ");
        }

        // Bottom Right Part
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // TOP
    for (int i = 1; i <= r; i++)
    {
        // Top Left Part
        for (int j = 1; j <= (r-i+1); j++)
        {
            printf("*");
        }
        // Top Spaces
        for (int j = 1; j <= (i-1); j++)
        {
            printf("  ");
        }
        // Top Right Part
        for (int j = 1; j <= (r-i+1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}