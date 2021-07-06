// Question : 35
// Write a C program to delete a specified line
// from a text file.

#include<stdio.h>
#define true 1
#define false 0

int main()
{
    char file1[50] = "35_file1.txt";
    char file2[50] = "35_file2.txt";
    FILE *fp1, *fp2;
    // Working on the files if no errors in opening file
    if ((fp1 = fopen(file1, "rt")) && (fp2 = fopen(file2, "wt+")))
    {
        int line, count = 1;
        char c;

        printf("\nFile open successful");
        printf("\n-------------------Before Line Deletion------------------\n");
        
        // printing the contents of the file - before line delete
        while ((c = fgetc(fp1)) != EOF)
        {
            // Read contents from file
            while (c != EOF)
            {
                printf ("%c", c);
                c = fgetc(fp1);
            }
        }

        printf("\n----------------------------------------------------------\n");
        printf("Which line in the file do you want to delete : ");
        scanf("%d", &line);
        
        // copying file 1 data to file 2 after removing that line
        rewind(fp1);
        while ((c = fgetc(fp1)) != EOF)
        {
            if (c == '\n') count++;
            if (count != line)
            {
                putc(c, fp2);
            }
        }

        printf("------------------After Line Deletion---------------------\n");
        // printing the contents of the file - after line delete
        rewind(fp2);
        while ((c = fgetc(fp2)) != EOF)
        {
            // Read contents from file
            while (c != EOF)
            {
                printf ("%c", c);
                c = fgetc(fp2);
            }
        }

        fclose(fp1);
        fclose(fp2);
        printf("\n----------------------------------------------------------\n");
    }
    else 
    {
        printf("Error in opening files -- \n");
        puts(file1);
        printf("\tOR\n");
        puts(file2);
        printf("Check their name, directory OR may be the files does not exist.");
    }

    return 0;
}