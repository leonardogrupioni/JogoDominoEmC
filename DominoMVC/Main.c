#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//inclui os outros arquivos do projeto e unifica o todo
#include "Model.h"
#include "View.h"
#include "Controller.h"


int main(){
    srand(time(0)); //funcao para gerar sempre uma nova semente para gerar os numeros randomicos

    printf("JOGO DE DOMINO!\n\n");

    //cria a array pecas
    PECAS pecas[28]; 

    menuController(pecas);
   
    return 0;
}
