#include <stdio.h>

int main(void) {
    float start, end, increment, a, b;

    // Get user input for start, end, and increment values
    printf("Enter the starting value (in degrees Fahrenheit): ");
    scanf("%f", &start);

    printf("Enter the ending value (in degrees Fahrenheit): ");
    scanf("%f", &end);

    printf("Enter the increment value: ");
    scanf("%f", &increment);

    a = start;
    b = -1;

    // Print the heading for the table
    printf("\nFahrenheit    Celsius\n");
    printf("-----------------------\n");

    while (a <= end) {
        if ((a > 98.6) && (b < 98.6)) {
            printf("%6.2f F      = %6.2f C\n", 98.6, (98.6 - 32.0) * 5.0 / 9.0);
        }

        printf("%6.2f F      = %6.2f C\n", a, (a - 32.0) * 5.0 / 9.0);

        b = a;
        a = a + increment;
    }

    return 0;
}