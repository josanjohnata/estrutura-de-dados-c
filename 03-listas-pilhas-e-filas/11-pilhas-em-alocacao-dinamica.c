// Pilhas em alocação dinâmica
// No caso de pilhas em alocação encadeada, a situação é diferente. O desempilhamento em uma pilha 
// vazia ainda precisa ser prevenido, contudo, como o limite para empilhamento é a memória disponível, 
// não há necessidade de se verificar a tentativa de empilhamento em uma pilha cheia.

// Nesse caso, basta identificar-se quando não for possível uma nova alocação de memória para um novo 
// elemento da pilha.

// As operações são muito simples, por se tratar de um caso particular. Apesar de podermos usar listas 
// duplamente encadeadas, a pilha é eficientemente implementada por listas simplesmente encadeadas, não 
// se justificando o uso extra de memória. Também não utilizaremos o nó cabeça – nó especial, criado 
// para facilitar as operações em lista – por ser desnecessário.

// Para entendermos como uma pilha é implementada por uma lista de encadeamento simples, vamos começar 
// considerando uma pilha vazia.

// Como precisamos sempre saber quem é o topo, utilizaremos uma variável ponteiro chamada “topo”, cuja 
// finalidade é apontar para o último elemento inserido na pilha.

// Inicialmente, na pilha vazia, “topo” terá valor nulo.

// Comentário
// Como dissemos, tentativas de desempilhar da pilha nessa situação devem ser impedidas, o que é levado a 
// termo pelo teste do valor de “topo”.

// A execução de uma operação de empilhamento - push ( ) ‒ envolve o recebimento do elemento a ser empilhado, 
// seguido da alocação de um nó para acumular esse valor.

// Uma vez que esse nó tenha sido criado, o seu campo “prox” deverá apontar para o mesmo endereço apontado por 
// “topo”.

// Sendo a primeira operação em uma pilha vazia, logicamente o campo “prox” desse nó terá valor nulo. Em seguida, 
// o ponteiro “topo” precisa ser atualizado, passando a apontar para o novo nó empilhado.

// É fácil notar que a repetição de operações push ( ) vai inserindo os nós na lista, sempre com o novo nó 
// apontando para o último nó inserido.

// Assim, a operação de desempilhamento - pop  ( ) - é trivial. Basta caminhar no sentido da lista. Ou seja, a 
// cada operação pop ( ), o ponteiro “topo” passa a apontar para o campo “prox” do nó desempilhado e, após a 
// recuperação do elemento armazenado no nó, este deve ser desalocado.

// A operação pop ( ) no último elemento da pilha fará “topo” assumir valor nulo, indicando uma lista vazia. 
// A Figura 6 ilustra a forma como essas operações se processam.

// A função de empilhamento pode ser vista no Código 11.

// Como estamos lidando com alocação encadeada, precisamos alocar a memória necessária sempre que vamos 
// empilhar um elemento. Isso ocorre na linha 2.

// A linha 3 verifica se a alocação foi bem sucedida, caso em que a execução segue para a linha 4. A não 
// alocação pode indicar o esgotamento da memória, tornando inviável novos empilhamentos.

// As linhas 4 a 6 são as que efetivamente executam o empilhamento. Na linha 4, o novo elemento é guardado 
// na memória alocada. Em seguida, linha 5, o novo nó passa a apontar para o atual topo da pilha. A 
// atualização do topo, passando a apontar para o nó inserido, se dá na linha 6.

// Código 11: Função de empilhamento.
// 1	int push ( Elemento elemento ) {
// 2		No *novo_no = ( No * ) calloc ( 1 , sizeof ( No ) );
// 3		if ( novo_no != NULL ) {
// 4			novo_no->elemento = elemento;
// 5			novo_no -> prox = topo;
// 6			topo = novo_no;
// 7			return 1; //sucesso
// 8		} else
// 9			return 0; //falha
// 10		}

// O Código 12 mostra a função de desempilhamento.

// Veja que utilizamos um ponteiro auxiliar (aux). O objetivo deste é permitir a desalocação do nó 
// desempilhado.

// Na linha 4, testamos para ver se a pilha é vazia, situação em que o desempilhamento geraria um 
// underflow.

// Caso não seja, o desempilhamento é possível e é executado pelas linhas 7 e 8. Em 7, o ponteiro 
// topo é atualizado, passando a apontar para o nó seguinte ao que será desempilhado. A linha 8 
// realiza a liberação de memória do espaço previamente ocupado pelo nó removido.

// O elemento guardado no nó desempilhado é acumulado em “elemento_recuperado”, sendo retornado pela 
// função.

// Código 12: Função de desempilhamento.
// 1	int pop ( void ) {
// 2		No *aux;
// 3		Elemento elemento_recuperado;
// 4		if ( topo != NULL ) {
// 5			elemento_recuperado = topo->elemento;
// 6			aux = topo;
// 7			topo = topo->prox;
// 8			free ( aux );
// 9			return elemento_recuperado;
// 10		} else
// 11			return NULL;
// 12	}

// Observe que, em ambos os casos, o número de passos executados é fixo.
