#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,x1,x2;

    printf("Enter the first number:");
    scanf("%f", &a);

    printf("Enter the second number:");
    scanf("%f",&b);

    printf("Enter the third number:");
    scanf("%f",&c);
    
    x1=(-b+pow(pow(b,2)-4*a*c,1/2))/(2*a);
    x2=(-b-pow(pow(b,2)-4*a*c,1/2))/(2*a);
    
    printf("The first root is %f\n",x1);
    printf("The second root is %f\n",x2);

    if(x1<0 && x2<0)
    {
        printf("The root is imaginary root.");
    }
    
    else if(x1==x2)
    {
        printf("The root is equal root");
    }
    else
    {
        printf("The root is real root");
    }
    return 0;

}
    
