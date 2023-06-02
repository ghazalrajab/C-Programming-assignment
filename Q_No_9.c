#include <stdio.h>
int main() {
    int days, years, weeks;
    // Take input from user
    printf("Enter number of days: ");
    scanf("%d", &days);
    // Calculate years, weeks, and days
    years = days / 365;
    days = days % 365;
    weeks = days / 7;
    days = days % 7;
  // Print the results
    printf("\n==============================\n");
    printf("   Conversion Result\n");
    printf("==============================\n");
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);
    return 0;
}
