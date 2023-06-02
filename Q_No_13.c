#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    while (num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("Reverse of %d is: %d", num, reversed);

    return 0;
}
