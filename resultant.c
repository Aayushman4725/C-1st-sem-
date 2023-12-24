#include <stdio.h>
int main()
{
    int a[50],b[50],c[50],i,size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    
    for(i=0;i<=size-1;i++)
    {
        printf("Enter the value at a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<=size-1;i++)
    {
        printf("Enter the value at b[%d]:",i);
        scanf("%d",&b[i]);

    }

    printf("\nArray elements are:\n");

    for(i=0;i<=size-1;i++)
    {
        printf("\na[%d]:%d",i,a[i]);
    }
    for(i=0;i<=size-1;i++)
    {
        printf("\nb[%d]:%d",i,b[i]);
    }

    for(i=0;i<=size-1;i++)
    {
        c[i]=a[i]+b[i];
        printf("\nResultant:%d\n",c[i]);
    }
    
    return 0;
}