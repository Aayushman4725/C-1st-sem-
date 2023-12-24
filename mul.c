#include <stdio.h>
int main()
{
    int a[20][20],b[20][20],c[20][20],i,j,r1,r2,c1,c2,k;
    
    printf("Enter the row size of a:");
    scanf("%d",&r1);

    printf("Enter the column size of a:");
    scanf("%d",&c1);

    printf("Enter the row size of b:");
    scanf("%d",&r2);

    printf("Enter the column size of b:");
    scanf("%d",&c2);

   
    for(i=0;i<=r1-1;i++)
    {
        for(j=0;j<=c1-1;j++)
        {
            printf("Enter the value at a[%d][%d]:",i,j);
            scanf("%d\n",&a[i][j]);
        }

    }

    for(i=0;i<=r2-1;i++)
    {
        for(j=0;j<=c2-1;j++)
        {
            printf("Enter the value at b[%d][%d]:",i,j);
            scanf("%d\n",&b[i][j]);
        }
    }

    printf("\nThe matrix are:\n");

    for(i=0;i<=r1-1;i++)
    {
        for(j=0;j<=c1-1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\n");
    }
     printf("\n");
    for(i=0;i<=r2-1;i++)
    {
        for(j=0;j<=c2-1;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<=r1-1;i++)
    {
        for(j=0;j<=c2-1;j++)
        {
            c[i][j]=0;
            for(k=0;k<=r2-1;k++)
            {
              c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
     if(r1!=c2)
    {
        return 0;
    }
     printf("\nThe matrix multiple is:\n");
    for(i=0;i<=r1-1;i++)
    {
        for(j=0;j<=c2-1;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
