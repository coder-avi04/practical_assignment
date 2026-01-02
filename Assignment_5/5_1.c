#include <stdio.h>

int main() {
    int n, a[100], sum = 0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);

    return 0;
}
