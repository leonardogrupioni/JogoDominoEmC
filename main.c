#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "domino.h"s

int main(){
    //funcao para gerar sempre um novo numero randomico
    srand(time);

    printf("JOGO DE DOMINO!\n\n");

    //criando array pecas:
    PECAS pecas[28];
    
    inicializarPecas(pecas);

    imprimirTodasPecas(pecas);

    return 0;
}