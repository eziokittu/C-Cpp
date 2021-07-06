// WAP to take input of 2 integers and print out their sum. But Input must be taken by getchar() function
// without using pointer
#include<stdio.h>

void main()
{
    int a, sa=0, b, sb=0;

    // User Input of A using getchar()
    proceedHereForA : ;
    if ((a=getchar())!=10)
    {
        sa = (sa * 10) + (a-48);
        //printf("sa = %d\n", sa);
        //printf("a = %c\n", a);
        goto proceedHereForA;
    }
    //printf("Final sa = %d", sa);

    // User Input of B using getchar()
    proceedHereForB : ;
    if ((b=getchar())!=10)
    {
        sb = (sb * 10) + (b-48);
        //printf("sa = %d\n", sb);
        //printf("a = %c\n", b);
        goto proceedHereForB;
    }
    //printf("Final sa = %d", sb);

    printf("\nThe sum of %d and %d is : %d\n", sa, sb, sa+sb);
}
