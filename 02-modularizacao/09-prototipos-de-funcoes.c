// Protótipos de funções

// Os protótipos de sub-rotinas são declarações essenciais em C que permitem a implementação de funções 
// e procedimentos em diferentes partes do arquivo-fonte. Ao definir protótipos ou assinaturas de 
// sub-rotinas no início do programa, você garante que o compilador reconheça suas referências antes mesmo 
// de suas definições completas. Isso facilita a organização do código e permite chamadas a sub-rotinas 
// antes de suas implementações. Exploraremos a importância dos protótipos de sub-rotinas, sua sintaxe e 
// como usá-los para criar programas mais estruturados e eficientes.

#include <stdio.h>

// Protótipo das funções
float calcular_area_circulo(float raio);
int calcular_area_retangulo(int largura, int altura);

int main() {
  float raio = 5.0;
  int largura = 5;
  int altura = 6;

  // Chamando os funções antes de suas definições completas
  printf("Area do circulo: %.2f\n", calcular_area_circulo(raio));
  printf("Area do retangulo %d\n", calcular_area_retangulo(largura, altura));

  return 0;
};

// Definição da função para calcular a área de um círculo
float calcular_area_circulo(float raio) {
  return 3.14159 * raio * raio; // Formula da área de um círculo
};

// Definição da função para calcular a área de um retângulo
int calcular_area_retangulo(int largura, int altura) {
  return largura * altura; // Formula da área de um retângulo
};
