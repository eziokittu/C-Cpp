// Question : 26
// Write a C program to find the number of words in a file

#include<stdio.h>

#define true 1
#define false 0


int main()
{
    FILE *fp;
    char c;
    int count = 0; 
    int lastLetterWasNotSpace = true;

    // Opening the file
    if (fp = fopen("26_file.txt", "rt") )
    {
        while ((c = fgetc(fp)) != EOF)
        {
            if(c == ' ' || c == '\n') 
		    { 
			    printf("\n"); 
                if (lastLetterWasNotSpace)
                {
                    ++count; 
                    lastLetterWasNotSpace = false;
                }
		    } 
            else 
            { 
                printf("%c", c); 
                lastLetterWasNotSpace = true;
            } 
        }
        fclose(fp);

        printf("\nThis file has %d words in it.", count+1); 
    }

    // if File does not exist or directory is wrong
    else
        printf("Error in opening File. Check the name or directory!");

    return 0;
}