// Aqui vai ficar a definicao da pilha
#ifndef _HOME_IURI_UNB_2020_1_MP_TRABALHO_1_INCLUDE_PILHA_H_
#define _HOME_IURI_UNB_2020_1_MP_TRABALHO_1_INCLUDE_PILHA_H_
#include <stdio.h>
#include <stdlib.h>
#include "catch.hpp"

/**
 * @file doxygen_cpp.h
 * @author Iuri
 * @date 10 Sep 2020
 * @brief Arquivo contendo a implementacao de funcoes basicas de uma pilha
 *
 */
typedef int TipodaPilha;    // Define o tipo dos elementos da pilha

typedef struct celula apontadorPilha;

/**
 * @brief Definicao de uma celula da pilha
 *
 */
typedef struct celula {
  TipodaPilha valor; /**< Tipo que a pilha vai armazenar. */
  apontadorPilha  *proximo; 
}celulaPilha;


/**
 * @brief Definicao da Pilha
 *
 */

typedef struct {
  apontadorPilha *topo;
  int tamanho;
  unsigned int tamanhomax;
}TipoPilha;




TipoPilha* criaPilha(void);
int Push(TipoPilha *, TipodaPilha);
apontadorPilha* Pop(TipoPilha *);
apontadorPilha* Top(TipoPilha *);
int Size(TipoPilha *);
void SetSize(TipoPilha *, unsigned int);
bool IsFull(TipoPilha *);
bool IsEmpty(TipoPilha *);
void DestroyStack( TipoPilha *);
#endif  // _HOME_IURI_UNB_2020_1_MP_TRABALHO_1_INCLUDE_PILHA_H_
