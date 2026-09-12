// Write a C program that reads a person&#39;s weight (kg) and height (m), computes their Body Mass Index (BMI =
// weight / height^2), and prints the corresponding category using an if-else-if-else ladder: Underweight (&lt; 18.5),
// Normal (18.5-24.9), Overweight (25-29.9), Obese (&gt;= 30).
#include <stdio.h>

int main()
{
    float weight, height, BMI;

    printf("Enter your weight (kg): ");
    scanf("%f", &weight);

    printf("Enter your height (m): ");
    scanf("%f", &height);

    BMI = weight / (height * height);
    
    printf("BMI = %.2f  -> ",BMI);
    

    if (BMI < 18.5)
    {
        printf("Category: Underweight");
    }
    else if (BMI <= 24.9)
    {
        printf("Category: Normal");
    }
    else if (BMI <= 29.9)
    {
        printf("Category: Overweight");
    }
    else
    {
        printf("Category: Obese");
    }


    return 0;
}
