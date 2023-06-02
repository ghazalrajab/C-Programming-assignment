#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
