#include <stdio.h>

int main() {
    int amount, coins[8] = {500, 100, 50, 20, 10, 5, 2, 1};
    int counts[8] = {0, 0, 0, 0, 0, 0, 0, 0};

    printf("Enter any amount? ");
    scanf("%d", &amount);

    for (int i = 0; i < 8; i++) {
        counts[i] = amount / coins[i];
        amount = amount % coins[i];
    }

    printf("\nCoins:\n");
    printf("500\t100\t50\t20\t10\t5\t2\t1\n");
    for (int i = 0; i < 8; i++) {
        printf("%d\t", counts[i]);
    }
    printf("\n");

    return 0;
}
