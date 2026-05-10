#include <stdio.h>

int main() {
    int num, i = 1;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    while(i * (i + 1) * (i + 2) < num) {
        i++;
    }

    if(i * (i + 1) * (i + 2) == num) {
        printf("Este numero eh triangular.");
    } else {
        printf("Este numero nao eh triangular.");
    }

    return 0;
}