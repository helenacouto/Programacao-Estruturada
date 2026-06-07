#include <stdio.h>

void minMax(int a, int b, int c, int *min, int *max) {
    *min = a;
    if (*min > b) {
        *min = b;
    }
    if (*min > c) {
        *min = c;
    }

    *max = a;
    if (*max < b) {
        *max = b;
    }
    if (*max < c) {
        *max = c;
    }
}

int main() {
    int a, b, c;
    int min, max;

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    minMax(a, b, c, &min, &max);

    printf("%d %d", min, max);

    return 0;
}