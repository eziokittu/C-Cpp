#include<stdio.h>

void main()
{
	printf("\n"); //line break

    struct add_DataType
    {
        int memberVar1;
        int memberVar2;
    };
    struct add_DataType add_Object;
	printf("Enter 2 numbers : \n");
	scanf("%d %d", &add_Object.memberVar1, &add_Object.memberVar2);
	printf("The sum is : %d", (add_Object.memberVar1) + (add_Object.memberVar2) );

	printf("\n"); //line break
}