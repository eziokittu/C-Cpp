// Question : 36
// Write a C program to find out the longest word
// in sentence and also reverse the string without
// using string related library functions.

#include <stdio.h>
#define true 1
#define false 0

int main()
{
    char sentence[1000];
    char temp[1000];
    int wordLength=0, wordStart, wordEnd, sentenceLength=0;
    int isWord = false;
    int start, end;
    printf("\nEnter a sentence : ");
    scanf("%[^\n]%*c", sentence);

    // finding the index of the largest word in sentence.
    for (int i=0; sentence[i] != '\0'; i++)
    {
        sentenceLength++;
        
        if ((sentence[i] != ' ') && (isWord == false))
        {
            wordStart = i;
            isWord = true;
        }
        else if ((sentence[i] != ' ') && (isWord == true))
        {
            wordEnd = i;
        }
        else if (sentence[i] == ' ')
        {
            wordEnd = 0;
            wordStart = 0;
            isWord = false;
        }

        // getting the length of the word
        if (wordLength < (wordEnd - wordStart))
        {
            wordLength = (wordEnd - wordStart);
            start = wordStart;
            end = wordEnd;
        }
    }

    // initializing the largest word in the sentence
    for (int i=start, j=0; i<=end; i++, j++)
    {
        temp[j] = sentence[i];  
    }

    printf("The word is : ");
    puts(temp);
    printf("\nstart at index %d, end at index %d", start, end);

    // Reversing the string
    for (int i=0, j=sentenceLength-1; i < sentenceLength; i++, j--)
    {
        temp[i] = sentence[j];
    }
    printf("\nThe Reversed sentence is : ");
    puts(temp);

    return 0;
}

// This is a very good Movie for watching now.