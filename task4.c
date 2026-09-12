
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
