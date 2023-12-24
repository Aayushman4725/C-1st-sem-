#include <stdio.h>
void input(int a[],int size);
void display(int b[],int size);
void maximum(int c[],int size);
void minimum(int d[],int size);
void sort(int e[],int size);
void sort_display(int f[],int size);
int i;
int main()
{
    int array[50],size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    
    input( array, size);
    display( array,size);
    maximum(array,size);
    minimum( array,size);
    sort(array,size);
    sort_display(array,size);
    return 0;
}

void input(int a[50],int size)
{
    for(i=0;i<=size-1;i++)
    {
        printf("Enter the value at a[%d]:",i);
        scanf("%d",&a[i]);
    }
}

void display(int b[50],int size)
{
    printf("\nThe array is:\n");
    for(i=0;i<=size-1;i++)
    {
        printf("a[%d]:%d\t",i,b[i]);
    }
}

 void maximum(int c[50],int size)
{
    int maximum;
    maximum=c[0];
    for(i=0;i<=size-1;i++)
    {
        if(maximum<c[i])
        {
            maximum=c[i];
           
        }
    }
     printf("\nMaximum:%d\n",maximum);
}

void minimum(int d[50],int size)
{
    int minimum;
    minimum=d[0];
    
    for(i=0;i<=size-1;i++)
    {
        if(minimum>d[i])
        {
            minimum=d[i];
           
        }
    }
     printf("\nMinimum:%d\n",minimum);
}

void sort(int e[],int size)
{
    int temp,j;
    for(i=0;i<=size-2;i++)
    {
        temp=0;
        for(j=0;j<=size-2-i;j++)
        {
            if(e[j]>e[j+1])
            {
            temp=e[j];
            e[j]=e[j+1];
            e[j+1]=temp;
            }
        }
    }
}

void sort_display(int f[],int size)
{
    printf("\nThe sorted array is:\n");

    for(i=0;i<=size-1;i++)
    {
        printf("\nf[%d]:%d\n",i,f[i]);
    }
}

