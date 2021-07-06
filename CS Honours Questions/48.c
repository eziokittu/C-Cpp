// Pattern Question : 48
//     1
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5

#include<stdio.h>

int main()
{
    int r;
    printf("Enter range of the pattern : ");
    scanf("%d", &r);

    for (int i = 1; i <= r; i++)
    {
        int k=1;

        // space
        for (int j = 1; j <= r-i; j++)
        {
            printf("   ");
        }

        // pattern
        for (int j = 1; j <= (i*2)-1; j++)
        {
            if (i == r)
            {
                if (j%2==1)
                {
                    if (k<10)
                        printf(" %d ", k++);
                    else
                        printf("%d ", k++);
                }
                else
                    printf("   ");
            }
            else
            {
                if (j == 1)
                    printf(" 1 ");
                else if (j == (i*2)-1)
                {
                    if (i<10)
                        printf(" %d ", i);
                    else
                        printf("%d ", i);
                } 
                else
                    printf("   ");
            }
        }

        printf("\n");
    }
    printf("\n");
    
    return 0;
}