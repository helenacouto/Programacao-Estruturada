#include <stdio.h>
#include <stdlib.h>

void imprimirVetor(int *vetor, int tam) {
    if (tam == 1) {
        printf("{%d}", vetor[0]);
    } else {
        for (int i = 0; i < tam; i++) {
            if (i == 0) {
                printf("{%d, ", vetor[i]); 
            } else if (i != tam - 1) {
                printf("%d, ", vetor[i]);
            } else {
                printf("%d}", vetor[i]);
            }
        }
    }
}

int main() {
    int N, *A, *B;
    int *S, *D, *P;

    printf("Quantos numeros inteiros serao? ");
    scanf("%d", &N);

    A = malloc (N * sizeof(int));
    B = malloc (N * sizeof(int));

    printf("\n===Atribuindo valores ao vetor A===\n");
    for (int i = 0; i < N; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\n===Atribuindo valores ao vetor B===\n");
    for (int i = 0; i < N; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &B[i]);
    }

    S = malloc (N * sizeof(int));
    D = malloc (N * sizeof(int));
    P = malloc (N * sizeof(int));

    for (int i = 0; i < N; i++) {
        S[i] = A[i] + B[i];
        D[i] = A[i] - B[i];
        P[i] = A[i] * B[i];
    }

    printf("\n\nVetor S: ");
    imprimirVetor(S, N);
    printf("\n\nVetor D: ");
    imprimirVetor(D, N);
    printf("\n\nVetor P: ");
    imprimirVetor(P, N);

    free(A);
    free(B);
    free(S);
    free(D);
    free(P);
    return 0;
}