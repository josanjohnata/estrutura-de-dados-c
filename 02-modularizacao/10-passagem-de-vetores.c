// Passagem de vetores

// A passagem de vetores para funções em C é sempre realizada por referência, permitindo que as funções 
// modifiquem diretamente os elementos do vetor original. A sintaxe para passar um vetor a uma função 
// utiliza um ponteiro, indicando o endereço inicial do vetor. Isso possibilita a manipulação eficiente 
// de grandes conjuntos de dados sem a necessidade de copiar todos os elementos. Vamos explorar como 
// declarar, inicializar e manipular vetores dentro de funções, destacando a importância de entender a 
// passagem de vetores por referência para criar programas eficientes e bem estruturados.

// #include <stdio.h>

// void v_iniciacao(int *vet, int n) {
//     int i;
//     for (i=0; i < n; i++)
//     vet[i] = 0;
// }

// void v_imprime(int *vet, int n){
//     int i;
//     for(i = 0; i < n; i++)
//       printf(" %d - ",vet[i]);
//     printf("\n");
// }

// int main(void) {
//     int vet[10], i;
//     v_iniciacao(vet, 10);
//     // Impressao apos inicializacao.
//     printf("Impressao do vetor antes da atribuicao.");
//     v_imprime(vet,10);
//     // Mudando valores de vet.
//     for(i = 0; i < 10; i++){
//     vet[i]=i;
//     }
//     // Impressao apos atribuicao.
//     printf("Impressao do vetor apos a atribuicao.");
//     v_imprime(vet, 10);
//     return(0);
// }

#include <stdio.h>

// Função que calcula a soma dos elementos de um vetor
int calcular_soma(int vetor[], int tamanho) {
  int soma = 0;
  int i;
  for (i = 0; i < tamanho; i++) {
    soma += vetor[i]; // Adiciona o valor so elemento ao total
  }
  return soma;
}

int main(void) {
  // Definindo um vetor de inteiros
  int lista_compras[] = {10, 20, 30, 40, 50};
  int tamanho = sizeof(lista_compras) / sizeof(lista_compras[0]); // Calcula o tamanho do vetor

  // Chamando a função para calcular a soma do vetor
  int total = calcular_soma(lista_compras, tamanho);

  // Exibindo o resultado
  printf("O tatal da lista de compras: %d\n", total);

  return(0);
}
