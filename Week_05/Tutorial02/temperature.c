#include <stdio.h>

int main(void) {
    int farheneit = 68;
    double celsius;

    celsius = (farheneit - 32) * 5.0 / 9.0;

    printf("Farheneit: %d\n", farheneit);
    printf("Celsius: %.2f\n", celsius);

    return 0;
}