#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Model.h"
#include "View.h"
#include "Controller.h"
//#include "Model.c"//a principio nao deveria ter que incluir aqui, mas por conta de bug na IDE foi incluido

//Controller = arquivo responsavel por armazenar o menu e as funcoes que farao a comunicacao do View com o Model, ou seja,
//             uma acao é requerida no View ela é enviada para o Controller que ao receber faz a ponte(conexao) com o Model
//             que executa a funcao necessaria e em seguida devolve para o Controller que envia para o View



//Funcao controller
void menuController(PECAS pecas[]){

    int controle = 1;
    do{
    int op = imprimirMenuInicial(); //funcao no view que impreme o menu inicial
    
    
    switch(op){
        
            case 1:
                inicializarPecas(pecas);
                //trabalhar o jogo aqui dentro os demais casos sao apenas para efeito de primeiras versoes
                //inicialisar funcoes para poder jogar embaralhar, distribuir pecas, quantos players vao jogar (2 = 1x1) (1 = 1xIA), ...
                break;
            //os casos em diante sao apenas para efeito de primeiras versoes
            case 2:
                imprimirTodasPecas(pecas);
                break;
            case 3:
                embaralharPecas(pecas);
                imprimirPecasEmbaralhadas(pecas);
                break;
            case 4:
                desembaralharPeca(pecas);
                imprimirPecasDesembaralhadas(pecas);
                break;
            default: 
                controle = 0;
                break;
        }
    }while(controle != 0);
}