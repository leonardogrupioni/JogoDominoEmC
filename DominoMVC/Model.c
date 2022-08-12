#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Model.h"
#include "View.h"
#include "Controller.h"


//Model = aqui ficam as funcoes referentes a alteracoes de memoria, como alteracao das variaveis e arrays
//        alem disso structs e funcoes referentes a mesma ficam nesete arquivo




//funcao de inicializar pecas
void inicializarPecas(PECAS pecas[]){
    int i = 0;
    for(int j = 0; j <= 6; j++){ //0 0 0 0 0 0 0 1 1 1 1 1 1 2 2 2 2 2 3 3 3 3 4 4 4 5 5 6
        for(int k = j ; k <= 6; k++){ //0 1 2 3 4 5 6 1 2 3 4 5 6 2 3 4 5 6 3 4 5 6 4 5 6 5 6 6
            pecas[i].l1 = j; //atribui valor ao lado 1
            pecas[i].l2 = k; //atribui valor ao lado 2
            pecas[i].posicao = i;//atribui a posicao das peças em ordem 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27
            i++;
        }
    }
}

//funcao que emaralha as pecas do domino, mais especificamente embaralha a variavel posicao do struct
void embaralharPecas(PECAS pecas[]){ //embaralharPecas: pegar numeros aleatorios de 0 a 27 para trocar a posicao de todas as pecas
    int temp = 0; //variavel auxiliar para a substituicao das posicoes de lugar
    int r = 0; //variavel que recebe o numero aleatorio gerado pela funcao rand
    for(int i = 0; i < 28; i++){
        r =  rand () % 28; //funcao que gera o numero aleatorio
        temp = pecas[i].posicao; //recebe a posicao i
        pecas[i].posicao = pecas[r].posicao; //passa a posicao randomica para a posicao i
        pecas[r].posicao = temp; //envia para a posicao randomica a antiga posicao de i
    }
}

void desembaralharPeca(PECAS pecas[]){ //desembaralha as pecas voltando a variavel posicao ao seu valor inicial (re-inicializa)
    for(int i = 0; i < 28; i++){
       pecas[i].posicao = i;
    }
}

    /*
    //vendendo as 7 primeiras peças
    printf("\n");
    printf("\n");
    printf("\n");
    for(int i = 0; i < 7; i++){
        pecas[i].stats = '1';
        printf("Peca entregue #%d: %d / %d", i+1, pecas[pecas[i].posicao].l1, pecas[pecas[i].posicao].l2);
        printf("\n");
    }

    */ //ideia para o futuro do projeto