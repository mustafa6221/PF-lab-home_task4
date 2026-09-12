// Write a C program that reads the lengths of three sides of a triangle. First validate that the sides can actually
// form a triangle (the sum of any two sides must be greater than the third), then classify it as Equilateral,
// Isosceles, or Scalene.
#include<stdio.h>
int main()
{
    float side1,side2,side3;
    printf("Enter the lenght of first side  :");
    scanf("%f",&side1);
    printf("Enter the lenght of second side  :");
    scanf("%f",&side2);
    printf("Enter the lenght of third side  :");
    scanf("%f",&side3);
    
    if (side1+side2>side3 && side3+side2>side1 && side3+side1>side2){
        if(side1 == side2 && side2 == side3){
            printf("Valid Triangle -> Type : Equilateral");
        }
        else if(side1 == side2 || side2 == side3 || side3 == side1){
             printf("Valid Triangle -> Type : Isoceles");
        }
        else if(side1 != side2 && side2 != side3)
            printf("Valid Triangle -> Type : scalene");

    }
    else{
        printf("Invalid Triangle");

    }


}