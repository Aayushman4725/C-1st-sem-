#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);

    if(year%100==0)
    {
        if(year%400==0)
        {
        printf("It is leap year.");
        }
        else
        {
        printf("It is not a leap year");
        }
    }
    else if(year%4==0)
    {
        printf("It is  leap year.");
    }
    else
    {
        printf("It is not a leap year.");
    }
    return 0;
}