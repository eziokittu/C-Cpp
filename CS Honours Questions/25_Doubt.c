// Question : 25
// Write a C program which offers user a choice of
// converting integers between octal, decimal and
// hexadecimal. Prompt the user for either 'o', 'd'
// or 'h' and read the number into the chosen format.
// Then prompt the user for the output format (same)
// and print the numbers out accordingly

#include <stdio.h>

int main()
{
    int input;
    char choice1;
    char choice2;

    printf("Give your choice - ['o' for OCTAL, 'd' for DECIMAL, 'h' for HEXADECIMAL]\n");
    printf("Your Choice :");
    scanf("%c", &choice1);

    printf("Enter the number you want to enter : ");
    switch (choice1)
    {
        case 'o':
        {
            scanf("%o", &input);
            break;
        }
        case 'd':
        {
            scanf("%d", &input);
            break;
        }
        case 'h':
        {
            scanf("%x", &input);
            break;
        }
        
        default:
        {
            printf("Wrong choice Try Again");
            return 0;
        }
    }

    printf("\nFor Conversion --- Give your choice - ['o' for OCTAL, 'd' for DECIMAL, 'h' for HEXADECIMAL]\n");
    printf("Your Choice : ");
    scanf("%c");
    scanf("%c", &choice2);

    switch (choice2)
    {
        printf("\nAfter conversion : ");
        
        case 'o':
        {
            printf("%o [OCTAL]", input);
            break;
        }
        case 'd':
        {
            printf("%d [DECIMAL]", input);
            break;
        }
        case 'h':
        {
            printf("%x [HEXADECIMAL]", input);
            break;
        }
        
        default:
        {
            printf("%d [wrong choice DECIMAL by default]", input);
        }
    }

    return 0;
}