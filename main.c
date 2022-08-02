#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "domino.h"

int main(){
    //funcao para gerar sempre um novo numero randomico
    srand(time(0));

    printf("JOGO DE DOMINO!\n\n");

    //criando array pecas:
    PECAS pecas[28];
    
    inicializarPecas(pecas);

    imprimirTodasPecas(pecas);

    embaralharPecas(pecas);

    return 0;
}
