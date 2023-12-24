#include <stdio.h>
int main()
{
    char c;
    printf("Enter the character:");
    scanf("%c",&c);

    switch(c)
    {
        case 'r':
        case 'R':
        printf("Red");
        break;

        case 'g':
        case 'G':
        printf("Green");
        break;

        case 'b':
        case 'B':
        printf("Blue");
        break;

        default:
        printf("Black");
    }
    return 0;
}