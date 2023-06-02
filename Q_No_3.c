#include <stdio.h>

int main() {
    float basicPay, houseRent, medicalAllowance, computerAllowance, totalPay;

    printf("Please enter Basic pay: ");
    scanf("%f", &basicPay);

    // Calculate allowances and total pay
    houseRent = 0.4 * basicPay;
    medicalAllowance = 0.18 * basicPay;
    computerAllowance = 0.15 * basicPay;
    totalPay = basicPay + houseRent + medicalAllowance + computerAllowance;

    // Print pay slip with borders
    printf("------------------------------------------------------------------------------\n");
    printf("|                          PAY SLIP                                           |\n");
    printf("|----------------------------------------------------------------------------|\n");
    printf("| Basic pay                 : %-10.2f                                       |\n", basicPay);
    printf("| House Rent (40%%)          : %-10.2f                                       |\n", houseRent);
    printf("| Medical Allowance (18%%)   : %-10.2f                                       |\n", medicalAllowance);
    printf("| Computer Allowance (15%%)  : %-10.2f                                       |\n", computerAllowance);
    printf("|----------------------------------------------------------------------------|\n");
    printf("| Total pay                 : %-10.2f                                       |\n", totalPay);
    printf("------------------------------------------------------------------------------\n");

    return 0;
}
