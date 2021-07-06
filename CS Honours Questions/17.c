// Question : 17
// Write a C program using switch-case statement to find
// and display Area of a Circle, Area of a Square and 
// Area of a triangle;

# include <stdio.h>

#define pi 3.141592
#define sqr(a) a*a

void CalculateArea(char choice)
{
    float area, var1, var2;

    // Circle
    if (choice == 'c')
    {
        printf("\nEnter thte radius of the circle : ");
        scanf("%f", &var1);
        area = pi * sqr(var1);
        printf("Area of the Circle : %.2f square units\n\n", area);
    }

    // Square
    else if (choice == 's')
    {
        printf("\nEnter the side length of the square : ");
        scanf("%f", &var1);
        area = sqr(var1);
        printf("Area of the Square : %.2f square units\n\n", area);
    }

    // Triangle
    else 
    {
        printf("\nEnter the base and height of the triangle ---\n");
        printf("Base : ");
        scanf("%f", &var1);
        printf("Height : ");
        scanf("%f", &var2);
        area = 0.5 * var1 * var2;
        printf("Area of the Triangle : %.2f square units\n\n", area);
    }

}

int main()
{
    char c[100];
    int correctInput = 0;
    printf("\nEnter 'c' for circle, 's' for square, 't' for triangle [any other key will exit the program]\n");

    while (correctInput == 0)
    {
        printf("Choice : ");
        scanf("%c", &c);

        switch (c[0])
        {
            case 'c':
                CalculateArea(c[0]);
                correctInput = 1;
                break;
            
            case 's':
                CalculateArea(c[0]);
                correctInput = 1;
                break;
            
            case 't':
                CalculateArea(c[0]);
                correctInput = 1;
                break;
            
            default:
                printf(" ---------Wrong choice. Enter 'c' for circle, 's' for square, 't' for triangle---------- \n");
                break;
        }
    }  

    return 0;
}