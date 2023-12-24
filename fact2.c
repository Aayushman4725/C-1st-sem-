#include<stdio.h>
int main()
{
   int num,fact=1,i,j;
   float sum=0, tempSum=0;
   printf("Enter the number:");
   scanf("%d",&num);

   for(i=1;i<=num;i++)
   {
    for(j=1;j<=i;j++)
    {
        fact*=j;
    }
     tempSum = (i/fact);
     sum += tempSum;
     printf("fact:%d",fact);
     fact=1;
     printf("Sum:%f",tempSum);
   }
   
return 0;
}