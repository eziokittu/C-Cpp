// Pattern Question : 53
// 1
// 1 2
// 1   3
// 1     4
// 1 2 3 4 5

#include<stdio.h>

int main()
{
    int r;
    printf("Enter range of the pattern : ");
    scanf("%d", &r);

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // last line only
            if (i == r)
                if (j<10)
                    printf(" %d ", j);
                else
                    printf("%d ", j);

            // rest of the lines
            else
            {
                // left most 
                if (j == 1)
                    printf(" %d ", 1);

                // Right most
                else if (j == i)
                {
                    if (j<10)
                        printf(" %d ", j);
                    else
                        printf("%d ", j);
                }
                    
                // spaces
                else
                    printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}