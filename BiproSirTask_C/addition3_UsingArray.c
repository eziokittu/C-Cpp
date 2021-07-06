#include<stdio.h>

void main()
{
	printf("\n"); //line break

	int a,b, arr[2], i, sum=0;
	printf("Enter 2 numbers : \n");
	for(i=0; i<2; i++)
	{
		scanf(" %d", &arr[i]);
	}
	for(i=0; i<2; i++)
	{
		sum+=arr[i];
	}
	printf("The sum is : %d", sum);

	printf("\n"); //line break
}