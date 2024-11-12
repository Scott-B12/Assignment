#include <stdio.h>

// Define a struct and alias it with typedef
typedef struct {
    int x;
    int y;
} Point;

int structaliasing() {
    Point p1 = {10, 20};  // We can use 'Point' instead of 'struct Point'
    printf("Point coordinates: (%d, %d)\n", p1.x, p1.y);
    return 0;
}

