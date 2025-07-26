// Variáveis locais e globais

// O escopo das variáveis em C define onde e como as variáveis podem ser acessadas dentro de um programa. 
// As variáveis podem ser classificadas como locais, globais ou parâmetros formais. Variáveis locais são 
// declaradas dentro de sub-rotinas e só são acessíveis dentro dessas sub-rotinas. Variáveis globais são 
// declaradas fora de qualquer sub-rotina e podem ser acessadas por todo o programa. Parâmetros formais 
// são variáveis locais que são declaradas na lista de parâmetros de uma sub-rotina e recebem valores 
// quando a sub-rotina é chamada. Compreender o escopo das variáveis é crucial para escrever programas 
// claros e evitar conflitos de nomes e erros.

// Variáveis LOCAIS
// void minhaFuncao() {
//   int numeroLocal = 10; // Variável local
//   printf("%d\n", numeroLocal); // Acessível apenas aqui
// };

// Variáveis GLOBAIS
// int numeroGlobal = 20; // Variável global
// void funcao() {
//   printf("%d\n", numeroGlobal); // Acessível em qualquer função
// };

// void funcaoB() {
//   numeroGlobal += 10; // Modificando o valor global
//   printf("%d\n", numeroGlobal);
// };

// PARÂMETROS FORMAIS
// void calcularDesconto(float preco, float percentualDesconto) {
//   // 'preco' e 'percentualDesconto' são parâmetros formais
//   float valorDesconto = preco * (percentualDesconto / 100);
//   printf("Desconto aplicado: %.2f\n", valorDesconto);
// };

// ARGUMENTOS
// void cumprimentar(char* nome) { // 'nome' é o parâmetro formal
//   printf("Olá, %s! Seja bem-vindo à festa!\n", nome);
// };
// int main() {
//   cumprimentar("João"); // Aqui, "João" é o argumento
//   cumprimentar("Maria"); // Aqui, "Maria" é outro argumento
//   return 0;
// };

// Programa de controle de estoque
// - Variáveis Globais - saldo total do estoque
// - Variáveis Locais- cálculo de cada operação
// - Parâmetros formais - operações específicas
// - Argumentos - valores que queremos inserir
#include <stdio.h>

int saldoEstoque = 100; // Variável global
void adicionarEstoque(int quantidade) { // Parâmetro formal
  saldoEstoque += quantidade; // Atualiza a variável global
  printf("Novo saldo: %d\n", saldoEstoque);
};
int main() {
  int novaEntrada = 50; // Variável local
  adicionarEstoque(novaEntrada); // Argumento
  return 0;
};
