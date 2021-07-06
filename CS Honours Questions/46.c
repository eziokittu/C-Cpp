// Pattern Question : 46
// 

#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter a string to get its pattern : ");
    gets(str);
    int r , i;
    for (i = 0; str[i] != '\0'; i++);
    r = i;
    printf("Range = %d\n", r);

    // top part
    for (int i = 1; i <= r/2; i++)
    {
        for (int j = 1; j <= i*2; j++)
        {
            printf("%c", str[j-1]);
        }
        printf("\n");
    }

    // bottom part
    for (int i = 1; i < r/2; i++)
    {
        for (int j = 1; j <= (r/2-i)*2; j++)
        {
            printf("%c", str[j-1]);
        }
        printf("\n");
    }

    return 0;
}

// UNIVERSITY