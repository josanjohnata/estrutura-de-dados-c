// Usando escopo na prática

// O escopo das variáveis na linguagem C define onde e como as variáveis podem ser acessadas dentro de 
// um programa. Existem três tipos principais de escopo: variáveis locais, variáveis globais e parâmetros 
// formais. Variáveis locais são declaradas dentro de sub-rotinas e só podem ser usadas dentro dessas 
// sub-rotinas, existindo apenas durante a execução delas. Variáveis globais são declaradas fora de qualquer 
// sub-rotina e podem ser acessadas por qualquer parte do programa, mantendo seu valor ao longo de toda a 
// execução do programa. 

// Parâmetros formais são variáveis locais que são declaradas na lista de parâmetros de uma sub-rotina e são 
// usadas para receber valores quando a sub-rotina é chamada. A compreensão do escopo das variáveis é essencial 
// para evitar conflitos de nomes e garantir que os dados sejam manipulados corretamente em diferentes partes do 
// programa. O uso adequado do escopo das variáveis ajuda a criar programas mais organizados, eficientes e fáceis 
// de manter.

#include <stdio.h>

int totalEstoque = 100; // Variável global para o total de intens no estoque
// Função para adicionar itens ao estoque
void adicionarEstoque(int quantidade) { // Parâmetro formal
  totalEstoque += quantidade; // Atualiza a variável global
  printf("Itens adicionados: %d\n", quantidade);
  printf("Estoque atualizado: %d\n", totalEstoque);
};
// Função para remover itens do estoque
void removerEstoque(int quantidade) { // parâmetro formal
  if(quantidade <= totalEstoque) {
    totalEstoque -= quantidade;
    printf("Itens removidos: %d\n", quantidade);
    printf("Estoque atualizado: %d\n", totalEstoque);
  } else {
    printf("Erro: Quantidade insuficiente no estoque!\n");
  }
};
// Função principal
int main() {
  int quantidade; // Variável local para armazenar a quantidade de itens a ser processada
  // Adicionar itens ao estoque
  quantidade = 20; // 'quantidade' é um argumento passado para a função
  adicionarEstoque(quantidade);
  // Remover itens do estoque
  quantidade = 15; // 'quantidade' é um argumento passado para a função
  removerEstoque(quantidade);
  // Tentar remover uma quantidade maior do que o estoque
  quantidade = 200; // 'quantidade' é um argumento passado para a função
  removerEstoque(quantidade);

  return 0;
};