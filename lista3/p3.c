#include <stdio.h>
#include <stdlib.h>

int main() {
    int *idades, n;
    int maisVelha = 0, qualVelha;
    int maisNova = 150, qualNova;
    int adultos = 0, menorDeIdade = 0, idosos = 0;

    printf("Quantas pessoas serao analisadas? ");
    scanf("%d", &n);

    idades = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Digite a idade da pessoa %d: ", (i + 1));
        scanf("%d", &idades[i]);

        if (idades[i] > maisVelha) {
            maisVelha = idades[i];
            qualVelha = i + 1;
        }

        if (idades[i] < maisNova) {
            maisNova = idades[i];
            qualNova = i + 1;
        }

        if (idades[i] >= 18 && idades[i] <= 30) {
            adultos += 1;
        }

        if (idades[i] >= 60) {
            idosos += 1.0;
        }

        if (idades[i] < 18) {
            menorDeIdade = 1;
        }
    }

    printf("\nA pessoa %d eh a mais velha (%d anos).", qualVelha, maisVelha);
    printf("\nA pessoa %d eh a mais nova (%d anos)", qualNova, maisNova);
    printf("\n%d pessoa(s) tem entre 18 e 30 anos.", adultos);
    printf("\n%.1f porcento do grupo sao idosos.", ((float)idosos / n) * 100.0);
    
    if (menorDeIdade == 1) {
        printf("\nE existe(m) alguma(s) pessoa(s) menor(es) de idade no grupo.");
    } else {
        printf("\nE nao existem pessoas menores de idade no grupo.");
    }

    free(idades);
    return 0;
}