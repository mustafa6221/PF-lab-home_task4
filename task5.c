
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
