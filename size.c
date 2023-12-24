#include <stdio.h>
#include <stdbool.h>


int main() {

    printf("The memory allocated for 'int' datatype in C is: %ld bytes\n", sizeof(int));

    printf("The memory allocated for 'char' datatype in C is: %ld bytes\n", sizeof(char));
    
    printf("The memory allocated for 'bool' datatype in C is: %ld bytes\n", sizeof(bool));
    
    printf("The memory allocated for 'float' datatype in C is: %ld bytes\n", sizeof(float));
    
    printf("The memory allocated for 'double' datatype in C is: %ld bytes\n", sizeof(double));

    return 0;
}