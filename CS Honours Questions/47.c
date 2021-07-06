// Pattern Question : 47
//      1
//     2 3 2
//    3 4 5 4 3
//   4 5 6 7 6 5 4
//  5 6 7 8 9 8 7 6 5
// 6 7 8 9 10 11 10 9 8 7 6

#include<stdio.h>

int main()
{
    int r;
    printf("Enter range of the pattern : ");
    scanf("%d", &r);

    for (int i = 1; i <= r; i++)
    {
        int k=0;
        
        // space
        for (int j = 1; j <= r-i; j++)
        {
            printf("   ");
        }

        // left part
        k = i;
        for (int j = 1; j <= i; j++)
        {
            if (k<10)
                printf(" %d ", k++);
            else
                printf("%d ", k++);
        }

        // Right part
        k = (i*2)-2;
        for (int j = 1; j <= i-1; j++)
        {
            if (k<10)
                printf(" %d ", k--);
            else
                printf("%d ", k--);
        }

        printf("\n");
    }

    return 0;
}