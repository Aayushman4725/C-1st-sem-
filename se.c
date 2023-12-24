#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,n,numerator,term;
    float fact,sum=0;

    printf("Enter the number:");
    scanf("%d",&n);

    for(i=0;i<=(2*n)-1;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        numerator=pow(i,i);
        term=fact/numerator;
        printf("%d\n",term);
        sum+=term;
    }
    printf("\nThe sum is:\n%f\n",sum);
    return 0;
}