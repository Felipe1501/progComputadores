#include <stdio.h>

int main(){

    int  x, y;


    do{
        scanf("%i %i", &x, &y);

        if(x>y){

            printf("Decrescente\n");

        }
        else if(y>x){

            printf("Crescente\n");
        }

    }
    while (x!=y);

    printf("Acabou!\n");

    return 0;
}
