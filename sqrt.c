#include <stdio.h>
#include<math.h>
int main()
{
    float c,b,d,result;
    printf("Enter the value of c:");
    scanf("%f",&c);

     printf("Enter the value of b:");
    scanf("%f",&b);

     printf("Enter the value of d:");
    scanf("%f",&d);

     result=(c*pow(b,3))/pow(d,2);
    
    printf("The result is:%f",result);
    return 0;

}