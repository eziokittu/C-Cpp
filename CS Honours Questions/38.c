// Question : 38
// Write a C program to print all perfect numbers
// between given interval using functions

// perfect number : 6 = 1+2+3 = 1*2*3

#include<stdio.h>

void PrintPerfectNumbersInRange(int start, int end)
{
    printf("\nAll the Perfect numbers between %d and %d are as follows :\n", start, end);

    int sumAdd;
    for (int i = start; i <= end; i++)
    {
        sumAdd = 0;

        for(int j = 1; j < i; j++)
            if (i%j == 0)
                sumAdd += j;

        if (sumAdd == i) printf("%d ", i);
    }
}

int main()
{
    int start, end;
    printf("Enter the range to find all the perfect numbers in thta interval ---\n");
    printf("start : ");
    scanf("%d", &start);
    printf("end : ");
    scanf("%d", &end);

    PrintPerfectNumbersInRange(start, end);

    return 0;
}