#include <stdio.h>
int fibo(int term);
int i;
int main()
{
    for(i=1;i<=10;i++)
    {
        printf("%d\n",fibo(i));
    }
    return 0;
}

int fibo(int term)
{
    if(term==1)
    {
        return 2;
    }

    if(term==2)
    {
        return 3;
    }

    else
    {
        return (fibo(term-1)+fibo(term-2));
    }
}

