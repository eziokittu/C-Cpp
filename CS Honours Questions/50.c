// Pattern Question : 50
// 12345
// 2  5
// 3 5
// 45
// 5

#include<stdio.h>

int main()
{
    int r;
    printf("Enter range of the pattern : ");
    scanf("%d", &r);

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= (r-i+1); j++)
        {
            // first line only
            if (i == 1)
                printf("%d ", j);

            // rest of the lines
            else
            {
                // left most 
                if (j == 1)
                    printf("%d ", i);

                // Right most
                else if (j == (r-i+1))
                    printf("%d ", r);
                // spaces
                else
                    printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}