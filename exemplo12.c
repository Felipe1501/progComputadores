#include <stdio.h>

int main() {
    float preco, custo;
    int ingressos;
    preco = 0.0;
    custo = 0.0;
    ingressos = 0;

    printf("Preco do ingresso: R$ ");
    scanf("%f", &preco);
    printf("Numero de ingressos: ");
    scanf("%d", &ingressos);

    custo = ingressos * preco;

    if(ingressos > 5) {
        custo = custo - custo * 0.2;
    }

    printf("Custo de %d ingressos: R$ %.2f\n", ingressos, custo);

    return 0;
}
