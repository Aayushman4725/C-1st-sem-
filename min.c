#include <stdio.h>
#include <stdlib.h>

void input(int *ptr,int size);
void display(int *ptr,int size);
int maximum(int *ptr,int size);
int minimum(int *ptr,int size);
int i;

int main()
{
    int *ptr,size;
    printf("Enter the size of array:");
    scanf("%d",&size);

    ptr=(int*)malloc(size*sizeof(int));
    printf("\nEnter the array element:\n");
    input(ptr,size);

    printf("\nThe array elements are:\n");
    display(ptr,size);

    printf("\nMaximum:%d",maximum(ptr,size));
    printf("\nMinimum:%d",minimum(ptr,size));
    free(ptr);
    ptr=NULL;
    return 0;
}

void input(int *ptr,int size)
{
    for(i=0;i<=size-1;i++)
    {
        scanf("%d",(ptr+i));
    }
}

void display(int *ptr,int size)
{
    for(i=0;i<=size-1;i++)
    {
        printf("%d\n",*(ptr+i));
    }
}

int maximum(int *ptr,int size)
{
    int maximum;
    *ptr=maximum;
    for(i=0;i<=size-1;i++)
    {
      if(maximum<*(ptr+i))
      {
        maximum=*(ptr+i);
      }
    }
    return maximum;
    
   
}

int minimum(int *ptr,int size)
{
    int minimum;
    minimum=*ptr;
    for(i=0;i<=size-1;i++)
    {
        if(minimum>*(ptr+i))
        {
            minimum=*(ptr+i);
        }
    }
    return minimum;
}