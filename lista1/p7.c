#include <stdio.h>

int main() {

    int n1, n2, n3;

    printf("Digite tres valores inteiros separados por espaco: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2) {
        if (n1 > n3) {
            if (n2 > n3) {
                printf("%d\n%d\n%d\n\n", n3, n2, n1);
            } else {
                printf("%d\n%d\n%d\n\n", n2, n3, n1);
            }
        } else {
            printf("%d\n%d\n%d\n\n", n2, n1, n3);
        }
    } else {
        if (n3 > n1) {
            if  (n2 > n3) {
                printf("%d\n%d\n%d\n\n", n1, n3, n2);
            } else {
                printf("%d\n%d\n%d\n\n", n1, n2, n3);
            }
        } else {
            printf("%d\n%d\n%d\n\n", n3, n1, n2);
        }
    }

    printf("%d\n%d\n%d", n1, n2, n3);

    return 0;
}