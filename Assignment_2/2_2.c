//Q2. Compare two numbers without conditional statements
#include <stdio.h>

int main() {
    float a, b;

    printf("Enter two balances: ");
    scanf("%f %f", &a, &b);

    printf("Equal: %d\n", a == b);
    printf("First > Second: %d\n", a > b);
    printf("Second > First: %d\n", b > a);

    return 0;
}
