#include <stdio.h>
int main()
{
    char s[50]="this is c programming";
    int i;
    for(i=0;i<=49;i++)
    {
        if(i==0)
        {
            s[i]-=32;
            printf("%c",s[i]);
        }

        else if(s[i]==' ')
        {
            printf("\n");
            s[i+1]-=32;

        }

        else
        {
            printf("%c",s[i]);
        }
    }
}