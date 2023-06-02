#include <stdio.h>

int main() {
    int seconds, hours, minutes, remainingSeconds;

    printf("Input Seconds? ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    remainingSeconds = (seconds % 3600) % 60;

    printf("Hours: %d\nMinutes: %d\nSeconds: %d\n", hours, minutes, remainingSeconds);

    return 0;
}
