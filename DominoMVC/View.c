#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Model.h"
#include "View.h"
#include "Controller.h"
//View = arquivo que ficam armazenadas as funcoes referentes a interação com o usuario, quanto de mostrar na tela
//       quanto funcoes de recber dados enviados pelo usuario (funcoes relacionados a printf e scanf) 



void imprimirTodasPecas(PECAS pecas[]){
    printf("Pecas do Domino\nTotal: 28\n\n");
    printf("          Pecas\n");
    printf("N-daPeca Lado 1 | Lado 2\n");
    for(int i = 0; i < 28; i++){
        printf("   %d      %d   |   %d  \n", i+1, pecas[i].l1,pecas[i].l2);
    }
}

void imprimirPecasEmbaralhadas(PECAS pecas[]){
    
    printf("\nAs 28 pecas embaralhadas sao: \n");
    for(int i = 0; i < 28; i++){
        printf("Peca aleatoria #%d: %d | %d\n", i+1, pecas[pecas[i].posicao].l1, pecas[pecas[i].posicao].l2);
    }
}

void imprimirPecasDesembaralhadas(PECAS pecas[]){
    printf("\nAs 28 pecas desembaralhadas sao: \n");
    for(int i = 0; i < 28; i++){
        printf("Peca #%d: %d | %d\n", pecas[i].posicao+1, pecas[i].l1, pecas[i].l2);
    }
}

int imprimirMenuInicial(){
    int opcao;
    printf("Escolha a opcao desejada: \n[1]inicializa\n[2]imprime pecas\n[3]embaralha e imprime\n[4]desembaralha e imprime\n[5]sair\n...");
    scanf("%d", &opcao);
    return opcao;
}