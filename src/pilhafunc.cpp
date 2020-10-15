#include "pilha.h"

TipoPilha* criaPilha(void) {
/**
 * @brief A funcao criaPilha, cria uma pilha, inicialmente vazia.
 * Seta o tamanho inicial para 0 e o tamanho maximo para 100
 */
    TipoPilha *monte = (TipoPilha *)malloc(sizeof(TipoPilha));
    monte->topo = NULL;
    monte->tamanho = 0;
    monte->tamanhomax = 100;
    return monte;
}

