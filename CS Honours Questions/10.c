// Question : 10
// Write a C program to multiply two user given
// numerical matrices

#include<stdio.h>

int main()
{
    int r1,c1,r2,c2;
    int i,j,k;

    // getting the matrix rows and columns
    printf("Enter the no. of rows and columns for two matrices,\n");
    printf("such that no. of columns of 1st matrix equals no. of rows of 2nd.\n");
    printf("Matrix 1 --------\nRow : ");
    scanf("%d", &r1);
    printf("Column : ");
    scanf("%d", &c1);
    printf("\nMatrix 2 --------\nRow : ");
    scanf("%d", &r2);
    printf("Column : ");
    scanf("%d", &c2);
    int m1[r1][c1], m2[r2][c2];

    // exit program condition
    if (c1 != r2)
    {
        printf("Error : No. of columns of matrix 1 must be equal to no. of rows of matrix 2.");
        return 0;
    }

    // getting the elements of the matrix
    printf("\n\nEnter the matrix 1 element\n");    
    for(i=0;i<r1;i++)    
    {    
        printf("Row %d -----\n", i+1);
        for(j=0;j<c1;j++)    
        {    
            scanf("%d",&m1[i][j]);    
        }    
    }    
    printf("\nEnter the matrix 2 element=\n");    
    for(i=0;i<r2;i++)    
    {   
        printf("Row %d -----\n", i+1); 
        for(j=0;j<c2;j++)    
        {    
            scanf("%d",&m2[i][j]);    
        }    
    }  

    // Multiplication matrix initializations
    int m3[r2][c1];
    for(i=0;i<r1;i++)    
    {    
        for(j=0;j<c2;j++)    
        {    
            m3[i][j]=0;    
            for(k=0;k<c2;k++)    
            {    
                m3[i][j] += ( m1[i][k] * m2[k][j] );    
            }    
        }    
    }   

    // Printing the matrix  
    printf("\nAfter multiplying : \n") ;
    for(i=0;i<r2;i++)    
    {    
        for(j=0;j<c1;j++)    
        {    
            printf("%d   ",m3[i][j]);    
        }    
        printf("\n");    
    } 

    return 0;
}