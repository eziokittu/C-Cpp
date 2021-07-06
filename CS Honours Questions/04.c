// Question : 4
// Write a C program that will print the number of
// vowels present in the given line of text terminated 
// by a stop. Your program should also eliminate all
// white spaces and then print it.

# include <stdio.h>

int main()
{
    // declaring variables
    char str[1000];
    int length, count=0, i, j=0;

    // getting user string input
    printf("Enter a line of text : ");
    gets(str);

    // iterating the string to get the length
    for (i=0; str[i]!='\0'; i++);
    length = i;
    
    // iterating the string to count the vowels until stop '.',
    for (i = 0; i < length; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
        || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
        if (str[i] == '.') break;
    }
    // printig the number of vowels
    printf("\nNo of vowels in the given string : %d", count);

    // iterating to remove the white spaces
    for (i = 0; i < length; i++)
    {
        while (str[i+j] == ' ')
        {
            j++;
        }
        str[i] = str[i+j];
    }
    // printing the string without the spaces
    printf("\nOutput string : ");
    puts(str);

    // Example string : (for copy paste)
    // Hello my name is Ram. I belong from Bangladesh. This is my 1st day in India.

    return 0;
}