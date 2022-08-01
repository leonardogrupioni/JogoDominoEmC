#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "domino.h"

void inicializarPecas(PECAS *pecas){
    
    
    //pecas[posicao].<l1 ou l2>

    //inicializar lado l1 ou pecas.l1:
    int diminui = 6; // de 6 a 0
    int cont1 =  0; // contador de 0 a 28
    for(int i = 0; i <= 6; i++){
        for(int j = diminui; j >= 0; j--){
            if(cont1 < 28){
                pecas[cont1].l1 = i;
                cont1++;
            }
        }
        diminui--;
    }

    //inicializar lado l2 ou pecas.l2
    int inicial = 0;
    int cont2 = 0;
    for(int i = 0; i <=6; i++){
        for(int j = i; j <= 6; j++){
            if(cont2 < 28){
                pecas[cont2].l2 = j;
                cont2++;
            }
        }
    }


}

void imprimirTodasPecas(PECAS *pecas){
    printf("Pecas do Domino\nTotal: 28\n\n");
    printf("          Pecas\n");
    printf("N-daPeca Lado 1 | Lado 2\n");
    for(int i = 0; i < 28; i++){
        printf("   %d      %d   |   %d  \n", i+1, pecas[i].l1,pecas[i].l2);
    }
}

void embaralharPecas(PECAS *pecas){ //embaralharPecas: -pegar 7 numeros aleatorios e entregar ao usuario

    PECAS pecasEmb[7];//pecas embaralhadas

    int nSorteados[7];

    //sortear numero de 1 a 28 ou 0 a 27(vetor) e envialos para pecasEmb[1 a 7]
    sorteio(7, 27, nSorteados); 

    for(int i = 0; i < 7; i++){
        pecasEmb[i] = pecas[nSorteados[i]];  
    }

    printf("\nAs 7 peças embaralhadas são: \n");
    for(int i = 0; i < 7; i++){
        printf("Peça aleatoria #%d: %d | %d", i+1, pecasEmb[i].l1, pecasEmb[i].l2);
    }
}

void sorteio(int qtd, int max, int* retorno){ //eu quero n numeros aleatorios de 0 a tal
    int retorno[qtd];
    int controle;
    int anterior; 
    for(int i = 0; i < qtd; i++){
        do{
            controle = 0;
            retorno[i] = rand() % max;
            if(anterior == retorno[i]){
                controle = 1; 
            }
            anterior = retorno[i];
        } while(controle != 0);
    }
}
