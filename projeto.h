/// CRIANDO UM TIPO DE DADO STRUCT
typedef struct aluno {

   char nome[20];
   char status[20];
   int celular;
   int idade;
   int ra;
   float n1;
   float n2;
   float trabalho;
   /// PONTEIRO PARA CONTROLE DA LISTA ENCADEADA
   struct aluno *proximo;
}A;/// APELIDO/ALIAS DA ESTRUTURA aluno

/// ASSINATURAS
A* cadastrarInicio(A* ponteiro);
A* cadastrarMeio(A* ponteiro);
A* cadastrarFim(A* ponteiro);
A* cadastrar(A* ponteiro);

void menu();
