// O que é escopo

// Em linguagens de programação, o escopo das variáveis define onde e como essas variáveis podem ser 
// acessadas. Na linguagem C, as variáveis podem ser classificadas em três tipos de escopo: variáveis 
// locais, variáveis globais e parâmetros formais. Variáveis globais são declaradas fora de sub-rotinas 
// e podem ser acessadas por qualquer parte do programa. Variáveis locais são declaradas dentro de 
// sub-rotinas e só podem ser usadas dentro dessas sub-rotinas. Parâmetros formais são declarados na 
// lista de parâmetros de uma sub-rotina e são utilizados exclusivamente dentro da sub-rotina onde são 
// definidos. Compreender esses conceitos é fundamental para gerenciar dados e funções de forma eficiente 
// em um programa.

// Variável GLOBAL
// #include <stdio.h>
// int numero = 15; // variável global
// int main(void) {
//   printf("Valor da variável: %d\n", numero);
//   return 0;
// }

// Variável LOCAL
// int quadrado(int x) {
//   int y; // variável local
//   y = x * x;
//   return y;
// }

// Variável PARÂMETROS
// #include <stdio.h>
// int soma(int a, int b) { // variável por parâmetros
//   return a + b;
// };
// int main(void) {
//   printf("%d", soma(2, 2));
//   return 0;
// }