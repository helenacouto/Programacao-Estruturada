#include <stdio.h>

int main() {

    int horaInicio, minutoInicio, horaFim, minutoFim;
    int inicio, fim, duracao;
    int horas, minutos;

    printf("Digite o horario de inicio do jogo (no formato 00:00):\n");
    scanf("%d:%d", &horaInicio, &minutoInicio);

    printf("Digite o horario de termino do jogo (no formato 00:00):\n");
    scanf("%d:%d", &horaFim, &minutoFim);

    inicio = horaInicio * 60 + minutoInicio;
    fim = horaFim * 60 + minutoFim;

    if (fim <= inicio) {
        fim += 24 * 60;
    }

    duracao = fim - inicio;
    horas = duracao / 60;
    minutos = duracao % 60;

    printf("\nO jogo durou %d horas e %d minutos", horas, minutos);

    return 0;
}