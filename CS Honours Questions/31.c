// Question : 31
// Design and develop a C function Right Shift (x, n) 
// that takes two integers x and n as input and returns
// value of the integer x rotated to the right by n 
// positions. Assume the integers are unsigned.

#include <stdio.h>

int power(int x, int n);
unsigned int RightShift(unsigned int x, int n);

int main()
{
    unsigned int x;
    int n;

    printf("Enter a number 'x' to be Right Shifted by 'n' positions ---\n");
    printf("x = ");
    scanf("%i", &x);
    printf("n = ");
    scanf("%d", &n);

    printf("After Right Shifting : x = %i\n\n", RightShift(x, n));
    
    return 0;
}

unsigned int RightShift(unsigned int x, int n)
{
    int bits = 16;
    int arr[bits];
    unsigned int sum = x;

    // initialization of the binary number to all 0
    printf("\nBinary of the number initialized with zeroes.\n");
    for (int i=0; i<bits; i++)
    {
        arr[i] = 0;
    }
    
    // getting the binary number (ordered from left to right)
    printf("Getting actual Binary number.\n");
    for (int i=bits-1; i>=0; i--)
    {
        if ((power(2, i)) <= sum)
        {
            printf("1 ");
            arr[i] = 1;
            sum = (sum - power(2, i));
        }
        
        else printf("0 ");
    }

    // Right Shifting the binary (array numbers shift to left relatively)
    printf("\nRight Shifting. (Left to Right order)\n");
    for (int i=0; i<bits; i++)
    {
        if (i-n >= 0)
            arr[i-n] = arr[i];
    }
    for (int i=1; i<=n; i++)
    {
        arr[bits-i] = 0;
    }

    // calculating the number
    sum = 0;
    for (int i=0; i<bits; i++)
    {
        if (arr[i] == 1)
        {
            printf("1 ");
            sum = sum + power(2, i);
        }
        else printf("0 ");
    }

    printf("\nGetting the actual number.\n");

    return sum;
}

int power(int x, int n)
{
    if (n <= 1)
        return (x*n);
    else
        return ( x * power(x, n-1) );
}