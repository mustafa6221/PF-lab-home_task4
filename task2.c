
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
