#include <stdio.h>
int main()
{
    char i;
 char a[50]="this is c prgramming";

    for(i=0;a[i]!='\0';i++)
    {
        if(i==0)
        {
            a[i]-=32;
            printf("%c",a[i]);
        }

        else if(a[i]==' ')
        {
            printf("\n");
            a[i+1]-=32;
            
        }
         
        else
        {
            printf("%c",a[i]);
        }    
        
    }
return 0;
}