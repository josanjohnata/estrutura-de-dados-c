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