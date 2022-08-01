#define TOTALPECAS 28

typedef struct _peca{
    int l1; //lado 1
    int l2; //lado 2
} PECAS;

void inicializarPecas(PECAS *pecas);
void imprimirTodasPecas(PECAS *pecas);