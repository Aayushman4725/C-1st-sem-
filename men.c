#include <stdio.h>
int main()
{
    int choice,a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter 1 for addition\nEnter 2 for substraction\nEnter 3 for multiplication\nEnter 4 for division");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
        printf("The addition is %d",a+b);
        break;
        }

        case 2:
        {
            printf("The substraction is %d",a-b);
            break;
        }

        case 3:
        {
            printf("The multiplication is %d",a*b);
            break;
        }

        case 4:
        {
            printf("The division is %d",a/b);
            break;
        }
        default:
        {
            printf("Error");
            break;
        }
    }
    return 0;
}