#include <stdio.h>
int fib(int n){
    int number;
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else{
    number=fib(n-1)+ fib(n-2);
    return number;
    }
}
int main(){
    int n, number, num=0;
    printf("Enter a number:");
    scanf("%d", &n);
    while(num<=n){
    number=fib(num);
    printf("%d\t", number);
    num++;}
    return 0;
}