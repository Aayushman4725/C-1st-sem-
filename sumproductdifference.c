#include <stdio.h>

int main()
{
    float num1,num2,diff,mul,sum;

    printf("Enter the first number:");
    scanf("%f",&num1);

     printf("Enter the second number:");
    scanf("%f",&num2);

    sum=num1+num2;
    diff=num1-num2;
    mul=num1*num2;

    printf("The sum is:%f\n",sum);
    printf("The difference is:%f\n",diff);
    printf("The product is:%f\n",mul);
    return 0;
    

}