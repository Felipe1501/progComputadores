#include <stdio.h>

int main(){

    int qt, n, pares=0, i=0;;

    scanf("%i", &qt);

    do{
        scanf("%i", &n);

        if(n%2==0){
            pares+=n;
        }
    i++;
    }
    while (i<qt);
    printf("Soma dos Pares: %i\n", pares);

    return 0;
}
