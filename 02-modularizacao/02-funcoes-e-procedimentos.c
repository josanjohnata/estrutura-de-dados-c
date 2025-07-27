// Funções e procedimentos

// Funções são blocos de código que retornam um valor após sua execução, enquanto procedimentos, 
// representados por funções do tipo void, executam ações sem retornar valores. Compreender esses 
// conceitos é essencial para escrever programas modulares, eficientes e de fácil manutenção, 
// permitindo a reutilização de código e melhor organização do projeto. A separação clara entre 
// declaração e implementação de funções também será abordada, facilitando o desenvolvimento 
// colaborativo e a leitura do código.

// Funções

// As funções são procedimentos que retornam um único valor ao final de sua execução.

// No exemplo a seguir, apresentamos alguns casos, como as funções sqrt(), scanf() e printf(), que 
// calculam a raiz quadrada, leem um número da entrada padrão e imprimem um valor na saída padrão. 
// Veja:
// x = sqrt(4);
// if (scanf ("%d", &x) == EOF)
// printf("Fim de arquivo.\n");

// Declarando uma função

// Uma função em pseudolinguagem possui o seguinte formato:

// funcao < nome-de-função >
//   [( < sequência-declarações-de-parâmetros >)]: < tipo-de-dado >
//   var
//   // Seção de Declarações Internas
//   inicio
//   // Seção de Comandos
// fimfuncao											

#include <stdio.h>
// Função para calcular o valor do desconto
float calcularDesconto(float preco, float percentual) {
  return preco * (percentual / 100);
};

// Procedimento para exibir o valor total com desconto
void exibirTotal(float preco, float percentual) {
  float total = preco - percentual;
  printf("O valor final com desconto: %.2f\n", total);
};

int main() {
  float preco, percentualDesconto, desconto;
  // Solicita o preço e o percentual de desconto ao usuário
  printf("Digite o valor do produto: ");
  scanf("%f", &preco);
  printf("Digite o percentual de desconto: ");
  scanf("%f", &percentualDesconto);

  // Chama a função para calcular o desconto
  desconto = calcularDesconto(preco, percentualDesconto);

  // Chama o procedimento para exibir o total com desconto
  exibirTotal(preco, desconto);

  return 0;
};
