#include <stdio.h>
#include <stdlib.h>

int main() {

    int N, aprovados = 0, recuperacao = 0, reprovados = 0;
    float *notas, perApro, perRecu, perRepr;

    printf("Quantos alunos serao analisados? ");
    scanf("%d", &N);

    notas = malloc(N * sizeof(float));

    for (int i = 0; i < N; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);

        if (notas[i] >= 8.0) {
            aprovados +=1;
        } else if (notas[i] >= 6.0 ) {
            recuperacao += 1;
        } else {
            reprovados += 1;
        }
    }
    free(notas);

    perApro = ((float)aprovados / N) * 100.0;
    perRecu = ((float)recuperacao / N) * 100.0;
    perRepr = ((float)reprovados / N) * 100.0;

    printf("\n%.1f por cento foram aprovados: %d aluno(s).", perApro, aprovados);
    printf("\n%.1f por cento estao de recuperacao: %d aluno(s).", perRecu, recuperacao);
    printf("\n%.1f por cento foram reprovados: %d aluno(s).", perRepr, reprovados);

    return 0;
}