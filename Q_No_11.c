#include <stdio.h>

int main() {
    int num, digit1, digit2, digit3, digit4, digit5, sum;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    digit1 = num / 10000;
    digit2 = (num % 10000) / 1000;
    digit3 = (num % 1000) / 100;
    digit4 = (num % 100) / 10;
    digit5 = num % 10;

    sum = digit1 + digit2 + digit3 + digit4 + digit5;

    printf("Digits separated by three spaces: %d   %d   %d   %d   %d\n", digit1, digit2, digit3, digit4, digit5);
    printf("Sum of digits: %d\n", sum);

    return 0;
}
