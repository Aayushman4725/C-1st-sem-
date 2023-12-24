#include <stdio.h>
void sum();


void sum()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("The sum is %d",c);
}
int main()
{
    sum();
    return 0;
}