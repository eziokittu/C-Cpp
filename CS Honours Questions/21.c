// Question : 21
// Write a menu driven program in C to search an
// element, insert and delete an element at a
// specific position in the array

# include <stdio.h>
# include <stdlib.h>

// Display the array
void DisplayArray(int* ptr, int range)
{
    printf("No. of elements in array : %d\n", range);
    printf("Displaying Array : ");
    for (int i = 0; i < range; i++)
    {
        printf("%d",ptr[i]);
        if (i != range-1) printf("  ");
        else printf("\n");
    }
}

// function to insert, delete and search an element in an array ---
int ArrayOperations(int c, int* ptr, int* range)
{
    int n1 = *range;

    // Choice is 4 - Exit program
    if (c == 4) return 0;

    // Choice is 1 - Insert elements to array
    else if (c == 1)
    {
        printf("Current no. of elements in array : %d", n1);

        // Insert index
        int index;
        printf("\nAt which index do you want to insert? (Invalid index will insert the elements at the end) -");
        printf("\nIndex : ");
        scanf("%d", &index);

        // No. of elements to be inserted
        int n2;
        printf("How many elements do you want to insert? - ");
        scanf("%d", &n2);

        // Allocating memory
        *range = n1+n2;
        ptr = (int*)realloc(ptr, (n1+n2) * sizeof(int));

        // Getting the elements
        printf("\nEnter the elements ---\n");
        if (index >= 0 && index <= n1)
        {
            // replacing the old elements from end
            int j = *range-1;
            for(int i = n1-1; i >= index; i--)
            {
                //printf("ptr[%d] copies the value in ptr[%d]\n", j,i);
                ptr[j] = ptr[i];
                j--;
            }

            // getting the new elements replacing the old
            for(int i = 0; i < n2; i++)
            {
                printf("array [%d] : ", i+index);
                scanf("%d", &ptr[i+index]);
            }
        }
        else
        {
            for(int i = n1; i <= *range-1; i++)
            {
                printf("array [%d] : ", i);
                scanf("%d", &ptr[i]);
            }
        }
       
        // Printing the full array
        printf("\nAfter Insertion :\n");
        DisplayArray(ptr, *range);
    }

    // Choice is 2 - Search elements from array
    else if (c == 2)
    {
        int search, count = 0;
        printf("\nWhich element do you want to search for? - ");
        scanf("%d", &search);
        for (int i = 0; i < *range; i++)
        {
            if (ptr[i] == search)
            {
                count++;
                if (count == 1)
                    printf("\n'%d' found at index [%d].", search, i);
                else if (count > 1)
                    printf("\nAnother '%d' found at index [%d].\n", search, i);
            }
        }
        if (count == 0)
        {
            printf("\n'%d' Not Found!", search);
        }
    }

    // Choice is 3 - Delete elements in array
    else
    {
        printf("Current no. of elements in array : %d", n1);

        // Insert index
        int index;
        printf("\nAt which index do you want to delete? (Invalid index will delete the last element) -");
        printf("\nIndex : ");
        scanf("%d", &index);

        // Deleting the element
        if (index >= 0 && index <= n1)
        {
            for (int i = index; i <= n1; i++)
            {
                ptr[i] = ptr[i+1];
            }
        }

        // Realloating memory
        *range -= 1;
        ptr = (int*)realloc(ptr, (*range) * sizeof(int));

        // Printing
        printf("\nAfter deleting the element -");
        DisplayArray(ptr, *range);
    }

    return 1;
}

int main()
{
    int* ptr;
    int userWantsToContinue = 1, choice, range = 0;

    ptr=(int*)malloc(range*sizeof(int));
    
    printf("Arrays with dynamic memory.");
    while (userWantsToContinue)
    {
        printf("\n-----------------------------------------------------------------------------------------");
        printf("\nEnter your choice ('1' for INSERT, '2' for SEARCH, '3' for DELETE, '4' for EXIT) --");
        printf("\n---------- Your Choice : ");
        scanf("%d", &choice);

        if (choice == 1 || choice == 2 || choice == 3 || choice == 4)
        {
            userWantsToContinue = ArrayOperations(choice, ptr, &range);
        }
        else
        {
            printf("Wrong Choice Selected! Enter again.\n");
        }
    }

    printf("\n------------ Array Functions Created by - Bodhisatta Bhattacharjee ----------------------\n");
    printf("\n-----------------------------------EXIT-PROGRAM------------------------------------------");
    
    return 0;
}
