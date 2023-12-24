#include <stdio.h>
int main()
{
    int a[9]={1,2,5,10,50,30,20,10};
    int i;
    for(i=0;i<=9;i++)
    {
        //
        printf("\nEnter the value for %dth index:",i);
        printf("%d\t",a[i]);
    }
    return 0;
    
}