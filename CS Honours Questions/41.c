// Question : 41
// Write a function that reverse the elements of a one
// dimensional array without using or additional array

#include<stdio.h>
#include<stdlib.h>

void ReverseArray(int *ptr, int length)
{
    printf("Enter data into the array -----\n");
    for (int i = 0; i < length; i++)
    {
        printf("Array [%d] : ", i);
        scanf("%d",(ptr+i));
    }
    
    int temp;
    printf("\nReversed Array -----\n");
    for (int i = 0, j = length-1; i <= length/2; i++, j--)
    {
        temp = *(ptr+i) ;
        *(ptr+i) = *(ptr+j);
        *(ptr+j) = temp;
    }

    for (int i = 0; i < length; i++)
        printf("%d ", *(ptr+i));
}

int main()
{
    int r;
    printf("Enter range of 1D array : ");
    scanf("%d", &r);

    int *ptr = (int *)malloc(r * sizeof(int));
    
    ReverseArray(ptr, r);
}