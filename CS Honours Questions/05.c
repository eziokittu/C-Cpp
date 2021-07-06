// Question : 5
// Write a C program to implement an inventory system.
// Store the item number, name, rate and quantity on hand
// in a structure. Accept the details for 5 items into a
// structure array and display the item name and it's total
// price. At the end display the grand total value of the
// inventory

# include <stdio.h>

// defining the structure
struct inventory
{
    int itemNo;
    char itemName[100];
    float itemRate;
    int itemQuantity;
};

// function to display the item name and the total price
int display(char str[], float rate, int qunatity)
{
    float total = rate * qunatity;
    printf("Item name : ");
    puts(str);
    printf("Total price : %f (%d pieces @ %f/- each)\n\n", total, qunatity, rate);
    return total;
}

// Main code starts from here
int main()
{
    struct inventory items[5];
    int noOfItems = 5;
    float totalInventoryCost = 0;

    // Getiing the 5 items of the inventory
    printf("Enter the details for 5 items in your inventory.\n");
    for (int i = 0; i < noOfItems; i++)
    {
        printf("---------------------------------------\n");
        printf("Item %d.\n", i+1);

        printf("Item no. : ");
        scanf("%d", &items[i].itemNo);

        printf("Item Name : ");
        scanf("\n"); // To avoid string not getting the input in next line
        scanf("%[^\n]%*c", items[i].itemName);

        printf("Item Rate : ");
        scanf("%f", &items[i].itemRate);
        
        printf("Item Quantity : ");
        scanf("%d", &items[i].itemQuantity);

        if (i == noOfItems-1)
        {
            printf("---------------------------------------\n\n");
        }
    }
    
    // printing the item name and total cost
    for (int i = 0; i < noOfItems; i++)
    {
        totalInventoryCost += display(items[i].itemName, items[i].itemRate, items[i].itemQuantity);
    }
    printf("\nTotal Inventory Cost : %f\n\n", totalInventoryCost);

    return 0;
}
