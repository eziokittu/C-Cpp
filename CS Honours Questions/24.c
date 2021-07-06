// Question : 24
// Write a C program to compare two strings using
// pointers and without using string library functions

#include <stdio.h>

int main()
{
    char s1[100], s2[100];
    char *p1, *p2;
    p1 = s1;
    p2 = s2;

    printf("\nEnter String 1 : ");
    scanf("%[^\n]%*c", s1);
    
    printf("Enter String 2 : ");
    scanf("%[^\n]%*c", s2);

    int i = 0;
    for(;p1[i] != '\0'; i++)
    {
        if (p1[i] != p2[i])
        {
            printf("The strings are not same.\n\n");
            return 0;
        }
            
    }
    printf("Both the strings are same.\n\n");
    return 0;
}