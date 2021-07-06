// Question : 9
// An electricity board charges the following rate :
// for the first 200 units 80 paise per unit,
// for the next 100 units 90 paise per unit,
// beyound 300 units Rs 1 per unit.
// All users are charged a minimum of Rs 100 as meter charge.
// If the total amount is more than Rs 400, then an additional
// surcharge of 15% of total amount is charged.
// Write a program to read the name of the user, 
// number of units consumed and print out the charges.

# include <stdio.h>

float CalculateTheCharge(float units)
{
    float cost = 0;
    if (units <= 200)
    {
        cost = units * 0.8;
        return cost;
    }
    else if (units > 200)
    {
        cost = 200 * 0.8;
        units = units - 200;

        if (units <= 100)
        {
            cost += units * 0.9;
            return cost;
        }
        else if (units > 100)
        {
            cost += (100 * 0.9);
            units = units - 100;

            cost += (units * 1.0);
            if (cost < 400)
            {
                return cost;
            }
            else if (cost >= 400)
            {
                float extra = ((cost/100) * 15);
                cost += extra;
                return cost;
            }
        }
    }
}

int main()
{
    char userName[100];
    float userUnits;
    printf("Enter your name : ");
    scanf("%[^\n]%*c", userName);
    printf("Enter the number of units consumed : ");
    scanf("%f", &userUnits);
    printf("Charge is : Rs %.2f", CalculateTheCharge(userUnits));

    return 0;
}