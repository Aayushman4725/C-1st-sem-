#include <stdio.h>
int main()
{
    int a[50],b[50],i,size;
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
        printf("\na[%d]:%d\n",i,a[i]);
    }

    for(i=0;i<=size-1;i++)
    {
        b[i]=a[i];
        printf("\nb[%d]:%d\n",i,b[i]);
    }
    return 0;
}