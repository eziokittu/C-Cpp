// WAP to take input of 2 integers and print out their sum. But Input must be taken by getchar() function
// without using pointer
#include<stdio.h>
#include<ctype.h>

int main()
{
    int a, b, sa=0, sb=0;

    printf("Enter 1st integer : ");
    while (a=getchar())
    {
        if (isdigit(a))
        {
            //printf("\na = %d", a);
            sa=(sa*10) + (a-'0');
        }
        else if (a=='\n')
        {
            break;
        }
        else 
        {
            printf("\nYou failed to enter an Integer.\n");
            goto exitMain;
        }
    }

    printf("Enter 2nd integer : ");
    while (b=getchar())
    {
        if (isdigit(b))
        {
            //printf("\na = %d", b);
            sb=(sb*10) + (b-'0');
        }
        else if (b=='\n')
        {
            break;
        }
        else
        {
            printf("\nYou failed to enter an Integer.\n");
            goto exitMain;
        }  
    }

    printf("The sum of %d and %d is %d\n", sa, sb, sa+sb);
    
    exitMain : ;
    return 0;
}
