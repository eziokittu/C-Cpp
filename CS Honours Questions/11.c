// Question : 11
// Write a C program to print the diagonal elements
// of a user given numerical matrix.

# include <stdio.h>

int main()
{
    int r,i,j, k=0;
    printf("For printing the diagonal elements of the matrix, (rows equals columns)\n");
    printf("Range of matrix = : ");
    scanf("%d", &r);
    
    // getting the elements of the matrix
    int m[r][r];
    printf("\n\nEnter (integer) matrix elements ----------\n");    
    for(i=0;i<r;i++)    
    {    
        printf("Row %d -----\n", i+1);
        for(j=0;j<r;j++)    
        {    
            scanf("%d",&m[i][j]);    
        }    
    }

    // Printing the matrix diagonal elements 
    printf("\nPrinting Diagonal elements only.\n") ;
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<r;j++)    
        {    
            if (i==j || i+j == r-1)
                printf("%d ",m[i][j]);    
            else   
                printf("   ");
        }    
        printf("\n");    
    }

    return 0;
}