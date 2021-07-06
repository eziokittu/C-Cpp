/*
Question : 3
Write a C program to merge two files into a third file,
that is content of the first file merged with those of the second
put in the third file
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Open two files
    FILE *fp1 = fopen("03_file1.txt", "rt");
    FILE *fp2 = fopen("03_file2.txt", "rt");

    // Create a file to store the result
    FILE *fp3 = fopen("03_file3.txt", "wt");
    char c;

    // If there is any error in opening any one of the filesm the program will exit
    if (fp1 == NULL || fp2 == NULL)
    {
        puts("Could not open files");
        exit(0);
    }

    // Copy contents of first file to file3.txt
    while ((c = fgetc(fp1)) != EOF)
        fputc(c, fp3);

    // Copy contents of second file to file3.txt
    while ((c = fgetc(fp2)) != EOF)
        fputc(c, fp3);

    printf("Merged the two files into file3.txt (created in same directory)");

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
