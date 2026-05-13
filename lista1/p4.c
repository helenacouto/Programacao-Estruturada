#include <stdio.h>

int main() {

    int N, segundos, minutos, horas;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &N);

    horas = N / 3600;
    N -= horas * 3600;

    minutos = N / 60;
    N -= minutos * 60;
    
    segundos = N;

    printf("%02d:%02d:%02d", horas, minutos, segundos);

    return 0;
}