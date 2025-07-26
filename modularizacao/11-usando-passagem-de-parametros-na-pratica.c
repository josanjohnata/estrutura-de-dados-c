// Usando passagem de parâmetros na prática

// Na linguagem C, a passagem de parâmetros em sub-rotinas, como funções e procedimentos, é um conceito 
// fundamental que afeta diretamente a forma como os dados são manipulados e compartilhados dentro de 
// um programa. Existem duas principais formas de passagem de parâmetros: por valor e por referência. 

// Na passagem por valor, uma cópia do valor do argumento é passada para a sub-rotina, o que significa 
// que alterações feitas no parâmetro dentro da sub-rotina não afetam a variável original. Por outro 
// lado, na passagem por referência, o endereço da variável é passado para a sub-rotina, permitindo que 
// alterações feitas no parâmetro afetem diretamente a variável original. 

// Essa técnica é especialmente útil para manipular grandes estruturas de dados, como vetores e estruturas 
// complexas, sem a sobrecarga de copiar os dados inteiros. Entender quando e como usar cada tipo de 
// passagem de parâmetro é essencial para escrever programas eficientes e bem-organizados em C.

// int calcular_bebidas(int numero_de_pessoas) {
//   int litros = numero_de_pessoas * 2;
//   // Supondo que cada pessoa consome 2l
//   return litros;
// }

#include <stdio.h>

// Função que dobra o valor (passagem por valor)
void dobrar_valor(int num) {
  num = num * 2; // Modifica apenas a cópia do valor
  printf("Dentro da função (por valor), o valor dobrado: %d\n", num);
};

// Função que dobra o valor (passagem por referência)
void dobrar_valor_ref(int *num) {
  *num = *num * 2; // Modifica o valor original usando o ponteiro
  printf("Dentro da função (por valor), o valor dobrado: %d\n", *num);
};

int main() {
  int numero = 10;

  // Passagem por valor
  printf("Antes da função (por valor), o número: %d\n", numero);
  dobrar_valor(numero);
  printf("Depois da função (por valor), o número: %d\n", numero);

  // Passagem por referência
  printf("Antes da função (por referência), o número: %d\n", numero);
  dobrar_valor_ref(&numero); // Passamos o endereço da variável
  printf("Depois da função (por referência), o número: %d\n", numero);

  return 0;
};
