#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

int main(void) {
    int n;

    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &n);

    Aluno *alunos = malloc(n * sizeof(Aluno));
    if (alunos == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    cadastrarAlunos(alunos, n);
    listarAlunos(alunos, n);

    int iMaior = alunoMaiorNota(alunos, n);
    printf("\nAluno com maior nota: %s (Nota: %.1f)\n",
           alunos[iMaior].nome, alunos[iMaior].nota);

    free(alunos);
    return 0;
}