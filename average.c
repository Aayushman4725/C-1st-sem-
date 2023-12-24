#include <stdio.h>
int main()
{
    int a[30];
    int size,i,sum=0,avg=0;
    printf("Enter the size of array:");
    scanf("%d",&size);
    for(i=0;i<=size;i++)
    {
        printf("Enter the value at a[%d]:",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<=size-1;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum is:%d",sum);
    avg=(avg+sum)/size;
    printf("The average is:%d",&avg);
    return 0;
}