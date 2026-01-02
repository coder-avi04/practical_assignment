#include <stdio.h>

int main() {
    int i, j;
    char name[] = "AVISHEK";
    int n = 7; 

    for (i = 0; i < n; i++) {
        for (j = 0; name[j] != '\0'; j++) {
            switch (name[j]) {
                case 'A':
                    if (i == 0 || i == n/2)
                        printf(" *** ");
                    else if (i < n)
                        printf("*   *");
                    break;
                case 'V':
                    if (i < n-1)
                        printf("*   *");
                    else
                        printf(" * * ");
                    break;
                case 'I':
                    if (i == 0 || i == n-1)
                        printf("*****");
                    else
                        printf("  *  ");
                    break;
                case 'S':
                    if (i == 0 || i == n/2 || i == n-1)
                        printf("*****");
                    else if (i < n/2)
                        printf("*    ");
                    else
                        printf("    *");
                    break;
                case 'H':
                    if (i == n/2)
                        printf("*****");
                    else
                        printf("*   *");
                    break;
                case 'E':
                    if (i == 0 || i == n/2 || i == n-1)
                        printf("*****");
                    else
                        printf("*    ");
                    break;
                case 'K':
                    if (i < n/2)
                        printf("*   *");
                    else if (i == n/2)
                        printf("**   ");
                    else
                        printf("*   *");
                    break;
            }
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}