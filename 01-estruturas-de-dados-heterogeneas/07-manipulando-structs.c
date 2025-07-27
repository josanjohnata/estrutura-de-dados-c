// Manipulando structs

// Para acessar e manipular os membros de uma struct em C, utiliza-se o operador de ponto (.) e o 
// operador de seta (->). O operador de ponto é usado para acessar diretamente os membros da estrutura, 
// enquanto o operador de seta é usado quando se trabalha com ponteiros para estruturas. Atribuições, 
// impressões e leitura de valores dos campos podem ser realizadas diretamente ou por meio de funções. 
// Essas operações são essenciais para a manipulação eficiente de dados estruturados em programas C, 
// permitindo a organização e gestão de informações complexas.

// Struct
// Uma strct, em essência, é uma forma de agrupar variáveis de tipos diferentes sob um único nome.
#include <stdio.h>
#include <string.h>

struct Paciente {
  char nome[50];
  int idade;
  char telefone[15];
};
// Acesso direto e indireto
int main() {
  struct Paciente paciente1;
  // Atribuindo valores
  strcpy(paciente1.nome, "Maria Oliveira");
  paciente1.idade = 30;
  strcpy(paciente1.telefone, "12345-6789");
  // Acessando e imprimindo os valores
  printf("Nome: %s\n", paciente1.nome);
  printf("Idade: %d\n", paciente1.idade);
  printf("Telefone: %s\n", paciente1.telefone);

  return 0;
};

struct Paciente paciente1;
struct Paciente *pPaciente = &paciente1;

strcpy(pPaciente -> nome, "Carlos Silva");
pPaciente -> idade = 45;
strcpy(pPaciente -> telefone, "98765-4321");
//-----------------------------

// Alocação Dinâmica e Structs
struct Paciente *pPaciente = (struct Paciente *) malloc(sizeof(struct Paciente));

if(pPaciente != NULL) {
  strcpy(pPaciente->nome, "Ana Costa");
  pPaciente->idade = 28;
  strcpy(pPaciente->telefone, "54321-6789");

  printf("Nome: %s\n", paciente1->nome);
  printf("Idade: %d\n", paciente1->idade);
  printf("Telefone: %s\n", paciente1->telefone);

  free(pPaciente); // Liberando a memória alocada
};
// -----------------------------

// Copiar Structs
struct Paciente paciente1 = {"Joana", 26, "12345-6789"};
struct Paciente paciente2;

paciente2 = paciente1; // Cópia direta
printf("Nome do paciente 3: %s\n", paciente2.nome);

// Praticando
#include <stdio.h>
#include <string.h>

struct Paciente {
  char nome[50];
  int idade;
  char telefone[15];
};
// Acesso direto e indireto
int main() {
  struct Paciente pacientes[3];
  int i;
  // Preenchendo os dados dos pacientes
  strcpy(pacientes[0].nome, "Luciana");
  pacientes[0].idade = 30;
  strcpy(pacientes[0].telefone, "12345-6789");

  strcpy(pacientes[1].nome, "Pedro");
  pacientes[1].idade = 31;
  strcpy(pacientes[1].telefone, "65445-6789");

  strcpy(pacientes[2].nome, "John");
  pacientes[2].idade = 32;
  strcpy(pacientes[2].telefone, "87645-6789");
  // Exibindo os dados dos pacientes
  for (i = 0; i < 3; i++) {
    printf("Paciente %d: \n", i + 1);
    printf("Nome: %s\n", pacientes[i].nome);
    printf("Idade: %d\n", pacientes[i].idade);
    printf("Telefone: %s\n", pacientes[i].telefone);
  };

  return 0;
};

// Usando a mesma declaração do Struct com outra abordagem
void exibirPaciente(struct Paciente p) {
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Telefone: %s\n\n", p.telefone);
};
int main() {
  struct Paciente paciente1 = {"Fernando", 22, "77777-8888"};
  exibirPaciente(paciente1);

  return 0;
};
