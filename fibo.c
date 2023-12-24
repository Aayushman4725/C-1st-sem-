#include <stdio.h>
int main()
{
    int a,b,c,n,i;
    printf("Enter the number of terms:");
    scanf("%d",&n);

    a=0;
    b=1;
    for(i=1;i<=n;++i)
    {
        if(i==1)
        {
            printf("0\t");
        }

        else if(i==2)
        {
            printf("1\t");
        }

        else
        {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        }
       
    }
    
    return 0;
}