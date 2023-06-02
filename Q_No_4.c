#include <stdio.h>

int main() {
    int num, square, cube;

    // Take input from user
    printf("Please enter any one integer number? ");
    scanf("%d", &num);

    // Calculate square and cube
    square = num * num;
    cube = num * num * num;

    // Print the results
    printf("Square of %d is: %d\n", num, square);
    printf("Cube of %d is: %d\n", num, cube);

}