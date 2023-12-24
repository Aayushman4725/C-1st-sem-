#include <stdio.h>

int main() {

    int gram, kilogram, extraGrams;

    printf("Enter mass in gram: ");

    scanf("%d", &gram);

    kilogram = gram / 1000.0;

    extraGrams = gram % 1000;

    printf("%d grams is:\n%d KGs,\t%d gms\n", gram, kilogram, extraGrams);


    return 0;
}