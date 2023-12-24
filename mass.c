#include <stdio.h>
int main()
{
    float pressure, mass,volume,temp;
    printf("Enter the pressure:");
    scanf("%f",&pressure);

     printf("Enter the temperature:");
    scanf("%f",&temp);

     printf("Enter the volume:");
    scanf("%f",&volume);

    mass=(pressure*volume)/(0.37*(temp+460));
    printf("The mass is:%fkg",mass);
    return 0;

}