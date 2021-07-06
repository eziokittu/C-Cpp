// Question : 33
// Find the binomial coefficient
// (n k) = n! / (k! * (n-k)!)
// Choose the apropriate recursive form that will
// compute the coefficients quickly. Example :
// input : n = 9, k = 2
// output : "36"

#include<stdio.h>

int factorial(int a);
float CalculateBinomialExpression(int n, int k);

int main()
{
    int n, k;
    float binomial;

    printf("Enter values 'n' and 'k' for calculating the binomeal expression ----\n");
    printf("n = ");
    scanf("%d", &n);
    printf("k = ");
    scanf("%d", &k);

    printf("\nThe Coefficient of Binomial Expression : %.2f\n\n", CalculateBinomialExpression(n, k));

    return 0;
}

int factorial(int a)
{
    if (a == 1) 
        return 1;
    else 
        return a*factorial(a-1);
}

float CalculateBinomialExpression(int n, int k)
{
    return ( factorial(n) / (factorial(k) * factorial(n-k)) );
}