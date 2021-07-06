#include<stdio.h>

void func_Nret_Narg();
int func_Yret_Narg();
void func_Nret_Yarg(int num1, int num2);
int func_Yret_Yarg(int num1, int num2);

void main()
{
    printf("\n-------------------------------------------------------------------------------\n"); //line break
    {
        printf("2.i> User Defined Function - No Return Type - No Arguement\n");
        func_Nret_Narg();
    }
    printf("\n-------------------------------------------------------------------------------\n"); //line break
    {
        printf("2.ii> User Defined Function - Yes Return Type - No Arguement\n");
        printf("Sum is : %d", func_Yret_Narg());
    }
    printf("\n-------------------------------------------------------------------------------\n"); //line break
    {
        printf("2.iii> User Defined Function - No Return Type - Yes Arguement - Call By Value\n");
        int a3, b3;
        printf("Enter 2 integer numbers : \n");
        scanf("%d %d", &a3, &b3);
        func_Nret_Yarg(a3, b3);
    }
    printf("\n-------------------------------------------------------------------------------\n"); //line break
    {
        printf("2.iv> User Defined Function - Yes Return Type - Yes Arguement - Call by Value\n");
        int a4, b4;
        printf("Enter 2 integer numbers : \n");
        scanf("%d %d", &a4, &b4);
        printf("Sum is : %d", func_Yret_Yarg(a4, b4));
    }
    printf("\n-------------------------------------------------------------------------------\n"); //line break
}

void func_Nret_Narg()
{
    int a1, b1;
    printf("Enter 2 integer numbers : \n");
    scanf("%d %d", &a1, &b1);
    printf("Sum is : %d", a1+b1);
}

int func_Yret_Narg()
{
    int a2, b2;
    printf("Enter 2 integer numbers : \n");
    scanf("%d %d", &a2, &b2);
    return a2+b2;
}

void func_Nret_Yarg(int a3, int b3)
{
    printf("Sum is : %d", a3+b3);
}

int func_Yret_Yarg(int a3, int b3)
{
    return a3+b3;
}