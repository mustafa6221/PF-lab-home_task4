// Write a C program that displays a menu with the options: (1) Check Even/Odd, (2) Check Prime, (3) Find Square,
// (4) Exit. Read the user&#39;s choice and a number where needed, then use a switch statement to route to the correct
// operation. For option 2, use a loop or nested if-else logic to determine whether the number is prime.
#include <stdio.h>
int main()
{
    int choice, number, is_prime = 1, i, truth = 1;
    while (truth)
    {

        printf("(1) Check Even/odd\n");
        printf("(2)Check Prime\n");
        printf("(3)Find Square\n");
        printf("(4)Exit\n");
        printf("Select choice from [1-4] :\t");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number :");
            scanf("%d", &number);
            if (number % 2 == 0)
            {
                printf("The number %d is Even\n", number);
            }
            else
            {
                printf("The number %d is odd\n", number);
            }
            printf("\n");
            break;
        case 2:
            printf("Enter a number :");
            scanf("%d",&number);
            if (number <= 1)
            {
                is_prime = 0;
            }
            else
            {
                for (i = 2; i < number; i++){
                    
                if (number % i == 0)
                {
                    is_prime = 0;
                    break;
                }
            }
                if (is_prime == 1)
                {
                    printf("The number %d is prime\n", number);
                }
                else
                {
                    printf("The number %d is not prime\n", number);
                }
                printf("\n");
            
            }

            break;
        case 3:
            printf("Enter The number :");
            scanf("%d", &number);
            printf("The square of %d is %d\n", number, number * number);
            printf("\n");
            break;
        case 4:
            truth = 0;
            break;
        default:
            printf("Invalid choice:");
            break;
        }
    }
}