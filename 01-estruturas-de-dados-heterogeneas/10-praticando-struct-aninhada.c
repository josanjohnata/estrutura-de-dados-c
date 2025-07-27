// Praticando struct aninhada

// Struct aninhada em C permite a criação de estruturas de dados complexas e organizadas, facilitando 
// a manipulação de dados relacionados. Esta prática ilustra como structs aninhadas podem ser 
// implementadas e acessadas em diferentes contextos, proporcionando flexibilidade e clareza no 
// gerenciamento de dados.

#include <stdio.h>
#include <string.h> 

struct Disciplina {
  char nome[30];
  char professor[50];
  int cargaHoraria;
};

struct Aluno {
  char nome[50];
  int idade;
  int matricula;
  struct Disciplina disciplinas[3];
}; 

void cadastrarDisciplina(struct Disciplina *disciplina, const char *nome, const char *professor, int cargaHoraria) {
  strcpy(disciplina->nome, nome);
  strcpy(disciplina->professor, professor);
  disciplina->cargaHoraria = cargaHoraria;
}

void cadastrarDisciplina(struct Disciplina *disciplina, const char *nome, const char *professor, int cargaHoraria) {
  strcpy(disciplina->nome, nome);
  strcpy(disciplina->professor, professor);
  disciplina->cargaHoraria = cargaHoraria;
}

void exibirAluno(struct Aluno *aluno) {
  int i;

  printf("Nome do Aluno: %s\n", aluno->nome);
  printf("Idade: %d\n", aluno->idade);
  printf("Matricula: %d\n", aluno->matricula);

  printf("Disciplinas:\n");
  for (i = 0; i < 3; i++) {
    printf("  Disciplina %d:\n", i + 1);
    printf("    Nome: %s\n", aluno->disciplinas[i].nome);
    printf("    Professor: %s\n", aluno->disciplinas[i].professor);
    printf("    Carga Horaria: %d horas\n", aluno->disciplinas[i].cargaHoraria);
  }
}

int main() {
  struct Aluno aluno1;
  cadastrarAluno(&aluno1, "Alana Lima", 20, 1234);
  exibirAluno(&aluno1);
  return 0;
}
