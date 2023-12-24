#include <stdio.h>
int sum();
int main()
{
    int s;
    s=sum();
    
    return 0;
}

int sum()
{
    int a,b,c;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("The sum is %d",c);
    return c;
}