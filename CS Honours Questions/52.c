// Pattern Question : 52
//       1
//     2 1 2
//   3 2 1 2 3
// 4 3 2 1 2 3 4

#include<stdio.h>

int main()
{
    int r;
    printf("Enter range of the pattern : ");
    scanf("%d", &r);

    for (int i = 1; i <= r; i++)
    {
        // spaces
        for (int j = 1; j <= (r-i); j++)
        {
            printf("   ");
        }

        // left part
        for (int j = i; j >= 1; j--)
        {
            if (j<10)
                printf(" %d ", j);
            else
                printf("%d ", j);
        }

        // Right part
        for (int j = 2; j <= i; j++)
        {
            if (j<10)
                printf(" %d ", j);
            else
                printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}