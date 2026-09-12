// Write a C program that reads the number of electricity units consumed in a month and computes the bill using
// the following slab rates, implemented with an if-else-if-else ladder: first 100 units @ Rs. 5/unit, next 100 units
// (101-200) @ Rs. 8/unit, next 200 units (201-400) @ Rs. 12/unit, and any units above 400 @ Rs. 15/unit.
#include <stdio.h>
int main()
{
    int units;
    int rates;
    printf("Enter the units consumed in a month :");
    scanf("%d", &units);
    if (units < 0)
    {
        printf("Invalid units");
    }
    else if (units <= 100)
    {
        rates = units * 5;
    }
    else if (units <= 200)
    {
        rates = (100) * 5 + (units - 100) * 8;
    }
    else if (units <= 400)
    {
        rates = (100) * 5 + (100) * 8 + (units - 200) * 12;
    }
    else
    {
        rates = (100) * 5 + (100) * 8 + (200) * 12 + (units - 400) * 15;
    }

    printf("The electricity bill is : %d", rates);
}