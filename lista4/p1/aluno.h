#ifndef ALUNO_H
#define ALUNO_H

typedef struct {
    int matricula;
    char nome[50];
    float nota;
} Aluno;

void cadastrarAlunos(Aluno *alunos, int n);
void listarAlunos(Aluno *alunos, int n);
int alunoMaiorNota(Aluno *alunos, int n);

#endif