// Question : 2
// 2's compliment of a number is obtained by scanning it from right to left
// and complementing all the bits after the first appearance of a 1.
// Thus 2's compliment of 11100 is 00100.
// Write a C program to find the complement of a binary number

#include<stdio.h>

// global boolean variable
int startComplementing = 0;

// a function that makes 0 --> 1 and 1 --> 0
char complement(char n)
{
    if (n == '0') return '1';
    else return '0';    
}

void main()
{
    // declaring variables
    int length, i, j;
    char str[100];

    // getting the binary number as a string
    printf("Enter a binary number : ");
    gets(str);

    // getting the length of the binary number
    for (i=0; i<str[i]!='\0'; i++);
    length = i;

    // checking if the string is in the form of a binary number that is (0,1)
    for (i=0; i<length; i++)
    {
        if (str[i] != '0' && str[i] != '1') break;
    }

    // if the inputted string is a binary numbers we 
    // do the 2's complement
    if (i == length) 
    {
        printf("Binary number : %s");
        puts(str);

        // iterating the sting from rigth to left (backwards)
        for (j=i-1; j>=0; j--)
        {
            if (str[j] == '1' && startComplementing == 0)
            {
                startComplementing = 1;
            }
            else if (startComplementing == 1)
            {
                str[j] = complement(str[j]);
            }
        }

        // Printing the 2's complement of the entered binary number
        printf("2's complement : %s");
        puts(str);
    }
    // not a binary number
    else
    {
        printf("\nNot a binary number!");
    }
}