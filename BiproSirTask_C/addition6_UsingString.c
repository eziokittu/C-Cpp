#include<stdio.h>

int strToInt(char* str)
{
    int result = 0;
    for (int i = 0; str[i] != '\0'; ++i)
        result = result * 10 + str[i] - '0';
    return result;
}

void main()
{
    printf("\n"); //line break

    char a[10], b[10], sum[11];
    printf("Enter 2 integer numbers : \n");
    gets(a);
    gets(b);
    printf("Sum is : %d", strToInt(a) + strToInt(b) );

    printf("\n"); //line break
}
