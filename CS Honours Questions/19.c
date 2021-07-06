// Question : 19
// Write a C program to check whether a number is
// Armstrong or perfect number using functions

// Armstrong Number
// 153 = 1cube + 5cube + 3cube
// 370 = 3cube + 7cube + 0cube

// Perfect Number
// a perfect number is a positive integer that is equal to the sum of its 
// positive divisors, excluding the n umber itself. For instance,
// 6 has divisors 1, 2 and 3, and 1 + 2 + 3 = 6, so 6 is a perfect number.

# include <stdio.h>

# define cube(a) a*a*a

// The function won't work with higher numbers
void CheckNumber_Armstrong_Perfect(int n)
{
    long a, sum=0, mul=1;

    // Armstrong
    for (a = n; a>0; a /= 10)
    {
        sum += cube((a%10));
    }
    if (sum == n)
        printf("'%ld' is an Armstrong number.\n", n);
    else
        printf("'%ld' is not an Armstrong number.\n", n); 

    // Perfect Number
    sum = 0;
    for (a=1; a<=n/2; a++)
    {
        if (n%1 == 0)
        {
            sum += a;
            mul *= a;
        }        
    }
    if (sum == mul && sum == n)
        printf("'%ld' is a Perfect number.\n", n); 
    else
        printf("'%ld' is not a Perfect number.\n", n); 
}

int main()
{
    long n;
    printf("Enter a number to check if it is 'Armstrong number' or 'Perfect number' or not. ---\n");
    printf("number : ");
    scanf("%ld", &n);

    CheckNumber_Armstrong_Perfect(n);

    return 0;
}