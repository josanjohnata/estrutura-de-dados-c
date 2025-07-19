// Variáveis do tipo ponteiro
// Os ponteiros são variáveis especiais em C que armazenam endereços de memória, permitindo acesso 
// indireto a outras variáveis. Cada variável tem um nome, tipo, valor e endereço. Ponteiros 
// possibilitam operações como leitura e alteração de valores sem utilizar diretamente o nome da variável.


// Declarações de ponteiros utilizam o símbolo * e os operadores unários &; e * são usados para obter 
// endereços e acessar valores. Já a capacidade de manipular endereços permite a criação de ponteiros 
// para ponteiros, facilitando a manipulação complexa de dados. Esses ponteiros são essenciais para a 
// alocação dinâmica de memória, a manipulação de arrays e a estruturação de dados, como listas, pilhas 
// e árvores.

// Função malloc
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ponteiro;
  ponteiro = (int*) malloc(5 * sizeof(int)); // Aloca memória para 5 inteiros

  if (ponteiro != NULL) { // Verifica se a alocação foi bem-sucedida
    int i;
    for (i = 0; i < 5; i++) {
      ponteiro[i] = i + 1; // Iniciando os valores manualmente
    }

    for (i = 0; i < 5; i++) {
      printf("%d ", ponteiro[i]); // Imprime 1 2 3 4 5
    }

    free(ponteiro); // Libera a memória
  } else {
    printf("Erro na alocação de memória. \n");
  }

  return 0;
}

// Função calloc
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ponteiro;
  ponteiro = (int*) calloc(5, sizeof(int)); // Aloca memória para 5 inteiros, inicializados em espaços de memória zerados

  if (ponteiro != NULL) { // Verifica se a alocação foi bem-sucedida
    int i;

    for (i = 0; i < 5; i++) { // Exibe os valores iniciais (todos devem ser zero)
      printf("%d ", ponteiro[i]); // Impprime -> 0 0 0 0 0
    }

    free(ponteiro); // Libera a memória
  } else {
    printf("Erro na alocação de memória. \n");
  }

  return 0;
}

// Usando todos os conceitos
#include <stdio.h>
#include <stdlib.h>

int main() {
  // Definição de variáveis do tipo ponteiro
  int numero = 10;
  int *ponteiroInt = &numero; // Ponteiro para um inteiro

  // Exibindo o valor e o endereço da variável 'numero' usando ponteiros
  printf("Valor de numero: %d\n", numero);
  printf("Endereço de numero: %p\n", ponteiroInt);
  printf("Valor apontado por ponteiroInt: %d\n", *ponteiroInt);

  // Alterando o valor da variável 'numero' atraves do ponteiro
  *ponteiroInt = 20;
  printf("Novo valor de numero após modificação pelo ponteiro: %d\n", numero);

  // Características específicas dos ponteiros
  // Alocação dinâmica de memória com malloc
  int *ponteiroDinamico;
  ponteiroDinamico = (int*) malloc(sizeof(int)); // Aloca memória para um inteiro

  if (ponteiroDinamico == NULL) {
    printf("Erro ao alocar memoria!\n");
    return 1; // Sai do programa se a alocação falhar
  }

  // Inicializando o valor alocado dinamicamente e exibindo
  *ponteiroDinamico = 50;
  printf("Valor armazenado na memoria alocada dinamicamente: %d\n", *ponteiroDinamico);

  // Uso correto dos ponteiros na programação
  // Exemplo de uso seguro de ponteiro com verificação e liberação de memória
  free(ponteiroDinamico); // Libera a memória alocada
  ponteiroDinamico = NULL; // Evita acessos acidentais, tornando o ponteiro inválido

  // Testando o ponteiro após liberar a memória
  if (ponteiroDinamico == NULL) {
    printf("Memoria foi liberada corretamente e o ponteiro está invalido.\n");
  }

  return 0;
}
