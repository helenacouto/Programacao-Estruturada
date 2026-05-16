#include <stdio.h>

int main() {

    int M, N, soma = 0;
    int numMaior, i;

    printf("Digite um par de numeros inteiros separados por espaco:\n");
    scanf("%d %d", &M, &N);
    
    while (M > 0 && N > 0) {

        if (M > N) {
            numMaior = M;
            M = N;
            N = numMaior;
        }

        for (i = M; i <= N; i++) {
            printf("%d ", i);
            soma += i;
        }

        printf("\n%d", soma);
        soma = 0;
        
        printf("\nDigite um par de numeros inteiros separados por espaco:\n");
        scanf("%d %d", &M, &N);
    }

    printf("\nProcessamento finalizado.");

    return 0;
}