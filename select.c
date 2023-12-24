#include <stdio.h>
int main()
{
    int a[20],i,j,size,temp,min;

    printf("Enter the size of array:");
    scanf("%d",&size);

    for(i=0;i<=size-1;i++)
    {
        printf("Enter the value at a[%d]:",i);
        scanf("%d",&a[i]);
    }

    printf("\nElements of array is:\n");

    for(i=0;i<=size-1;i++)
    {
        printf("\na[%d]:%d",i,a[i]);
    }

    for(i=0;i<=size-2;i++)
    {
        min=i;
        for(j=i+1;j<=size-1;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        // if(min!=i)
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("\nThe sorted array is:\n");

    for(i=0;i<=size-1;i++)
    {
        printf("\na[%d]:%d",i,a[i]);
    }
    return 0;
}