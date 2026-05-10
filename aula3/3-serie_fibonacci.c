#include <stdio.h>

int main() {
    int num = 1, antecessor1 = 0, antecessor2 = 0, i;

    printf("Serie de Fibonacci:\n");

    for(i = 1; i <= 20; i++) {
        printf("%d ", num);
        antecessor2 = antecessor1;
        antecessor1 = num;
        num = antecessor1 + antecessor2;
    }

    return 0;
}