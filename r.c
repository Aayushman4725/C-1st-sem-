#include<stdio.h>
#include<math.h>
double factorial(int x){
    if(x==1)
    {
        return 1;
    }
    return x*factorial(x-1);
}
float series(int base, int n, int power, int term){
    if(n<term){
        return 0;
    }
    return (pow(base,power)/factorial(power)*pow(-1,term+1)) +  series(base, n, power+2, term+1);
    
    

}
int main()
{
    int n , base;
    float sum;
    printf("enter the base value: ");
    scanf("%d", &base);
    printf("enter the the nnumber of times for calculation: ");
    scanf("%d", &n);
    sum = series(base, n, 1, 1);
    printf("the calculated value is: %f", sum);         
    return 0;
}