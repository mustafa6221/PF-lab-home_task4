// Write a C program that reads a single alphabet character and uses a switch statement to determine whether it is
// a Vowel or a Consonant. The program should work for both uppercase and lowercase input and should print an
// error message if the input is not a letter.
#include<stdio.h>
int main()
{
    char character;
    printf("Enter the character :");
    scanf("%c",&character);
    if((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z') ){
    switch (character)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("It is Vowels");
        break;
    
    default:
      printf("It is consent");
        break;
    }
}
    else{
        printf("Invalid input");
    }
    }
