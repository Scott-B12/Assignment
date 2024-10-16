#include <stdio.h>

int main() {
    int a, b, c, sum;

    
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    
    sum = a + b + c;

    
    printf("%d + %d + %d = %d\n", a, b, c, sum);

    return 0;
}
