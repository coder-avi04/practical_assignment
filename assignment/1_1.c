//Q1. Declare variables, initialize and print values & sizes
#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';
    double d = 15.25;

    printf("Integer: %d, Size: %lu bytes\n", a, sizeof(a));
    printf("Float: %.2f, Size: %lu bytes\n", b, sizeof(b));
    printf("Character: %c, Size: %lu bytes\n", c, sizeof(c));
    printf("Double: %.2lf, Size: %lu bytes\n", d, sizeof(d));

    return 0;
}
