// Question : 14
// Write a C program that uses user defined functions to
// perform multiplication of two complex numbers. 

#include <stdio.h>

struct complexNumber 
{
    float r;
    float c;
};

void MultiplyComplexNumbers(struct complexNumber a, struct complexNumber b, struct complexNumber* mul)
{
    // z1 = a.r + ia.c
    // z2 = b.r + ib.c
    // z1 * z2 = mul = (a.r + ia.c) * (b.r + ib.c)
    mul->r = (a.r * b.r) - (a.c * b.c);
    mul->c = (a.r * b.c) + (b.r * a.c);
}

int main()
{   
    struct complexNumber z1, z2, mul;
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

    MultiplyComplexNumbers(z1, z2, &mul);

    printf("\nMultiplying complex numbers -----\n");
    printf("(%.2f + %.2fi) * ", z1.r, z1.c);
    printf("(%.2f + %.2fi) = ", z2.r, z2.c);
    printf("(%.2f + %.2fi)", mul.r, mul.c);

    return 0;
}