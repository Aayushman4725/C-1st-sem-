#include <stdio.h>
int main()
{
    char name[20];
    puts("Enter your name:");
    gets(name);

    printf("My name is:");
    puts(name);
    return 0;
}