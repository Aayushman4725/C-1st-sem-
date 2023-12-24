#include <stdio.h>
int main()
{
    int a=0,b=1,c,i,num;
    printf("Enter the number of terms:");
    scanf("%d",&num);
    for(i=0;i<num;++i)
    {
        if(i==0)
        {
            printf("0\t");
        }

        if(i==1)
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