// Question : 15
// Write a C program using pointers to compute the sum and
// mean of all elements stored in an array of n real numbers

# include <stdio.h>

int main()
{
    int range;
    float sum=0, mean=0;
    printf("Enter the range of elements in the array : ");
    scanf("%d", &range);
    float arr[range];
    float* ptr;
    ptr = arr;

    // Getting the data for the array using pointers
    printf("Enter data in the array :\n");
    for (int i = 0; i < range; i++)
    {
        printf("Index [%d] : ", i);
        scanf("%f", ptr+i);
        sum += ptr[i];
    }
    mean = sum / range;
    
    // Printing
    printf("\nThe Sum and Mean of all the elements of the array are as follows :");
    printf("\nSum = (");
    for (int i = 0; i < range; i++)
    {
        printf("%.2f", *ptr+i);
        if (i != range-1)
            printf(" + ");
    }
    printf(") = %.2f", sum);
    printf("\nMean = %.2f", mean);

    return 0;
}