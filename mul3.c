#include <stdio.h>
#include <stdlib.h>
void input(int *ptr,int r,int c);
void display(int *ptr,int r, int c);
void multiplication(int *ptr,int *ptr2,int *ptr3,int r1,int c1,int c2);
int i,j,k;

int main()
{
    int *ptr,r1,c1,r2,c2,*ptr2,*ptr3;
    printf("Enter the row and column size of first matrix:");
    scanf("%d%d",&r1,&c1);

    printf("Enter the row and column size for second matrix:");
    scanf("%d%d",&r2,&c2);

    if(r1!=c2)
    {
        return 0;
    }

    ptr=(int*)malloc((r1*c1)*sizeof(int));
    ptr2=(int*)malloc((r2*c2)*sizeof(int));
    ptr3=(int*)malloc((r1*c2)*sizeof(int));

    printf("\nEnter the element of first matrix:\n");
    input(ptr,r1,c1);

    printf("\nEnter the element of second matrix:\n");
    input(ptr2,r2,c2);

    printf("\nThe first matrix is:\n");
    display(ptr,r1,c1);

    printf("\nThe second matrix is:\n");
    display(ptr2,r2,c2);

    printf("\nThe matrix multiplication is:\n");
    multiplication(ptr,ptr2,ptr3,r1,c1,c2);
    


    free(ptr);
    ptr=NULL;

    free(ptr2);
    ptr2=NULL;

    free(ptr3);
    ptr3=NULL;

    return 0;
}

void input(int *ptr,int r,int c)
{
    for(i=0;i<=r-1;i++)
    {
        for(j=0;j<=c-1;j++)
        {
            scanf("%d",(ptr+(c*i)+j));
        }
    }
}

void display(int *ptr,int r,int c)
{
    for(i=0;i<=r-1;i++)
    {
        for(j=0;j<=c-1;j++)
        {
            printf("%d\t",*(ptr+(c*i)+j));
        }
        printf("\n");
    }
}

void multiplication(int *ptr,int *ptr2,int *ptr3,int r1,int c1,int c2)
{
      for(i=0;i<=r1-1;i++)
      {
        for(j=0;j<=c2-1;j++)
        {
            *(ptr3+(c2*i)+j)=0;
            for(k=0;k<=c1-1;k++)
            {
                *(ptr3+(c2*i)+j)+=(*(ptr+(c1*i)+k)*(*(ptr2+(c2*k)+j)));
            }
        }
      }
      display(ptr3,r1,c2);
}