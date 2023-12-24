#include <stdio.h>
int main()
{
    int a[20][20],i,j,row,col,major_sum=0,minor_sum=0,sum=0,all_sum=0;

    printf("Enter the row size:");
    scanf("%d",&row);

    printf("Enter the column size:");
    scanf("%d",&col);

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
 if(row==col)
 {
    for(i=0;i<=row-1;i++)
    {
        for(j=0;j<=col-1;j++)
        {
           sum+=a[i][j];
        }
    }
    //addition of each elements
    printf("\nThe sum of each element is:%d",sum);

    //addition of major diagonal
    for(i=0;i<=row-1;i++)
    {
        for(j=0;j<=col-1;j++)
        {
           if(i==j)
           {
            major_sum+=a[i][j];
           } 
        }
    }
    printf("\nThe sum of element of major diagonal is %d\n",major_sum);

    //addition of minor diagonal
    for(i=0;i<=row-1;i++)
    {
        for(j=0;j<=col-1;j++)
        {
            if(i+j==row-1)
            {
                minor_sum+=a[i][j];
            }
        }
    }

    printf("\nThe sum of element of minor diagonal is %d\n",minor_sum);
}
else
{
    printf("\nNot a square matrix\n");
}
return 0;
}