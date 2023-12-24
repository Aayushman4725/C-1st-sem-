#include <stdio.h>
#include <math.h>
int main()
{
    int num1,num2,cube1,cube2,square1,square2;
    int sign;

    printf("1. addition");
    printf("\n2.substraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Square");
    printf("\n6.Cube");

    printf("\nEnter the number:");
    scanf("%d",&num1);
    printf("\nEnter the second number:");
    scanf("%d",&num2);
    printf("Enter the sign:");
    scanf(" %d",&sign);

    switch(sign)
    {
        case 1:
        
        printf("\n\naddition:%d",num1+num2);
        break;
        
        case 2:
        printf("\nsubstraction:%d",num1-num2);
        break;

        case 3:
        printf("\nmultiplication:%d",num1*num2);
        break;

        case 4:
        printf("\ndivision:%d",num1/num2);
        break;

        case 5:
        square1=pow(num1,2);
        square2=pow(num2,2);
        printf("square:%d",square1);
        printf("square2:%d",square2);
        break;

        case 6:
        cube1=pow(num1,3);
        cube2=pow(num2,3);
        printf("\ncube:%d",cube1);
        printf("\ncube:%d",cube2);
        break;
        
        default:
        printf("error");

    }
    return 0;
}