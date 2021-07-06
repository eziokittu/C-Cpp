// Question : 27
// Write a C proram to perform reverse without
// changing the position of special characters 
// for the given string
// Example :
// Input : a@gh%;j
// Output : j@hg%;a

#include<stdio.h>

int main()
{
    char str1[60], str2[60];
    int length, j, i;

    // getting string input
    printf("Please insert the string you want to reverse: ");
    //gets(mystrg);
    scanf("%[^\n]%*c", str1);

    // getting string length, copying str1 in str2
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    length = i;

    // reverse the string with exceptions
    i = 0;
    for(j = length - 1; j >= 0; j--)
    {
        if ( (str1[j] >= 97 && str1[j] <= 122) || (str1[j] >= 65 && str1[j] <= 90) || (str1[j] >= 48 && str1[j] <= 57) )
        {
            while ((str2[i] >= 97 && str2[i] <= 122) || (str2[i] >= 65 && str2[i] <= 90) || (str2[i] >= 48 && str2[i] <= 57) )
            {
                str2[i] = str1[j];
                i++;
            }
        }
    }
    str2[i] = '\0';

    printf("Reverse = %s\n", str2);

    return 0;
}

// if ( str[i] >= 97 || str[i] <= 122 || str[i] >= 65 || str[i] <= 90 || str[i] >= 48 || str[i] <= 57 ) 
// if (str[j] >= 97 || str[j] <= 122 || str[j] >= 65 || str[j] <= 90 || str[j] >= 48 || str[j] <= 57)