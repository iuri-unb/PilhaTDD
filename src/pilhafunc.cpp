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

int Push(TipoPilha *monte, TipodaPilha insercao) {
/**
 * @brief Insere um elemento na Pilha, contendo um valor (que é do tipo pilha)
 * o tamanho da pilha é aumentado em 1
 * @return Retorna 0 se a insercao foi feita ou -1 caso tenha falhado
 * @param TipoPilha ponteiro(monte), TipoPilha insercao
 */
    //TipoPilha *monte = (TipoPilha *)malloc(sizeof(TipoPilha));
    if( monte->tamanho == monte->tamanhomax ){
        printf("Pilha Cheia! Nao foi feita a insercao!\n");
        return -1;
    } // end if
    apontadorPilha *novo = (apontadorPilha *)malloc(sizeof(celulaPilha));
    //* Setando a nova celula para ser inserida */
    novo->valor = insercao;
    novo->proximo = monte->topo;
    monte->topo = novo;
    monte->tamanho = monte->tamanho +1;
    return 0;
}

apontadorPilha* Pop(TipoPilha *monte) {
/**
 * @brief Remove um elemento da Pilha e retorna esse mesmo elemento
 *@return Retorna a celula da pilha que foi removida, com todos seus dados
 * @param TipoPilha ponteiro(monte)
 */
    if ( monte->topo == NULL )
        return NULL;  // Pilha vazia, nao removeu ninguem
    apontadorPilha *novo = (apontadorPilha *)malloc(sizeof(celulaPilha));
    monte->tamanho = monte->tamanho -1;
    novo = monte->topo;
    monte->topo = monte->topo->proximo;
    return novo;
} 

apontadorPilha* Top(TipoPilha *monte) {
/**
 * @brief Retorna o elemento que esta no topo da pilha, mas sem remove-lo
 *@return Retorna o elemento do topo da Pilha
 * @param TipoPilha ponteiro(monte)
 */
    apontadorPilha *novo = (apontadorPilha *)malloc(sizeof(celulaPilha));
    novo = monte->topo;
    return novo;
}

int Size(TipoPilha *monte) {
/**
 * @brief Funcao que mostra o tamanho atual da pilha, por meio de uma das caracteristicas da pilha (tamanho)
 *@return Retorna o tamanho da pilha como um inteiro 
 * @param TipoPilha ponteiro(monte)
 */
    int tamanho;
    tamanho = monte->tamanho;
    return tamanho;
}

bool IsFull(TipoPilha *monte) {
/**
 * @brief Indica se a pilha ja esta cheia. Recebe como entrada a Pilha
 *@return Retorna true caso a pilha ja esteja cheia, false caso contrario 
 */
    if ( monte->tamanho == monte->tamanhomax )
        return true;
    else
        return false;
}

bool IsEmpty(TipoPilha *monte) {
/**
 * @brief Indica se a Pilha esta vazia. Recebe como entrada a Pilha
 *@return Retorna true caso a pilha esteja vazia 
 */
    if ( monte->topo == NULL )
        return true;
    else
        return false;
}

void SetSize(TipoPilha *monte, unsigned int tamanho1) {
/**
 * @brief Muda o tamanho maximo da pilha, inicialmente setado em 100 elementos 
 * Recebe como entrada a Pilha e o novo tamanho desejado
 */
    if ( monte->tamanho > tamanho1) //** Caso o novo tamanho seja menor que o tamanho atual, retorna sem mudar o tamanho */
        return;
    monte->tamanhomax = tamanho1;
    return;
}

void DestroyStack(TipoPilha *monte) {
/**
 * @brief Destroi os elementos da pilha, fazendo com que vire uma Pilha vazia. Recebe como entrada a Pilha 
 */
	apontadorPilha *temporario = monte->topo;
	apontadorPilha *temporario2;

	while ( temporario != NULL ) { //* Vai percorrer os elementos da pilha até ela ficar vazia */
		temporario2 = temporario;
		temporario = temporario->proximo;
		free(temporario2);
	} // Fim do While
		monte->topo = NULL;
}
