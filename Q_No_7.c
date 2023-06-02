#include <stdio.h>

int main() {
    int firstNumber, lastNumber;
    int sum, product, difference, division, remainder, total;

    printf("Enter 1st number: ");
    scanf("%d", &firstNumber);
    printf("Enter last number: ");
    scanf("%d", &lastNumber);

    sum = firstNumber + lastNumber;
    product = firstNumber * lastNumber;
    difference = firstNumber - lastNumber;
    division = firstNumber / lastNumber;
    remainder = firstNumber % lastNumber;
    total = sum + product + difference + division + remainder;

    printf("\n");
    printf("Sum of %d and %d is                         : %d\n", firstNumber, lastNumber, sum);
    printf("Product of %d and %d is                    : %d\n", firstNumber, lastNumber, product);
    printf("Difference between %d and %d is      : %02d\n", firstNumber, lastNumber, difference);
    printf("Division of %d and %d is                    : %02d\n", firstNumber, lastNumber, division);
    printf("Remainder of %d and %d is               : %02d\n", firstNumber, lastNumber, remainder);
    printf("-------------------------------------------------------------\n");
    printf("Total is                                               : %02d\n", total);

    return 0;
}
