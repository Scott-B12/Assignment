#include <stdio.h>

int main() {
    char ch = 'A'; // ASCII value is 65
    int ascii_value;

    // Automatically promoted to int in expressions
    ascii_value = ch + 5;  // 'A' + 5 = 65 + 5 = 70
    printf("Character with integer addition: %d\n", ascii_value);

    // Explicit cast to int
    ascii_value = (int)ch;
    printf("ASCII value of character '%c': %d\n", ch, ascii_value);

    return 0;
}
