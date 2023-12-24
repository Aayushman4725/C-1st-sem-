#include <stdio.h>
int main()
{
    int a[20],i,j,size,temp;
    
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

    for(i=0;i<=size-2;i++)
    {
        for(j=0;j<=size-2-i;j++)
        {
            if(a[j]>a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
    printf("\nThe sorted array is:\n");

    for(i=0;i<=size-1;i++)
    {
        printf("\na[%d]:%d",i,a[i]);
    }
    return 0;
}