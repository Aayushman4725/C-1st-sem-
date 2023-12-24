#include <stdio.h>
int fibo(int term);
int a,b;
int main()
{
    int n,i;
    printf("Enter the number of terms:");
    scanf("%d",&n);

    
    fibo(n);
        
    
    return 0;
}

int fibo(int term)
{
    int c,i,n;
    a=0;
    b=1;
    for(i=0;i<=n;i++)
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
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        return c;
    }
  }
}