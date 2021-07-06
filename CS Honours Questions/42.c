// Pattern Question : 42
// 12345
// 1234
// 123
// 12
// 1

#include<stdio.h>

int main()
{
    int r;
    printf("Enter range of the pattern : ");
    scanf("%d", &r);

    for (int i = 0; i < r; i++)
    {
        for (int j = 1; j <= (r-i); j++)
        {
            printf("%d  ", j);
        }
        printf("\n");
    }

    return 0;
}