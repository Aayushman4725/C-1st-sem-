#include <stdio.h>
#include <string.h>
int main()
{
    char str[50][50],temp[50];
    int size,i,j;
    printf("Enter the number of string:");
    scanf("%d",&size);

    printf("Enter the %d strings:",size);
    for(i=0;i<=size-1;i++)
    {
        scanf("%s\n",str[i]);
    }

    printf("\nThe unsorted array is:");

    for(i=0;i<=size-1;i++)
    {
        printf("\n%s\n",str[i]);
    }

    for(i=0;i<=size-2;i++)
    {
        for(j=0;j<=size-2-i;j++)
        {
            if(strcmp(str[j],str[j+1])>0)
            {
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
        }
    }

    for(i=0;i<=size-1;i++)
    {
        printf("%s\t",str[i]);
    }
    return 0;
}
