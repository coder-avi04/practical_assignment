//Maximum of two numbers using pointers
#include <stdio.h>

void findMax(int *a, int *b) {
    if (*a > *b)
        printf("Maximum: %d", *a);
    else
        printf("Maximum: %d", *b);
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    findMax(&x, &y);

    return 0;
}