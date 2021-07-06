// Question : 28
// Write a C program to find the number of lines
// and number of words in a text file

#include <stdio.h>
#define true 1
#define false 0

int main()
{
    FILE *fp;
    char c;
    int countWords = 0, countLines = 0; 
    int lastLetterWasNotSpace = true;

    // Opening the file
    if (fp = fopen("28_file.txt", "rt") )
    {
        printf("Opened File 28_file.txt\n");
        while ((c = fgetc(fp)) != EOF)
        {
            if(c == ' ' || c == '\n') 
		    { 
			    //printf("\n"); 
                if (lastLetterWasNotSpace)
                {
                    ++countWords; 
                    lastLetterWasNotSpace = false;
                }
		    } 
            else 
            { 
                //printf("%c", c); 
                lastLetterWasNotSpace = true;
            }

            if (c == '\n')
            {
                countLines ++;
            }
        }
        fclose(fp);

        printf("\nThis file has %d words in it.", countWords+1);
        printf("\nThis file has %d lines in it.", countLines+1); 
    }

    // if File does not exist or directory is wrong
    else
        printf("Error in opening File. Check the name or directory!");


    return 0;
}