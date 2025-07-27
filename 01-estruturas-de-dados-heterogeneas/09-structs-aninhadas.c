// Structs aninhadas
// Uma estrutura de dados aninhada em C é uma estrutura que contém outras estruturas dentro de si, 
// permitindo a organização de dados complexos de forma hierárquica. Esse tipo de estrutura pode 
// ser declarada de duas maneiras: colocando uma estrutura dentro de outra ou referenciando uma 
// estrutura previamente definida dentro de outra estrutura. As structs aninhadas facilitam o 
// gerenciamento de dados relacionados, como departamentos e cargos dentro de uma estrutura de 
// funcionários, permitindo um acesso organizado e eficiente a cada nível de dados.

// Definição

// Uma estrutura de dados aninhada ou struct aninhada é basicamente uma estrutura dentro de outra, 
// ou seja, uma estrutura contida em outra ou uma estrutura que pode ser acessada por outra.

// A struct aninhada é um aninhamento de estruturas que nos permite criar estruturas que contenham 
// outras estruturas internas.

// O padrão ANSI C especifica que as estruturas de dados (struct) podem ser aninhadas até 15 níveis, 
// mas a maioria dos compiladores permite mais.

// A primeira forma é colocar uma estrutura dentro de outra, literalmente. Portanto, a sintaxe para 
// trabalhar com estruturas aninhadas nessa forma é:
typedef struct {
	tipo membro_1;
	tipo membro_2;
	tipo membro_n;
	struct{
		tipo membro_interno_1;
		tipo membro_interno _2;
		tipo membro_interno _n;
	}
} Nome_estrutura;
Nome_estrutura NE;

// E para acessar os membros, o acesso é direto e a sintaxe é:
// Para atribuir valores:
NE.membro_interno_1 = 0;
NE.membro_1 = 0;
 
// Para leitura do teclado:
&NE.membro_interno_1
&NE.membro_1

// Para impressão:
NE.membro_interno 1
NE.membro_1

// A outra forma é você declarar a estrutura_1 antes e, na estrutura_2, declarar uma variável da estrutura 
// 1. Dessa forma, a sintaxe é a seguinte:
typedef struct {
	tipo membro_1;
	tipo membro_2;
	...
	tipo membro_n;
} nome_estrutura_1;
	
typedef struct {
	tipo membro_1;
	tipo membro_2;
	nome_estrutura_1 NE1;
	...
	tipo membro_n;
} nome_estrutura_2;
	
nome_estrutura_2 NE2;

// E para acessar os membros, a sintaxe é:
// para acessar os membros
NE2.membro1;
NE2.membro2;
NE2.NE1.membro1;
NE2.NE1.membro2;

// Para entendermos melhor as duas formas de declaração de estrutura aninhadas, vamos analisar o Exemplo 7 a seguir.
#include < stdio.h >
#include < stdlib.h >

struct departamento {
  int cod;
  char descricao[30];
};

struct cargo {
  int cod;
  char descricao[30];
};

struct funcionario {
  int cod;
  char nome[30];
  float salario;
  struct departamento depto;
  struct cargo cargo;
};

struct funcionario Funcionario;

int main(void)
{

}

// Outra forma de declarar uma estrutura é colocar uma estrutura dentro da outra, literalmente, 
// como apresentado no Exemplo 8 a seguir.

#include < stdio.h >
#include < stdlib.h >

struct cargo {
  int cod;
  char descricao[30];
};

struct funcionario {
int cod;
  char nome[30];
float salario;
  struct departamento {
  int cod;
    char descricao[30];
};

  struct cargo cargo;
};

struct funcionario Funcionario;

int main(void)
{

}

// Sendo assim, vamos analisar, a seguir, o Exemplo 8 adaptado para o uso de typedef.
#include < stdio.h >
#include < stdlib.h >

typedef struct departamento {
  int cod;
  char descricao[30];
} Departamento;

typedef struct cargo {
  int cod;
  char descricao[30];
} Cargo;

typedef struct funcionario {
  int cod;
  char nome[30];
  float salario;
  Departamento depto;
  Cargo cargo;
} Funcionario;
printf( "\n TEXTO %_" , nome_vetor_struct[indice].nome_membro_struct);

int main(void)
{

}
