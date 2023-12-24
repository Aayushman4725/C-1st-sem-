#include <stdio.h>
void input(int a[][30],int r1,int c1,char m);
void display(int a[][30],int r1,int c1,char m);
void multiplication(int a[][30],int b[][30],int c[][30],int r1,int c1,int r2,int c2);
int j,i,k;
int main()
{
    int matrix[20][30],matrix2[20][30],matrix3[20][30],rsize1,rsize2,csize1,csize2;
    printf("Enter the row and column size for first matrix:");
    scanf("%d%d",&rsize1,&csize1);

    printf("Enter the row and column size for second matrix:");
    scanf("%d%d",&rsize2,&csize2);

    input(matrix,rsize1,csize1,'a');
    input(matrix2,rsize2,csize2,'b');
    display(matrix,rsize1,csize1,'a');
    display(matrix2,rsize2,csize2,'b');
    multiplication(matrix,matrix2,matrix3,rsize1,rsize2,csize1,csize2);
    display(matrix3,rsize1,csize2,'c');
    return 0;
}

   void input(int a[][30],int r1,int c1,char m)
   {
    for(i=0;i<=r1-1;i++)
    {
        for(j=0;j<=c1-1;j++)
        {
            printf("Enter the value at %c[%d][%d]:",m,i,j);
            scanf("%d",&a[i][j]);
        }
    }
   }

   void display(int a[][30],int r1,int c1,char m)
   {
    printf("\nThe matrix of %c is:\n",m);

    for(i=0;i<=r1-1;i++)
    {
        for(j=0;j<=c1-1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
   }

   void multiplication(int a[20][30],int b[20][30],int c[20][30],int r1,int r2,int c1,int c2)
   {


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
   }

