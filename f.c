#include <stdio.h>
int fibo(int term);
int main()
{
    int n,i;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    printf("%d\t",fibo(i));
    }
    return 0;
}

int fibo(int term)
{
    if(term==1)
    {
        return 0;
    }

    else if(term==2)
    {
        return 1;
    }

    else
    {
        return (fibo(term-1)+fibo(term-2));
    } 
}