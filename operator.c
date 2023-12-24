#include <stdio.h>
int main()
{
int A=10;
int B=5;

A=++A + ++A;
printf("A=%d\nB=%d",A,B);

B=A-- - --B;
printf("\n\n\nA=%d\nB=%d",A,B);
return 0;
}