// Question : 22
// Write a C program to display the reverse of a user given number.
// Also find the difference of these numbers

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    // Reversing
    int rev=0;
    for (int i = num; i > 0; i = i / 10)
    {
        rev = (rev*10) + i%10;
    }
    printf("\nReverse of the number : %d", rev);

    // Difference
    printf("\nThe difference between %d and %d is : ", num, rev);
    if (num > rev)
        printf("%d", num - rev);
    else
        printf("%d", rev - num);

    return 0;
}