// Question : 1
// write a C program to determine if the given string is a palindrome or not.
// Your program must not use any library function related to string

#include<stdio.h>

void main()
{
    int length, i, j;
    char str[1000];
    printf("Enter a String : ");
    scanf("%[^\n]%*c", str);
    // printf("\n");
    //printf("%s", str);

    for (i=0; i<str[i]!='\0'; i++);
    length = i;
    //printf("%d", length);

    j = length-1;
    for (i=0; i<length/2; i++)
    {
        if (str[i] != str[j]) break;
        j--;
    }

    if (i==j) printf("\nThe string '%s' is Palindrome", str);
    else printf("\nThe string '%s' is not Palindrome", str);
}