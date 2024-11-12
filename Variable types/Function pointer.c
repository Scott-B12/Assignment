#include <stdio.h>

// Define a function pointer type for a function taking two ints and returning an int
typedef int (*operation)(int, int);

int add(int a, int b) {
    return a + b;
}

int main() {
    operation op = add;  // Use 'operation' instead of 'int (*)(int, int)'
    printf("Result: %d\n", op(5, 10));
    return 0;
}

