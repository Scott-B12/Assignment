#include <stdio.h>

int main() {
    int a = 5;
    float b = 2.0;
    float result;

    // Without typecasting: integer division
    result = a / 2;  // 5 / 2 = 2 (integer division)
    printf("Without typecasting: %f\n", result);

    // With typecasting: convert `a` to float before division
    result = (float)a / 2;  // 5.0 / 2 = 2.5 (float division)
    printf("With typecasting: %f\n", result);

    // Another example with `b` typecast to `int`
    int int_result = (int)b + a;  // 2 (int) + 5 = 7
    printf("Casting float to int: %d\n", int_result);

    return 0;
}
