#include <stdio.h>

int main(){

    double notas;
    int nt100, nt50, nt20, nt10, nt5, nt2, moeda1, moeda50, moeda25, moeda10, moeda5, moeda01;

    scanf("%lf\n", &notas);

    nt100 = notas / 100;
    notas = notas - (nt100 * 100);

    nt50 = notas / 50;
    notas = notas - (nt50 * 50);

    nt20 = notas / 20;
    notas = notas - (nt20 * 20);

    nt10 = notas / 10;
    notas = notas - (nt10 * 10);

    nt5 = notas / 5;
    notas = notas - (nt5 * 5);

    nt2 = notas / 2;
    notas = notas - (nt2 * 2);

    moeda1 = notas / 1;
    notas = notas - (moeda1 * 1);

    moeda50 = notas / 0.50;
    notas = notas - (moeda50 * 0.50);

    moeda25 = notas / 0.25;
    notas = notas - (moeda25 * 0.25);

    moeda10 = notas / 0.10;
    notas = notas - (moeda10 * 0.10);

    moeda5 = notas / 0.05;
    notas = notas - (moeda5 * 0.05);

    moeda01 = notas / 0.01;
    notas = notas - (moeda01 * 0.01);


    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n", nt100);
    printf("%i nota(s) de R$ 50.00\n", nt50);
    printf("%i nota(s) de R$ 20.00\n", nt20);
    printf("%i nota(s) de R$ 10.00\n", nt10);
    printf("%i nota(s) de R$ 5.00\n", nt5);
    printf("%i nota(s) de R$ 2.00\n", nt2);
    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n", moeda1);
    printf("%i moeda(s) de R$ 0.50\n", moeda50);
    printf("%i moeda(s) de R$ 0.25\n", moeda25);
    printf("%i moeda(s) de R$ 0.10\n", moeda10);
    printf("%i moeda(s) de R$ 0.05\n", moeda5);
    printf("%i moeda(s) de R$ 0.01\n", moeda01);
    return 0;
}
