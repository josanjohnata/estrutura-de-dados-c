// Array de structs em C
// São estruturas de dados que permitem armazenar e organizar uma sequência de objetos do mesmo tipo, 
// em que cada objeto é uma estrutura que pode conter múltiplos campos de diferentes tipos. Esses 
// arrays são particularmente úteis para criar listas de registros, como dados de alunos, em que cada 
// posição do array pode armazenar informações como nome, disciplina e nota.


// Através de operações de inicialização, inserção, impressão e busca, é possível gerenciar 
// eficientemente grandes conjuntos de dados estruturados, facilitando a implementação de programas 
// que requerem manipulação de registros complexos.

// A declaração da estrutura ficará da seguinte forma:
typedef struct {
  char nome[200];
  char disciplina[100];
  float nota;
} Aluno;

Aluno aluno_nota[10];

// Inicializando o array de struct
// Para inicializar um array de struct, devemos atribuir aos seus membros os valores padrão (default) de 
// cada tipo de dado. O código a seguir mostra como isso é feito.
for(i=0; i< 10; i++) {
	strcpy(aluno_nota [i].nome, " NULL");
	strcpy(aluno_nota [i].disciplina = ‘ ‘);
	aluno_nota [i].nota = 0.0;
}

// Populando o array de struct
// Após a inicialização do array de struct, podemos inserir informações, dados. Sendo assim, é necessário um 
// laço for para armazenar cada estrutura em uma posição.

// O código a seguir ilustra como armazenar as informações do nosso funcionário. Dentro do for, colocamos os 
// comandos de leitura e escrita, necessários para pedir ao usuário o que ele deve digitar e, depois, armazenar 
// o que foi digitado. Note que, para armazenar os dados que são inseridos a partir do teclado, precisamos 
// utilizar a seguinte sintaxe:
&nome_vetor_struct[indice].nome_membro_struct;
	
For (i=0; i< 10; i++) {
  printf(" Digite nome do aluno: ");
  scanf("%s%*c", & aluno_nota [i].nome);
  printf(" Digite a disciplina do aluno: ");
  scanf("%s%*c", & aluno_nota [i].disciplina);
  printf(" Digite o nota do aluno: ");
  scanf("%f%*c", & aluno_nota [i].nota);
}

// Imprimindo o array de struct
// No caso da impressão dos valores do array de struct, será necessário o uso do laço for para percorrer todas as
// posições desse array. A cada passagem no for, será impresso o conteúdo de uma posição do vetor na tela. A sintaxe 
// que você deve usar aqui é a seguinte:

// ```printf( "\n TEXTO %_" , nome_vetor_struct[indice].nome_membro_struct);```

// É necessária a inclusão do tipo de dado que deverá ser impresso, isto é, substitua %_ pelo correspondente (exemplo: %d para inteiro).
for(i=0; i< 10; i++) {
	printf(" \n O nome do aluno é: %d ", aluno_nota [i].nome);
	printf(" \n A disciplina do aluno é: %d ", aluno_nota [i].disciplina);
	printf(" \n A nota do aluno é: %.2f ", aluno_nota [i].nota);
}

// Buscando um elemento no array de struct
// A pesquisa no array de struct pode procurar por um valor no vetor de estruturas. Por exemplo, você pode fazer uma 
// pesquisa pelo nome, pela disciplina e pela nota, sendo assim, é possível fazer uma pesquisa por todos os membros 
// da struct. Entretanto, é necessário tomar cuidado quando for buscar por uma string.

// Vamos analisar o código de uma busca por uma string, nesse caso, vamos procurar pelo membro nome.
printf(" \n Digite um nome: ");
scanf("%s%*c", nome);
 
for(i=0; i< 10; i++) {
  if(strcmp(nome, aluno_nota [i].nome)== 0) {
    printf("\n Registro encontrado! ");
    posicao = i;
  } else {
    posicao = -1;
  }
}
 
if(posicao = -1) {
  printf(" \n Registro não encontrado! ");
} else {
  printf(" \n Registro Encontrado: ");
  printf(" \n O nome do aluno é: %s ", aluno_nota [posicao].nome);
  printf(" \n A disciplina do aluno é: %s ", aluno_nota [posicao].disciplina);
  printf(" \n A nota do aluno é: %.2f ", aluno_nota [posicao].nota);
}	
