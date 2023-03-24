#include <stdio.h>

int main() {
    int a, b, c, d, diferenca;

    printf("Digite um valor inteiro A:");
    scanf("%d", &a);

    printf("Digite um valor inteiro B:");
    scanf("%d", &b);

    printf("Digite um valor inteiro C:");
    scanf("%d", &c);

    printf("Digite um valor inteiro D:");
    scanf("%d", &d);

    diferenca = (a * b - c * d);

    printf("DIFERENCA = %d\n", diferenca);

    return 0;
}
