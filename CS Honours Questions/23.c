// Question : 23
// Write a C program to find biggest among
// three numbers using pointers

#include <stdio.h>

int main()
{
    int a, b, c;
    int *pa, *pb, *pc;
    pa = &a;
    pb = &b;
    pc = &c;

    // Input
    printf("Enter three numbers -\n");
    printf("Num 1 : ");
    scanf("%d", pa);
    printf("Num 2 : ");
    scanf("%d", pb);
    printf("Num 3 : ");
    scanf("%d", pc);
    
    if (*pa > *pb && *pa > *pc)
    {
        printf("%d is the largest", *pa);
    }
    else if (*pb > *pc)
    {
        printf("%d is the largest", *pb);
    }
    else
    {
        printf("%d is the largest", *pc);
    }

    return 0;
}