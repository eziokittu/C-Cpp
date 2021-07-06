// Pattern Question : 49
// **********
// ****  ****
// ***    ***
// **      **
// *        *   n = 5
// **      **
// ***    ***
// ****  ****
// **********

#include<stdio.h>

int main()
{
    int r;
    printf("Enter range of the pattern : ");
    scanf("%d", &r);

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

    return 0;
}