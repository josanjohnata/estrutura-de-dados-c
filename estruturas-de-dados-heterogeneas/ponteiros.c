// Ponteiros e memória

// Ponteiros são variáveis que armazenam endereços de memória, permitindo um acesso mais eficiente e 
// flexível aos dados. Em C, a memória do programa é organizada em segmentos como Text, Data, Stack e 
// Heap, cada um com funções específicas. A alocação de memória pode ser estática, automática ou 
// dinâmica, sendo essencial para a gestão eficiente de recursos. A utilização de ponteiros, structs e 
// arrays de structs possibilita a manipulação de estruturas de dados heterogêneas.

// A organização da MEMÓRIA é fundamental para o bom desempenho do software, pois cada tipo de dado precisa 
// ser armazenado e acessado de forma otimizada.

// Tipos de memórias
// - RAM: Random Access Memory
// - HD ou SSD: Hard Disk ou Solid State Drive
// - Cache
// - Memória Virtual
// - ROM: Read-Only Memory

// Regiões manipuláveis da memória em liguagem C
// - Stack (pilha) - onde é armazenado as variáveis lacoais e os parâmetros das funções
// - Heap (Área de Alocação Dinâmica) - Area de armazenamento enquanto o programa está em execução
// - Data Segment (Segmento de Dados) - onde as variáveis Globais e Estaticas são armazenadas
// - Code Segment (Segmento de Código) - as estruções que o programa deve executar

// Ponteiro
// - O ponteiro é uma variável que armazena o endereço de outra variável
// Ex.:
#include <stdio.h>

int main() {
  int numero = 10; // Variável normal
  int *ponteiro; // Declaração do ponteiro
  // O ponteiro armazena o endereço da variável 'numero''
  ponteiro = &numero;
  printf("Valor de numero: %d\n", numero);
  printf("Endereço de numero: %p\n", ponteiro);
  printf("Valor apontado por numero: %d\n", *ponteiro);
  return 0;
}

// Utilidades do ponteiro
// - Acessar e Manipular Memória Dinamicamente
// - Passagem de Parâmetros por Referência
// - Otimização de Performance

// O endereço de memória de um processo em execução é dividido em vários segmentos lógicos. Destacamos 
// alguns dos mais importantes a seguir.
// - Text: Contém o código do programa e suas constantes. Esse segmento é alocado durante a criação do 
//   processo (''exec'') e permanece do mesmo tamanho durante toda a vida do processo.
// - Data: É a memória de trabalho do processo, na qual ficam alocadas as variáveis globais e estáticas. 
//   Tem tamanho fixo ao longo da execução do processo.
// - Stack: Contém a pilha de execução, na qual são armazenados os parâmetros, os endereços de retorno e 
//   as variáveis locais de funções. Pode variar de tamanho durante a execução do processo.
// - Heap: Contém blocos de memória alocadas dinamicamente, a pedido do processo, durante sua execução. 
//   Varia de tamanho durante a vida do processo.