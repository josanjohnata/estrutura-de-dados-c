// Elementos sintáticos e semânticos das funções

// Parâmetros são variáveis que recebem valores passados para sub-rotinas, enquanto argumentos são os 
// valores reais fornecidos. A passagem de parâmetros pode ser feita por valor, no qual uma cópia do 
// valor é passada, ou por referência, na qual o endereço de memória da variável é utilizado. Entender 
// essas técnicas é fundamental para manipular dados e modificar variáveis eficientemente dentro de 
// sub-rotinas.

// int somar(int a, int b) {
//   return a + b
// };

// Valor passado por parâmetro não altera o valor original
// int dobrar_valor(int num) {
//   num = num * 2;
// };

// Valor passado por referência altera o valor original
// int dobrar_valor_ref(int *num) {
//   *num = *num * 2;
// };

#include <stdio.h>

// Função que dobra o valor (passagem por valor)
void dobrar_valor(int num) {
  num = num * 2; // Aqui, apenas a cópia é modificada
  printf("Dentro da função (por valor), o valor dobrado é: %d\n", num);
};

// Função que dobra o valor (passagem por referência)
void dobrar_valor_ref(int *num) {
  *num = *num * 2; // Aqui, o valor original é modificado
  printf("Dentro da função (por valor), o valor dobrado é: %d\n", *num);
};

int main() {
  int numero = 10;

  // Passagem por valor
  printf("Antes da função (por valor), o número é: %d\n", numero);
  dobrar_valor(numero);
  printf("Depois da função (por valor), o número é: %d\n", numero);

  // Passagem por referência
  printf("Antes da função (por referência), o número é: %d\n", numero);
  dobrar_valor_ref(&numero);
  printf("Depois da função (por referência), o número é: %d\n", numero);

  return 0;
};
