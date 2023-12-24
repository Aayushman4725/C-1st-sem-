#include <stdio.h>
int main()
{
    int a[10];
    int i;
    for(i=0;i<=9;i++)
    {
        printf("Enter the value at a[%d]:",i);
        scanf("%d",&a[i]);
    }
    
    return 0;
}