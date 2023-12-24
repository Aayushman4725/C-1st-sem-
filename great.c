#include <stdio.h>
int main()
{
    int a[50],i,size,k,greatest,smallest;
    
    printf("Enter the size of array:");
    scanf("%d",&size);

    for(i=0;i<=size-1;i++)
    {
        printf("Enter the value at a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("\nArray elements are:\n");

    for(i=0;i<=size-1;i++)
    {
        printf("\na[%d]:%d",i,a[i]);
    }
    a[0]=greatest;
    a[0]=smallest;
    for(i=0;i<=size-1;i++)
    {
        if(a[0]<a[i])
        {
          a[i]=greatest;
          printf("The greatest number is:%d",a[i]);
        }

        else
        {
            a[i]=smallest;
            printf("The smallest number is:%d",a[i]);
        }
        
    }
    return 0;
}