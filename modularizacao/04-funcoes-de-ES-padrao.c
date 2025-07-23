// Funções de E/S padrão

// As funções de entrada e saída (E/S) padrão em C são fundamentais para a interação entre o 
// programa e o usuário, permitindo a leitura de dados do teclado e a exibição de informações 
// na tela. Utilizando a biblioteca stdio.h, funções como printf, scanf, putchar, puts, getchar 
// e gets desempenham papéis cruciais na formatação e manipulação de dados. Essas funções são 
// essenciais para qualquer programador, facilitando a implementação de operações de E/S de 
// maneira eficiente e controlada, tornando o desenvolvimento de aplicações mais intuitivo e 
// organizado.

// As funções de E/S padrão são responsáveis pelas operações de entrada e saída de dados. Quando 
// um programa na linguagem C é executado, o sistema operacional é responsável por abrir três 
// arquivos:

// stdin
// Arquivo de entrada padrão.

// stdout
// Arquivo de saída padrão.

// stderr
// Erro padrão.

// Invocando funções de E/S padrão

// printf

// A sua função é ser responsável pela impressão formatada dos dados. Ela imprime os dados no dispositivo 
// de saída padrão, tela do computador. Os mesmos são formatados de acordo com os códigos de formatação, 
// conforme a tabela a seguir:
// +------------+----------------------------------------+------------------+
// | Caractere  | Impresso Como                          | Tipo de Argumento|
// +------------+----------------------------------------+------------------+
// | d, i       | Decimal number                         | int              |
// | o          | Unsigned octal number (no leading 0)   | int              |
// | x, X       | Unsigned hex number (no leading 0x/0X) | int              |
// | U          | Unsigned decimal number                | int              |
// | C          | Single caractere                       | int              |
// | S          | String chars until '\0' or precision   | char             |
// | F          | [-] m.dddddd (precision default 6)     | double           |
// | e, g       | [-] m.dddddde+/-xx                     | double           |
// | g, G       | Use %e/%E or %f based on exponent      | double           |
// | P          | Pointer                                | void *           |
// | %          | Print % (no argument)                  | -                |
// +------------+----------------------------------------+-------------------+

#include <stdio.h>

int main() {
  // Declara uma variável para armazenar o número
  int numero;

  // Pede ao usuário para digitar um número
  printf("Digite um número inteiro: ");

  // Lê o número digitado pelo usuário
  scanf("%d", &numero);

  // Exibe o número digitado
  printf("Você digitou: %d\n", numero);

  return 0;
};
