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
  }//end Test case
