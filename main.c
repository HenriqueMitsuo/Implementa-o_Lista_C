/**
*
*  IMPLEMENTAÇÃO DE ALGORITMO LISTA ENCADEADA
*
**/
#include <stdio.h>
#include <stdlib.h>
/// INCLUDE DO HEADER COM AS ASSINATURAS E DECLARAÇÕES
#include "projeto.h"

int main () {

   /// DECLARANDO PONTEIRO DO TIPO ALUNO
   A *cabeca;
   /// INICIALIZANDO A VARIAVEL PARA TER CERTEZA DE QUE NÃO HA LIXO DE MEMORIA
   cabeca = NULL;

   menu(cabeca);

   return 0;
}
