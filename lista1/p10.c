#include <stdio.h>
#include <math.h>

int main() {

    float A, B, C;
    float delta, raiz1, raiz2;

    printf("Informe o A, B e C da equacao de segundo grau (separados por espaco): ");
    scanf("%f %f %f", &A, &B, &C);

    if (A == 0) {
        printf("Impossivel calcular\n");
    } else {
        delta = B*B - 4.0*A*C;

        if (delta < 0) {
            printf("Impossivel calcular\n");
        } else {
            raiz1 = (-B + sqrt(delta)) / (2.0*A);
            raiz2 = (-B - sqrt(delta)) / (2.0*A);
            
            printf("Raiz 1 = %.2f\n", raiz1);
            printf("Raiz 2 = %.2f\n", raiz2);
        }
    }

    return 0;
}