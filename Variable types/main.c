#include <stdio.h>

// Typedef for an alias for an existing type
typedef unsigned long ulong;

int main() {
    ulong number = 1234567890;  // Now we can use 'ulong' instead of 'unsigned long'
    printf("Number: %lu\n", number);
    return 0;
}
