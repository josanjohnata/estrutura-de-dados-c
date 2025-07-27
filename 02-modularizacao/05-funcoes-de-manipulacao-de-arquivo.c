// Funções de manipulação de arquivo

// As funções de manipulação de arquivos em C são essenciais para trabalhar com arquivos de forma 
// eficiente, permitindo operações como leitura, escrita e atualização. Disponíveis na biblioteca 
// stdio.h, essas funções incluem fopen para abrir arquivos, fclose para fechá-los, fgetc e fputc 
// para leitura e escrita de caracteres, e fprintf e fscanf para operações formatadas. Compreender 
// essas funções e seu uso adequado é fundamental para qualquer programador que precise manipular 
// dados persistentes, garantindo a integridade e a acessibilidade das informações armazenadas em 
// arquivos.

// fopen():
// Abre um arquivo para leitura, escrita ou atualização.
// Modos de abertura de arquivo:
// "r": Abre o arquivo para leitura.
// "w": Abre o arquivo para escrita.
// "a": Abre o arquivo para adicionar conteúdo.
// "r+": Abre o arquivo para leitura e escrita.
// FILE *arquivo = fopen("dados.txt", "r");

// fprintf():
// Escreve dados em um arquivo (similar ao printf() para a tela).
// fprintf(arquivo, "Nome: %s\nIdade: %d\n", nome, idade);

// fscanf():
// Lê dados de um arquivo (similar ao scanf()).
// fscanf(arquivo, "%s %d\n", nome, &idade);

// fclose():
// Fecha um arquivo que foi aberto.
// fclose(arquivo);

#include <stdio.h>

int main() {
  FILE *arquivo; // Ponteiro para o arquivo
  char nome[50];
  int idade;

  // Abrindo o arquivo no modo "w" para escrita
  arquivo = fopen("dados.txt", "w");
  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo!\n");
    return 1;
  }

  // Coletando dados do usuário
  printf("Digite o nome: ");
  scanf("%s", nome);
  printf("Digite a idade: ");
  scanf("%d", &idade);

  // Gravando os dados no arquivo
  fprintf(arquivo, "Nome: %s\nIdade: %d\n", nome, idade);

  // Fechando o arquivo
  fclose(arquivo);

  // Reabrindo o arquivo no modo "r" para leitura
  arquivo = fopen("dados.txt", "r");
  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo!\n");
    return 1;
  }

  // Lendo os dados do arquivo
  fscanf(arquivo, "Nome: %s\nIdade: %d\n", nome, &idade);

  // Exibindo os dados lidos
  printf("Dados lidos do arquivo: \n");
  printf("Nome: %s\nIdade: %d\n", nome, idade);

  // Fechando o arquivo
  fclose(arquivo);

  return 0;
};
