//struct do tipo peca
typedef struct peca{
    int l1; //lado 1
    int l2; //lado 2
    //int id; //id de 0 a 27;
    int posicao; //posicao da peca
    char stats; //onde esta a peca, P = pilha, 1 = jogador1, 2 = jogador2, M = mesa
}PECAS;

//constantes
#define TOTALPECAS 28

//pre-declara funcoes
void inicializarPecas(PECAS pecas[]);
void embaralharPecas(PECAS pecas[]);
void desembaralharPeca(PECAS pecas[]);