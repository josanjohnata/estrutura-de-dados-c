// Declaração e definição de structs

// Na linguagem C, as structs são usadas para definir estruturas de dados heterogêneas, permitindo 
// a combinação de variáveis de tipos diferentes sob um único nome. Elas são especialmente úteis 
// para criar registros que armazenam informações diversas, como dados de um livro ou endereço. A 
// definição de uma struct envolve a declaração de seus membros, que podem ser de qualquer tipo 
// básico ou agregado.

// As structs podem ser manipuladas de várias formas, incluindo inicialização, atribuição e acesso 
// aos membros, tornando-as uma ferramenta poderosa para a organização e o gerenciamento de dados 
// complexos em programas C.

// Definição de struct em C

// Na linguagem C, existem dois tipos de dados: os tipos básicos (int, char, float, double, void) e os 
// tipos compostos homogêneos (arrays). No entanto, nem sempre esses tipos são suficientes para o programa 
// e, por isso, a linguagem C nos permite a criação de outras estruturas de dados, a partir dos tipos 
// básicos, como os registros.

// struct Pessoa {
//   char nome[50];
//   int idade;
//   char telefone[15];
// };

// Inicialização direta
// struct Pessoa pessoa1 = {"Maria",28,"12345-6789"};
// Ou separadamente
// struct Pessoa pessoa2;
// strcpy(pessoa2.nome, "João");
// pessoa2.idade = 32;
// strcpy(pessoa2.telefone, "98765-4321");

// -------------------
#include <stdio.h>
#include <string.h>

struct Pessoa {
  char nome[50];
  int idade;
  char telefone[15];
};

int main() {
  struct Pessoa lista[3];
  int i;

  // Preenchendo as informações para cada pessoa
  strcpy(lista[0].nome, "Alana");
  lista[0].idade = 18;
  strcpy(lista[0].telefone, "12345-6789");

  strcpy(lista[1].nome, "Lucas");
  lista[1].idade = 14;
  strcpy(lista[1].telefone, "98765-4321");

  strcpy(lista[2].nome, "Julia");
  lista[2].idade = 8;
  strcpy(lista[2].telefone, "54329-5678");

  // Imprimindo as informações
  for (i = 0; i < 3; i++) {
    printf("Nome: %s\n", lista[i].nome);
    printf("Idade: %s\n", lista[i].idade);
    printf("Telefone: %s\n\n", lista[i].telefone);
  }

  return 0;
};
