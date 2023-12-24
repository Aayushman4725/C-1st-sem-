#include <stdio.h>
int main()
{
    int a[20][20],i,j,row,col;
    
    printf("Enter the row:");
    scanf("%d",&row);

    printf("Enter the column:");
    scanf("%d",&col);
    
    for(i=0;i<=row-1;i++)
    {
        for(j=0;j<=col;j++)
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
    printf("\nThe lower triangular matrix is:\n");

    for(i=0;i<=row-1;i++)
    {
        for(j=0;j<=col-1;j++)
        {
            if(i>=j)
            {
                printf("%d\t",a[i][j]);
            }
            else
            {
                printf("0\t");
            }
        }
        printf("\n");
    }

    printf("\nThe upper triangular matrix is:\n");

    for(i=0;i<=row-1;i++)
    {
        for(j=0;j<=col-1;j++)
        {
            if(i<=j)
            {
                printf("%d\t",a[i][j]);
            }
            else
            {
                printf("0\t");
            }
        }
         printf("\n");
    }
    return 0;
}