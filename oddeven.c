#include <stdio.h>
int main()
{
    int a[50],i,size,even_sum=0,even_count=0,odd_count=0,odd_sum=0;
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
        printf("\na[%d]=%d\n\n",i,a[i]);
    }
    
    for(i=0;i<=size-1;i++)
    {
        if(a[i]%2==0)
        {
            even_sum+=a[i];
            even_count++;
        } 
        else
        {
            odd_sum+=a[i];
            odd_count++;
           
        }
    
  
        }
            printf("Even sum:%d\n",even_sum);
            printf("Even count:%d\n",even_count);
            printf("Odd sum:%d\n",odd_sum);
            printf("Odd count:%d\n",odd_count);
            
            return 0;
}