// Question : 40
// Write a program which takes the radius of a circle as
// input from the user, passes it to another function that
// computes the area and the circumference of the circle
// and displays the value of area and circumference from
// the main function

#include <stdio.h>

void Circle(float r)
{
    float a, c;
    float pi = 3.141592;
    printf("The area of the Circle of %.2f radius is : %.2f square units\n", r, pi*r*r);
    printf("The circumference of the Circle of %.2f radius is : %.2f units\n\n", r, 2*pi*r);
}

int main()
{
    int r;
    printf("\nEnter the radius : ");
    scanf("%d", &r);

    Circle(r);

    return 0;
}