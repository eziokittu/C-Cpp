#include<stdio.h>

void func_Nret_Yarg_ref(int *num1, int *num2);
int func_Yret_Yarg_ref(int *num1, int *num2);

void main()
{
    printf("\n-------------------------------------------------------------------------------\n"); //line break
    {
        printf("7.i> User Defined Function - No Return Type - Yes Arguement - Call By Reference\n");
        int a1, b1;
        printf("Enter 2 integer numbers : \n");
        scanf("%d %d", &a1, &b1);
        func_Nret_Yarg_ref(&a1, &b1);
    }
    printf("\n-------------------------------------------------------------------------------\n"); //line break
    {
        printf("7.ii> User Defined Function - Yes Return Type - Yes Arguement - Call by Reference\n");
        int a2, b2;
        printf("Enter 2 integer numbers : \n");
        scanf("%d %d", &a2, &b2);
        printf("Sum is : %d", func_Yret_Yarg_ref(&a2, &b2));
    }
    printf("\n-------------------------------------------------------------------------------\n"); //line break
}

void func_Nret_Yarg_ref(int *num1, int *num2)
{
    printf("Sum is : %d", (*num1) + (*num2) );
}

int func_Yret_Yarg_ref(int *num1, int *num2)
{
    return (*num1) + (*num2);
}

