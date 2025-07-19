// Alocação de Memória

// É um conceito fundamental na programação em C, importante para a gestão eficiente dos recursos. 
// Existem três formas principais de alocação: estática, automática e dinâmica.

// A alocação estática, usando o modificador static, mantém o valor das variáveis durante toda a 
// execução do programa. A alocação automática ocorre quando variáveis locais são criadas e liberadas 
// dentro do escopo de funções. A alocação dinâmica, por meio das funções malloc, free e realloc, 
// permite a criação e o gerenciamento flexível de memória durante a execução do programa – essencial 
// para o desenvolvimento de aplicações complexas e eficientes.

// Tipos de Alocação:
// - Automática
// - Estática
// - Dinâmica

// Alocação automática
#include <stdio.h>

void funcaoExemplo() {
  int numero = 10; // Variável automática
  printf("Valor de numero: %d\n", numero);
}

int main() {
  funcaoExemplo(); // Chamada da função
  return 0;
}

// Alocação estática
#include <stdio.h>

int valorGlobal = 20; // Variável estática
void exibirValor() {
  printf("Valor Global: %d\n", valorGlobal);
}

int main() {
  exibirValor(); // Chamada da função para exibir o valor global
  return 0;
}

// Alocação dinâmica
#include <stdio.h>
#include <stdlib.h>

int main() {
int *ponteiro;
ponteiro = (int*)malloc(sizeof(int));
if(ponteiro != NULL) {
  *ponteiro = 30;
  printf("Valor alocado dinamicamente: %d\n", *ponteiro);
  free(ponteiro); // Libera a memória
} else {
  printf("Erro na alocação de memória.\n");
}
  return 0;
}

// Função malloc - Memory Allocation
// É usada para alocar um bloco de memória contido em bytes
void* malloc(size_t size); // ela não inicializa os valores
// Onde size é o número de bytes que queremos alocar

// Função calloc - Contiguous Allocation
// Ela também é usada para alocar um bloco de memória contido em bytes, mas ela recebe dois argumentos,
// o número de elementos e o tamanho de cada elemento
void* calloc(size_t num_elements, size_t size_of_each_element); // ela inicializa todos os valores com 0, assim garantindo que todos os valores comecem com 0
// Onde num_elements é o número de elementos a serem alocados e size_of_each_element é o tamanho de bytes de cada elemento.

// Função free
// Ela a usada para liberar a memória que foi alocada dinâmicamente pela função malloc e calloc
void free(void* ptr); // Após o usa da memória sempre devemos liberar esse espaço com a função free para que esse espaço fique disponível e evite vazamento de memória
// Onde ptr é o ponteiro para o bloco de memória a ser liberado.

