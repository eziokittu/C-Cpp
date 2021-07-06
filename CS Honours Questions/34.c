// Question : 34
// Write a function Palindrome() to check whether a
// given number is palindrome or not. (Return 0 if 
// palindrome and return 1 if not)

#include<stdio.h>

int Palindrome(int n);

int main()
{
    int num;
    printf("Enter a number to check if it is Panindrome or not. ---\n");
    printf("n = ");
    scanf("%d", &num);

    if (Palindrome(num) == 0) printf("The number is Palindrome.");
    else printf("The number is not Palindrome.");

    return 0;
}

int Palindrome(int n)
{
    int sum = 0;
    for (int i = n; i > 0; i=i/10)
    {
        sum = (sum*10) + (i%10);
    }
    if (sum == n) return 0;
    else return 1;
}