#include <stdio.h>
#include <math.h>

/**
 * Calculates the square root of a number
 */
float square_root(float number);

float square_root(float number) {
    return sqrtf(number);
}

int main(void) {
    printf("a simple square root calculator\n");
    printf("square root of 100 is %.2f\n", square_root(100.0));
    return 0;
}