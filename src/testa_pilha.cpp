#define CATCH_CONFIG_MAIN
#include "pilha.h"
//#include "catch.hpp"
  TEST_CASE( "Trabalho 1" ){
    SECTION( "Testa a criaPilha" ){
      TipoPilha *pilha;
      pilha = criaPilha();

      REQUIRE( (pilha->tamanho) == 0 );
      REQUIRE( pilha->tamanhomax == 100 );

      free(pilha);
    }//End section 1

    SECTION("Testa a funcao push, sem criar a pilha e depois criada"){
      int verificador;
      TipoPilha *pilha;
      pilha = criaPilha();
      verificador = Push(pilha, 10);
      REQUIRE( (verificador) == 0 );
      for(int i=0; i<100; i++)
        verificador = Push(pilha, 1);
      REQUIRE( verificador == -1 );
      DestroyStack(pilha);
      free(pilha);
    }//End section 2 

    SECTION("Testa a funcao Pop, com duas insercoes"){
      TipoPilha *pilha;
      pilha = criaPilha();
      Push(pilha, 10);
      Push(pilha, 21);
      apontadorPilha *teste = (apontadorPilha *)malloc(sizeof(celulaPilha));
      teste = Pop(pilha);
      REQUIRE( pilha->tamanho == 1 );
      teste = Pop(pilha);
      REQUIRE( teste->valor == 10 );
      teste = Pop(pilha);
      REQUIRE( teste == NULL );
      DestroyStack(pilha);
      free(pilha);
    }//End section 3 

  }//end Test case
