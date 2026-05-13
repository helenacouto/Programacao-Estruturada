#include <stdio.h>

int main() {
    
    float A, B, media;

    printf("Digite a nota A: ");
    scanf("%f", &A);
    printf("Digite a nota B: ");
    scanf("%f", &B);

    media = (A*3.5 + B*7.5) / 11;
    printf("MEDIA = %.5f", media);

    return 0;
}
