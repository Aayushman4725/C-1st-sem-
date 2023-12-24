#include <stdio.h>

int main() {

    int seconds, minutes, hours, remainingSeconds;

    printf("Enter time in seconds: ");
    scanf("%d",&seconds);

    remainingSeconds = seconds;
    hours = seconds / (60*60);

    remainingSeconds = seconds % (60*60);
    minutes = remainingSeconds / (60);

    remainingSeconds = seconds % (60);

    printf("H: %d\tM: %d\tS: %d\n", hours, minutes, remainingSeconds);

    return 0;
}