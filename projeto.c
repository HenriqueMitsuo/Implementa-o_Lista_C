#include <stdio.h>
#include <stdlib.h>
/// INCLUDE DO HEADER COM AS ASSINATURAS E DECLARAÇÕES
#include "projeto.h"

A* cadastrarInicio(A* ponteiro) {

   A *aluno;
   A *auxiliar;
   ///     (<TIPO DO STRUCT>)malloc(sizeof(<TAMANHO QUE DEVE SER ALOCADO>))
   aluno = (A*)malloc(sizeof(A)); /// ALOCA ESPAÇO DE MEMORIA PARA EFETUAR CADASTRO DE UM STRUCT

   printf("\nDigite o ra: ");
   scanf("%i", &aluno->ra);

   printf("\nDigite o nome: ");
   scanf("%s", aluno->nome);

   printf("\nDigite a idade: ");
   scanf("%i", &aluno->idade);

   printf("\nDigite o celular: ");
   scanf("%i", &aluno->celular);

   printf("\nDigite a nota N1: ");
   scanf("%f", &aluno->n1);

   printf("\nDigite a nota N2: ");
   scanf("%f", &aluno->n2);

   printf("\nDigite a nota de trabalho: ");
   scanf("%f", &aluno->trabalho);

   aluno->media = (aluno->n1 + aluno->n2 + aluno->trabalho) / 3.0;

   printf("\nA media e: %f\n", aluno->media);
   system("pause");

   if(aluno->media >= 6) {

      aluno->status = 'A';
   }
   else {

      aluno->status = 'R';
   }

   if(ponteiro == NULL) {

      printf("\nLista Vazia!");/// verifica se a lista está vazia

      printf("\n %p -- %p", &aluno, &ponteiro);

      ponteiro = aluno;

      aluno->proximo = NULL;

      printf("\n %p -- %p -- %p -- %p", &aluno, &ponteiro, ponteiro->proximo, aluno->proximo);
   }
   else {

      auxiliar = ponteiro;

      ponteiro->proximo = aluno;

      aluno->proximo = auxiliar->proximo;
   }

   return ponteiro;
};

A* cadastrarMeio(A* ponteiro) {


};

A* cadastrarFim(A* ponteiro) {


};

A* cadastrar(A* ponteiro) {

   int opcao;

   //system("cls");

   printf("\n1 - Cadastrar no inicio");
   printf("\n2 - Cadastrar no meio");
   printf("\n3 - Cadastrar no fim");

   printf("\nEscolha uma opcao para cadastro: ");
   scanf("%i", &opcao);

   switch(opcao) {

      case 1:
         ponteiro = cadastrarInicio(ponteiro);
         break;

      case 2:
         cadastrarMeio(ponteiro);
         break;

      case 3:
         cadastrarFim(ponteiro);
         break;

      default:
         printf("\nOpcao invalida!!!");
   }

   return ponteiro;
};

void menu(A* ponteiro) {

   int opcao;

   do {
      // CADASTRAR ALUNO
      printf("\n1 - Cadastrar um novo aluno");
      // CONSULTAR ALUNO
      printf("\n2 - Consultar um novo aluno");
      // SAIR
      printf("\n3 - Sair");

      printf("\nInforme uma opcao: ");
      scanf("%i", &opcao);

      switch(opcao) {

         case 1:
            ponteiro = cadastrar(ponteiro);
            menu(ponteiro);
            break;

         case 2:
            //consultar();
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


