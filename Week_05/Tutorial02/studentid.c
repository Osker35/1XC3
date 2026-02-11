#include <stdio.h>
#include <limits.h>
#define STUDENTID 400632676

int main() {
    const int YEAR = 2026;

    printf("Student ID: %d\n", STUDENTID);
    printf("Current Year: %d\n\n", YEAR);
    printf("Char size: %lu bytes\n", sizeof(char));
    printf("Int size: %lu bytes\n", sizeof(int));
    printf("Float size: %lu bytes\n", sizeof(float));
    printf("Double size: %lu bytes\n", sizeof(double));
    printf("int range: %d to %d\n", INT_MIN, INT_MAX);
    printf("char Range: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Short Range: %d to %d\n\n", SHRT_MIN, SHRT_MAX);
    printf("Max value of short: %d\n", SHRT_MAX);

    if(STUDENTID <= SHRT_MAX && STUDENTID >= SHRT_MIN) {
        printf("The student ID fits in a short \n");
    } 
    else
    {
        printf("The student ID doesnt fit in a short \n");
    }
    return 0;
}