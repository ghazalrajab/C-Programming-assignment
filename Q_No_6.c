#include <stdio.h>

int main() {
    char name[50], seatNo[50];
    float marks[4], total = 0, percentage;

    printf("Enter name of Student: ");
    scanf("%[^\n]s", name);
    printf("Enter Seat No: ");
    scanf(" %[^\n]s", seatNo);

    printf("Enter marks of English: ");
    scanf("%f", &marks[0]);
    printf("Enter marks of Basic Electronics: ");
    scanf("%f", &marks[1]);
    printf("Enter marks of Mathematics: ");
    scanf("%f", &marks[2]);
    printf("Enter marks of Computer Programming: ");
    scanf("%f", &marks[3]);

    // Calculate total marks
    for (int i = 0; i < 4; i++) {
        total += marks[i];
    }

    // Calculate percentage
    percentage = (total / 400) * 100;

    // Print marks sheet
    printf("\nMARKSHEET\n");
    printf("Name: %s\tSeat No: %s\n", name, seatNo);
    printf("-----------------------------------------------------------\n");
    printf("              Subjects               \t\tMarks\n");
    printf("-----------------------------------------------------------\n");
    printf("1. English                          \t\t%.0f\n", marks[0]);
    printf("2. Basic Electronics                \t\t%.0f\n", marks[1]);
    printf("3. Mathematics                      \t\t%.0f\n", marks[2]);
    printf("4. Computer Programming             \t\t%.0f\n", marks[3]);
    printf("-----------------------------------------------------------\n");
    printf("Total: %.0f\tPercentage: %.2f%%\n", total, percentage);

    return 0;
}
