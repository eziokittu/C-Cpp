// WAP to take input of 2 integers and print out their sum. But Input must be taken by getchar() function
#include<stdio.h>

void main()
{
    int a, * pa, sa = 0;
    int b, * pb, sb = 0;

    // User Input of A using getchar()
    printf("Enter the 1st Integer : ");
proceedHereForA:;
    a = getchar();
    pa = &a;
    if ((*pa != 10) && (*pa > 47) && (*pa < 58))
    {
        //printf("\n*p is %d", *pa); 
        sa = (sa * 10) + (*pa - 48);
        goto proceedHereForA;
    }
    //printf("\nsa is %d", sa);

    // User Input of B using getchar()
    printf("Enter the 2nd Integer : ");
proceedHereForB:;
    b = getchar();
    pb = &b;
    if ((*pb != 10) && (*pb > 47) && (*pb < 58))
    {
        //printf("\n*p is %d", *pb); 
        sb = (sb * 10) + (*pb - 48);
        goto proceedHereForB;
    }
    //printf("\nsb is %d", sb);

    printf("The sum of the integers %d and %d is : %d\n", sa, sb, sa + sb);
}
