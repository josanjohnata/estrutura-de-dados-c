// Funções de manipulação de tipos de dados

// As funções de manipulação de tipos de dados em C, encontradas na biblioteca ctype.h, são utilizadas 
// para verificar e transformar caracteres. Essas funções permitem determinar se um caractere é maiúsculo, 
// minúsculo, numérico, alfabético, um espaço, ou um caractere ASCII. Além disso, funções como tolower e 
// toupper são usadas para converter caracteres entre maiúsculas e minúsculas. Utilizar essas funções é 
// essencial para validar e processar entradas de usuários, garantindo que os dados sejam tratados de forma 
// correta e consistente.

// Para ter acesso a essas funções, deve-se fazer a seguinte declaração no início do programa:
// #include <ctype.h>

// isupper
// Verifica se o caractere é maiúsculo. Retorna diferente de zero se for maiúsculo e zero no caso contrário 
// (minúscula). Possui função análoga, mas de funcionamento inverso a esta: islower (c), que verifica se o 
// caractere é minúsculo. 
// Sintaxe: valor_log = isupper (caractere).

// isalpha
// Verifica se é caractere alfabético. Segue o mesmo princípio de isupper. Sintaxe: valor_log = isalpha (caractere);
// Funções análogas:
// - isdigit (c) − Verifica se é um dígito.
// - isspace (c) − Verifica se é caractere de espaço.
// - isascii (c) − Verifica se é caractere ASCII.
// - isprint (c) − Verifica se é caractere de impressão.

// tolower
// Converte de maiúscula para minúscula. Possui função análoga, mas de funcionamento inverso a esta: toupper (c).
// Sintaxe: caractere = tolower (caractere).

#include <stdio.h>
#include <ctype.h>

int main() {
  char texto[] = "Programacao123";
  int i = 0;

  // Percorrendo cada caractere da string
  while (texto[i]) {
    // Verificando se é ima letra
    if (isalpha(texto[i])) {
      printf("%c - uma letra.\n", texto[i]);

      // Transformando em maiúsculo se for minúscula
      if (islower(texto[i])) {
        texto[i] = toupper(texto[i]);
        printf("Convertido para maiusculo: %c\n", texto[i]);
      }
    }
    // Verificando se é um número
    else if (isdigit(texto[i])) {
      printf("%c - um numero.\n", texto[i]);
    }
    i++;
  }

  printf("Texto transformado: %s\n", texto);

  return 0;
};