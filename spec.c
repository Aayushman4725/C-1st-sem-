#include <stdio.h>
int main()
{
    char input;
    printf("Enter the character:");
    scanf("%c",&input);
    
    if(input>=65 && input<=90)
    {
        printf("It is capital letter");
    }
    else if(input>=97 && input<=122)
    {
        printf("It is small letter");
    }
    else if(input>=48 && input<=57)
    {
        printf("It is a digit");
    }
    else
    {
        printf("It is special symbol");
    }
    return 0;
    
}