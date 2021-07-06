#include<stdio.h>

void main()
{
	printf("\n"); //line break

	int a,b;
    int *ptr1, *ptr2;
	printf("Enter 2 numbers : \n");
	scanf("%d %d", &a, &b);
    ptr1 = &a;
    ptr2 = &b;
	printf("The sum is : %d", (*ptr1)+(*ptr2));

	printf("\n"); //line break
}