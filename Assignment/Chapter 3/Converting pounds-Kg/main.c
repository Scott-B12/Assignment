#include <stdio.h>

int main(void) {
    float start, end, increment, pounds;

    // Get user input for start, end, and increment values
    printf("Enter the starting value (in pounds): ");
    scanf("%f", &start);

    printf("Enter the ending value (in pounds): ");
    scanf("%f", &end);

    printf("Enter the increment value: ");
    scanf("%f", &increment);

    pounds = start;

    // Print the heading for the table
    printf("\nPounds       Kilograms\n");
    printf("-----------------------\n");

    // Loop through the pound values and print the conversions
    while (pounds <= end) {
        printf("%6.2f lb    = %6.2f kg\n", pounds, pounds * 0.45359237);
        pounds = pounds + increment;
    }

    return 0;
}
