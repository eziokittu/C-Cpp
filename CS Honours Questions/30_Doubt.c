// Question : 30
// Write a C program to compute Sin(x) using Taylor
// series approximation given by :
// Sin(x) = x - (x^3 / 3!) + (x^5 / 5!) - (x^7 / 7!) + ...
// Consider 5 terms of the series while computing the
// the balue of Sin(x).

#include <stdio.h>
#define sqr(a) a*a

int main()
{
    int factorial(int a);
    float SineXUsingTaylorSeriesApproximation(float x, int count);

    float x;
    int count = 5;

    printf("Enter x (in Sin(x)) : ");
    scanf("%f", &x);

    printf("\nUsing Taylor Series Approximation, Sin(%.2f) = ", x);
    printf("%.2f\n\n", SineXUsingTaylorSeriesApproximation(x, 5));

    return 0;
}

int factorial(int a)
{
    if (a == 1) 
        return 1;
    else 
        return a*factorial(a-1);
}

float SineXUsingTaylorSeriesApproximation(float x, int count)
{
    int sign = (count%2 == 1) ? 1 : -1;

    if (count == 1)
        return x;
    else 
        return ( (sign* (sqr(x) / factorial((count*2)-1)) ) + (SineXUsingTaylorSeriesApproximation(x, count-1)) );
}