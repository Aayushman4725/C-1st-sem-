#include <stdio.h>
int main()
{
    int i,power,exponent,num,result=1;

    printf("Enter the number");
    scanf("%d",&num);

    printf("Enter the exponent:");
    scanf("%d",& exponent);

    for(i=1;i<=exponent;i++)
    {
        result*=num;
    }
    printf("Result:%d\n",result);
    return 0;

}