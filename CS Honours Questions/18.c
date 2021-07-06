// Question : 18
// Define a structure "complex" (typedef) to read two
// complex numbers and perform addition, substraction
// of these two complex numbers and display the result

# include <stdio.h>

typedef struct complexNumber 
{
    float r;
    float c;
} 
complex;

void ComplexNumber_Operations(complex a, complex b, complex* add, complex* sub)
{
    // addition
    add->r = (a.r + b.r);
    add->c = (a.c + b.c);

    // subtraction
    sub->r = (a.r - b.r);
    sub->c = (a.c - b.c);
}

int main()
{
    complex z1, z2, add, sub;

    printf("Enter two complex numbers (In the form A + iB)\n\n");
    printf("For 1st Complex no.-----\n");
    printf("Real part : ");
    scanf("%f", &z1.r);
    printf("Complex part : ");
    scanf("%f", &z1.c);
    printf("\nFor 2nd Complex no. -----\n");
    printf("Real part : ");
    scanf("%f", &z2.r);
    printf("Complex part : ");
    scanf("%f", &z2.c);

    ComplexNumber_Operations(z1, z2, &add, &sub);

    printf("\nAdding complex numbers -----\n");
    printf("(%.2f + %.2fi) + ", z1.r, z1.c);
    printf("(%.2f + %.2fi) = ", z2.r, z2.c);
    printf("(%.2f + %.2fi)\n", add.r, add.c);

    printf("\nSubstracting complex numbers -----\n");
    printf("(%.2f + %.2fi) - ", z1.r, z1.c);
    printf("(%.2f + %.2fi) = ", z2.r, z2.c);
    printf("(%.2f + %.2fi)\n", sub.r, sub.c);

    return 0;
}