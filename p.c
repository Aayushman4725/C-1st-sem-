#include <stdio.h>
int main()
{
    char c[11]="PROGRAMMING";
    int i,j;

    for(i=10;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c\t",c[j]);
        }
        printf("\n");
    }
    return 0;
}