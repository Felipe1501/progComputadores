#include <stdio.h>

int main() {
    float horas;
    int minutos, segundos;

    horas = 0.0;
    minutos = 0;
    segundos = 0;

    printf("Entre com as horas: ");
    scanf("%f",&horas);

    minutos = horas * 60;
    segundos = minutos * 60;

    printf("Equivale a %i minutos ou %i segundos. \n", minutos, segundos);
    return 0;
}
