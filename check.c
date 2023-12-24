#include <stdio.h>
int main()
{
    int a[20][20],i,j,row,col,check;

    printf("Enter the row size:");
    scanf("%d",&row);

    printf("Enter the column size:");
    scanf("%d",&col);

    printf("Enter the number to find:");
    scanf("%d",&check);

    for(i=0;i<=row-1;i++)
    {
       for(j=0;j<=col-1;j++)
       {
        printf("Enter the value at a[%d][%d]:",i,j);
        scanf("%d",&a[i][j]);
       }
    }

    printf("\nThe matrix is:\n");

    for(i=0;i<=row-1;i++)
    {
        for(j=0;j<=col-1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

for(i=0;i<=row-1;i++)
{
    for(j=0;j<=col-1;j++)
   {
    if(a[i][j]==check)
    {
        printf("\nThe number %d is present in a[%d][%d]",check,i,j);
    }
   } 
}
return 0;
}