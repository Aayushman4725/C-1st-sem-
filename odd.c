#include <stdio.h>
int main()
{
    int n,i,sum,remainder,odd;
    printf("Enter the number:");
    scanf("%d",n);
    
    while(n!=0)
    {
    remainder=n%10;
    n/=10;
    }
    if(remainder%2!=0)
    {
        sum+=remainder;
        printf("The sum is:%d",sum);
        
    
    }
    return 0;
}