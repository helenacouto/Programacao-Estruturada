#include <stdio.h>

int main () {
    
    float pi = 3.14159, V, R;

    printf("Informe o raio da esfera: ");
    scanf("%f", &R);

    V = (4.0/3.0) * pi * (R * R * R);
    printf("VOLUME = %.3f", V);

    return 0;
}