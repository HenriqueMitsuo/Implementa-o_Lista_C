#include <stdio.h>
#include <stdlib.h>
/// INCLUDE DO HEADER COM AS ASSINATURAS E DECLARAÇÕES
#include "projeto.h"

A* cadastrarInicio(A* ponteiro) {

   A *aluno;
   ///     (<TIPO DO STRUCT>)malloc(sizeof(<TAMANHO QUE DEVE SER ALOCADO>))
   aluno = (A*)malloc(sizeof(A)); /// ALOCA ESPAÇO DE MEMORIA PARA EFETUAR CADASTRO DE UM STRUCT

   printf("Digite o ra: ");
   scanf("%i", &aluno.ra);

   printf("Digite o nome: ");
   scanf("%s", &aluno.nome);

   printf("Digite a idade: ");
   scanf("%i", &aluno.idade);

   printf("Digite o celular: ");
   scanf("%i", &aluno.celular);
};

A* cadastrarMeio(A* ponteiro) {


};

A* cadastrarFim(A* ponteiro) {


};

A* cadastrar(A* ponteiro) {

   int opcao;

   system("cls");

   printf("1 - Cadastrar no inicio");
   printf("\n2 - Cadastrar no meio");
   printf("\n3 - Cadastrar no fim");

   printf("\nEscolha uma opcao para cadastro: ");
   scanf("%i", &opcao);

   switch(opcao) {

      case 1:
         cadastrarInicio(cabeca);
         break;

      case 2:
         cadastrarMeio(cabeca);
         break;

      case 3:
         cadastrarFim(cabeca);
         break;

      default:
         printf("\nOpcao invalida!!!");
   }
};

void menu() {

   int opcao;

   /// DECLARANDO PONTEIRO DO TIPO ALUNO
   A *cabeca;
   /// INICIALIZANDO A VARIAVEL PARA TER CERTEZA DE QUE NÃO HA LIXO DE MEMORIA
   cabeca = NULL;

   do {
      // CADASTRAR ALUNO
      printf("1 - Cadastrar um novo aluno");
      // CONSULTAR ALUNO
      printf("\n2 - Consultar um novo aluno");
      // SAIR
      printf("\n3 - Sair");

      printf("\n\nInforme uma opcao: ");
      scanf("%i", &opcao);

      switch(opcao) {

         case 1:
            cadastrar(cabeca);
            break;

         case 2:
            consultar();
            break;

         case 3:
            printf("\nAte mais!!!\n");
            break;

         default:
            printf("\nOpcao invalida!!!");
      }
   }
   while(opcao != 3);
};


