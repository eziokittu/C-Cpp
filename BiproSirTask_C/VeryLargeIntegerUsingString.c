//WAP to input a very large number
#include <stdio.h> 
#include<string.h>

void main()
{
	int CalculateAddition(char ch1, char ch2);
	int CalculateCarryOver(char ch1, char ch2);
	
	char a[100], b[100];
	printf("Enter the first very large integer : ");
	gets(a);
	printf("Enter the second very large integer [Make sure it's length is lesser than the prvious one]: ");
	gets(b);
	int aLen =strlen(a), bLen = strlen(b), size, m, n, temp;

	// Calculation and store data in int array
    if (aLen > bLen)
    {
        size = aLen;
        m = aLen-1;
        n = bLen-1;
    } 
    else 
    { 
        size = bLen;
        m = bLen-1;
        n = aLen-1;
    }
    //printf("size = %d\n", size);
    //printf("m = %d\n", m);
    //printf("n = %d\n", n);
    int sum[size], i;
    for(i=size;i>=0;i--) // Initializing every element with 0
    {
        sum[i] = 0;
    }
    for(i=size;i>=0;i--)
    {
        if(m>=0 && n>=0)
        {
            sum[i]=( CalculateAddition(a[m], b[n]) + CalculateCarryOver(a[m+1],b[n+1]) ) % 10;
            //printf("n positive sum[%d] = %d\n", i, sum[i]);
            if(CalculateCarryOver(a[m+1],b[n+1]) && (n>-2) && CalculateAddition(a[m], b[n])==9)
            {
                b[n]+=1;
            }
        }
        else if (m>=0 && n<0)
        { 
            if (n>-2)
            {
                sum[i] = (a[m]-'0') + CalculateCarryOver(a[m+1],b[n+1]);
            }
            else sum[i] = (a[m]-'0') + CalculateCarryOver(a[m+1],'0');
            //printf("n negative sum[%d] = %d\n", i, sum[i]);
        }
        m--;
        n--;
    }

    // Output
    printf("sum : ");
    for(i=0;i<=size;i++)
    {
        printf("%d", sum[i]);
    }
}

int CalculateAddition(char ch1, char ch2)
{
    int n1 = ch1-'0', n2 = ch2-'0';
    if ((n1+n2) == 10) return 0;
	else if ((n1+n2) < 11) return n1+n2;
	else
	{
		return (n1+n2)%10;
	}
}

int CalculateCarryOver(char ch1, char ch2)
{
	int n1 = ch1-'0', n2 = ch2-'0';
    if (n1+n2 < 10) return 0;
	else return 1;
}
