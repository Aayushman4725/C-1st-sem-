#include <stdio.h>
void sum(int,int);
int main()
{
    int x,y;
    printf("Enter the two numbers:");
    scanf("%d%d",&x,&y);
    sum(x,y);
    return 0;

}

void sum(int a,int b)
{
    int sum;
    sum=a+b;
    printf("The sum is %d",sum);
}
