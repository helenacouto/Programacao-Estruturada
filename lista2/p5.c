#include <stdio.h>

int passos(int n) {
    if (n == 1) {
        return 0;
    } else if (n % 2 == 0) {
        n = n/2;      
        return 1 + passos(n);
    } else {
        n -= 1;
        return 1 + passos(n);
    }
}

int main() {
    int num;

    printf("Digite o numero a ser analisado: ");
    scanf("%d", &num);

    printf("Quantidade de passos: %d", passos(num));


    return 0;
}