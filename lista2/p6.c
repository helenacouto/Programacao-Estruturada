#include <stdio.h>

int somaDivisores(int n, int d){
    if (d >= n) {
        return 0;
    }
    if (n % d == 0) {
        return d + somaDivisores(n, d + 1);
    }
    return somaDivisores(n, d + 1);
}

int amigos(int a, int b) {
    return (a == somaDivisores(b, 1) && b == somaDivisores(a, 1));
}

int main() {
    int a, b;

    printf("Digite a e b: ");
    scanf("%d %d", &a, &b);

    if (amigos(a, b)) {
        printf("Eles sao amigos!! :)");
    } else {
        printf("Eles nao sao amigos... :(");
    }

    return 0;
}