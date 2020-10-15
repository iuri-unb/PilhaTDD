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

    SECTION("Testa a funcao Top, com duas insercoes"){
      TipoPilha *pilha;
      pilha = criaPilha();
      Push(pilha, 10);
      apontadorPilha *teste = (apontadorPilha *) malloc(sizeof(celulaPilha));
      teste = Top(pilha);
      REQUIRE( teste->valor == 10 );
      Push(pilha, 21);
      teste = Top(pilha);
      REQUIRE( teste->valor == 21 );
      REQUIRE( pilha->tamanho == 2 );
	    DestroyStack(pilha);
      free(pilha);
    }//End section 4 

    SECTION("Testa a funcao Size"){
      TipoPilha *pilha;
      int teste;
      pilha = criaPilha();
      teste = Size(pilha);
      REQUIRE( teste == 0 );
      Push(pilha, 19);
      teste = Size(pilha);
      REQUIRE( teste == 1 );
      Pop(pilha);
      teste = Size(pilha);
      REQUIRE( teste == 0);
	DestroyStack(pilha);
      free(pilha);
    }//End section 5 

  }//end Test case
