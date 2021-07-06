// Question : 7
// write a C program to read a floating point number x,
// and a positive integer n and then compute the sum of
// the geometric progression 1 + x + x2 + x3 + x4 ....
// calculate xn using user defined function

# include <stdio.h>

float sumGP(float x, int n)
{
    
    if (n==1) 
        return 1;
    else
    {
        int i = n, j = 1;
        while (i>1)
        {
            j *= x;
            i--;
        }
        return (j + sumGP(x, n-1));
    }
}   

int main()
{
    float x;
    unsigned int n;

    printf("\nEnter a floating point number x = ");
    scanf("%f", &x);
    printf("Range for G.P. n = ");
    scanf("%d",&n);
    
    printf("\nThe Sum of G.P. is : %f\n\n", sumGP(x,n));

    return 0;
}