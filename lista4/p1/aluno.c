#include <stdio.h>
#include "aluno.h"

void cadastrarAlunos(Aluno *alunos, int n) {
    for (int i = 0; i < n; i++) {
        printf("\n==== Aluno %d ====\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        scanf("%s", &alunos[i].nome);
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }
}

void listarAlunos(Aluno *alunos, int n) {
    printf("\n==== Lista de Alunos ====\n");
    for (int i = 0; i < n; i++) {
        printf("Matricula: %d | Nome: %s | Nota: %.1f\n",
               alunos[i].matricula, alunos[i].nome, alunos[i].nota);
    }
}

int alunoMaiorNota(Aluno *alunos, int n) {
    int indiceMaior = 0;
    for (int i = 1; i < n; i++) {
        if (alunos[i].nota > alunos[indiceMaior].nota) {
            indiceMaior = i;
        }
    }
    return indiceMaior;
}