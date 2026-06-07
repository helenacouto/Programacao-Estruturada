#include <stdio.h>

int somaMultiplos(int inicio, int fim, int k) {
    int i, soma = 0;

    for (i = inicio; i <= fim; i++) {
        if (i % k == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int k, inicio, fim;

    printf("Qual o numero? ");
    scanf("%d", &k);
    printf("Inicio e fim do intervalo separado por espaco: ");
    scanf("%d %d", &inicio, &fim);

    printf("Soma dos multros dentro desse intervalo: %d", somaMultiplos(inicio, fim, k));

    return 0;
}