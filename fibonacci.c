#include <stdio.h>
int fib(int a){
    int number;
    if(a==1 || a==2)
    return 1;

else
number=fib(a-1)+fib(a-2); 
printf(" %d,",number);
return fib(a-1)+fib(a-2);
}
int main(){
    int a;
    int number;
    printf("Enter a number:");
    scanf("%d", &a);
    number=fib(a);

printf("Result is %d",number);
return 0;
}