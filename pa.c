#include <stdio.h>
int main()
{
    char name[20]="NEPAL";
    int i,j;
    
    for(i=0;i<=4;i++)
    {
        printf("%d\t",i+1);
        for(j=0;j<=i;j++)
        {
            printf("%c\t",name[j]);
        }
        printf("\n");
    }
    return 0;
}