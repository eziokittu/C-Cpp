// Question : 39
// Write a program that prints a table indicating the
// mumber of occurrences of each lower case alphabet
// in the text entered as command line arguements

#include<stdio.h>

int main()
{
    char str[1000];
    int lower[26];
    char c;
    printf("\nEnter a sentence : ");
    gets(str);
    //scanf("%[^\n]%*c", str);

    // initializing the array of lower case
    for (int i = 0; i<26; i++)
    {
        lower[i] = 0;
    }

    //Displaying elements of array    
    printf("\nElements of array before sorting: \n");    
    for (int i = 0; i < 26; i++) {     
        printf("%d ", lower[i]);    
    }

    // getting all the lower case alphabets and storing the occurence in array
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 97) && (str[i] <= 122))
        {
            lower[str[i]-97]++;
        }
    }

    // Displaying alphabets and their occurence of the sentence 
    printf("\n\nAlpabets --  ");
    for (int i = 0; i < 26; i++)
        printf("  %c", 97+i);
    printf("\nOccurence -- ");
    for (int i = 0; i < 26; i++)
    {
        if (lower[i] > 9)
            printf(" %d", lower[i]);
        else 
            printf("  %d", lower[i]);
    }

    return 0;
}

// This is a sentence as an example. Just an useless meaningless sentence. Mind other business reading this already wasted some of your time. Right?