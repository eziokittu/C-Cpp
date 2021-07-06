// Question : 32
// Your program must read three positive integers N, X
// and Y as input. Add all natural numbers below N that
// are multiples of Y or X and display the funal sum.
// If the input from the user is " 10 3 5", then your
// output must be "23" (i.e. 3+5+6+9)

#include <stdio.h>

int main()
{   
    int n, x, y, sum=0;
    printf("Enter values for the range 'N' and the multiples 'X' and 'Y' ---\n");
    printf("N = ");
    scanf("%d", &n);
    printf("X = ");
    scanf("%d", &x);
    printf("Y = ");
    scanf("%d", &y);

    printf("Sum = Adding numbers (");
    for (int i = 1; i < n; i++)
    {
        if (i%x == 0 || i%y == 0)
        {
            printf(" %d ", i);
            sum += i;
        }
    }
    printf(") = %d", sum);

    return 0;
}