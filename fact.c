#include <stdio.h>
int main()
{
    int j,result,i,num,fact=1;
    printf("Enter the number:");
    scanf("%d",&num);

    for(j=1;j<=num;j++)
    {
    //     for(i=j;i<1;i--)
    //    {
    //     fact*=i;
    
    //      }
    for(i=1;i>=j;i++)
    {
        fact=fact*i;
    }

         printf("fact:%d",fact);
        result=j/fact;
 
        printf("Result:%d",result);
        fact=1;
    }
    
    return 0;
} 
