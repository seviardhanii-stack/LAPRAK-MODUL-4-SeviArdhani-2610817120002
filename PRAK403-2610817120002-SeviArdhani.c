#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int i = a, j = b;
    int first = 1;

    if (a <= b) {
        while (i <= b && j >= a) {
            if (!first) {
                printf("-");
            }
            printf("%d %d", i, j);
            first = 0;
            i++;
            j--;
        }
    } else {
        while (i >= b && j <= a) {
            if (!first) {
                printf("-");
            }
            printf("%d %d", i, j);
            first = 0;
            i--;
            j++;
        }
    }
    printf("\n");

    return 0;
}