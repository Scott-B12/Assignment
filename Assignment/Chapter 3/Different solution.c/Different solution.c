#include <stdio.h>

int main(void) {
    float start, end, increment, a;

    // Get user input for start, end, and increment values
    printf("Enter the starting value (in degrees Fahrenheit): ");
    scanf("%f", &start);

    printf("Enter the ending value (in degrees Fahrenheit): ");
    scanf("%f", &end);

    printf("Enter the increment value: ");
    scanf("%f", &increment);

    a = start;

    // Print the heading for the table
    printf("\nFahrenheit    Celsius\n");
    printf("-----------------------\n");

    // Loop through the Fahrenheit values and print the conversions
    while (a <= end) {
        printf("%6.2f F      = %6.2f C\n", a, (a - 32.0) * 5.0 / 9.0);
        a = a + increment;
    }

    // Always print 98.6°F conversion after the main loop
    printf("\nSpecial case:\n");
    printf("%6.2f F      = %6.2f C\n", 98.6, (98.6 - 32.0) * 5.0 / 9.0);

    return 0;
}

