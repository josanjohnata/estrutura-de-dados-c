// Funções de manipulação de string

// As funções de manipulação de strings na linguagem C, disponíveis na biblioteca string.h, são 
// essenciais para operações comuns como copiar, comparar, concatenar e medir o comprimento de 
// strings. Funções como strlen, strcpy, strcmp, strcat, sprintf e sscanf facilitam o trabalho 
// com cadeias de caracteres, permitindo manipulações eficientes e seguras. Essas funções são 
// fundamentais para o desenvolvimento de programas que lidam com processamento de texto, entrada 
// e saída de dados, e formatação de informações, garantindo que as strings sejam tratadas de 
// forma adequada e eficaz.

// strlen
// Retorna o tamanho de uma string. Sintaxe: strlen(string); onde "string" é um tipo char *c.

// char nome[] = "Programação";
// int comprimento = strlen(nome);
// printf("O comprimento da string é: %d\n", comprimento);

// strcpy
// Copia uma string em outra. Sintaxe: strcpy(s,t); onde "s" e "t" são do tipo char *c.

// char origem[] = "Olá, mundo!";
// char destino[50];
// strcpy(destino, origem);
// printf("Conteúdo copiado: %s\n", destino);

// strcmp
// Compara duas strings. Sintaxe: strcmp(s,t); onde "s" e "t" são do tipo char *c.

// char string1[] = "Programação";
// char string2[] = "programação";
// if(strcmp(string1, string2) == 0) {
//   printf("As strings são iguais.\n");
// } else {
//   printf("As strings são diferentes.\n");
// }

// strcat
// Concatena duas strings. Sintaxe: strcat(s,t); onde "s" e "t" são do tipo char *c.

// char saudacao[50] = "Olá, ";
// char nome[] = "mundo!";
// strcat(saudacao, nome);
// prinf("%s\n", saudacao);

// sprintf
// Formata as strings. Sintaxe: sprintf();

// char buffer[100];
// int idade = 25;
// sprintf(buffer, "A idade do João é %d anos", idade)
// printf("%s\n", buffer);

// sscanf
// Extrai dados formatados da string. Sintaxe: sscanf();

// char buffer[] = "João tem 25 anos.";
// char nome[20];
// int idade;
// sscanf(buffer, "%s tem %d anos.", nome, &idade);
// printf("%s tem %d anos.", nome, idade);

#include <stdio.h>
#include <string.h>

int main() {
  // Declarando strings
  char nome1[50] = "Alana ";
  char nome2[] = "Silva";

  // Concatenando strings
  strcat(nome1, nome2);
  printf("Nome completo: %s\n", nome1);

  // Medindo o comprimento da string concatenada
  int comprimento = strlen(nome1);
  printf("Comprimento do nome completo: %d\n", comprimento);

  // Comparando strings
  if (strcmp(nome1, "Alana Silva") == 0) {
    printf("As strings são iguais.\n");
  } else {
    printf("As strings são diferentes.\n");
  }

  // Copiando uma string para outra
  char copia[50];
  strcpy(copia, nome1);
  printf("Copia do nome: %s\n", copia);

  return 0;
};
