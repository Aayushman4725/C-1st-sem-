#include <stdio.h>
#include <math.h>
int main()
{
    float x,sum;
    printf("Enter the value of x:");
    scanf("%f",&x);

    sum=1-(pow(x,2))/(2*1)+(pow(x,4))/(4*3*2*1)-(pow(x,6))/(6*5*4*3*2*1)+(pow(x,8))/(8*7*6*5*4*3*2*1)-(pow(x,10))/(10*9*8*7*6*5*4*3*2*1);
     
    printf("The sum is:%f",sum);
    return 0;
}
