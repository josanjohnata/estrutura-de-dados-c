// Filas em alocação dinâmica
// Vejamos agora o caso de fila implementada em alocação encadeada.

// Relembrando o comportamento das filas, notamos que não precisamos percorrer a lista para executar 
// as operações de inserção ou remoção. Uma vez que estas sempre ocorrem nas extremidades, basta 
// mantermos uma referência para essas posições, da mesma maneira que no caso de alocação sequencial.

// Isso nos remete à mesma situação da pilha, cuja implementação através de lista simplesmente encadeada 
// mostra-se suficiente e vantajosa. O mesmo ocorre no caso das filas. Embora possamos implementá-las 
// através de uma lista duplamente encadeada, não há vantagem que justifique o gasto extra de memória. 
// Logo, nossa fila será implementada através de uma lista simplesmente encadeada, sem nó cabeça.

// Comentário
// Para sermos capazes de realizar inserções e remoções, precisaremos manter referências para o início e 
// o fim da fila. Já que estamos tratando de alocação encadeada, as variáveis responsáveis por esse 
// controle serão do tipo ponteiro.

// Usemos o ponteiro “inicio” para referenciar o início da fila e o ponteiro “fim” para o seu final. 
// Incialmente, vamos definir que a lista vazia será caracterizada por inicio = fim = NULL. O comportamento 
// de filas em alocação encadeada guarda alguma similaridade com o caso de alocação sequencial. As 
// diferenças ficam por conta das duas situações apresentadas no primeiro parágrafo da subseção anterior.
// - Novas inserções podem ser impedidas, devido ao fim da fila atingir o fim do vetor.
// - O desperdício de memória relativo aos espaços desocupados antes do início.

// Consideremos, por exemplo, a situação quando o primeiro elemento for inserido numa fila vazia. Após 
// a inserção, teremos que ambas as variáveis (“inicio” e “fim”) apontarão para o mesmo endereço de 
// memória. Esse endereço será o correspondente ao espaço de memória alocado para o elemento inserido.

// Se novas inserções ocorrerem, a variável “inicio” manter-se-á apontando para o primeiro elemento 
// inserido, e a variável “fim” passará a apontar para o novo nó criado.

// A remoção, por sua vez, provocará a desalocação do nó apontado por “inicio”, forçando com que a 
// variável passe a apontar para o nó seguinte. A remoção do único elemento na fila, situação em que 
// inicio = fim, torna novamente inicio = fim = NULL.

// Saiba mais
// A implementação através de listas encadeadas contorna ambos os problemas que indicamos na alocação 
// sequencial. O desperdício de memória é evitado, pois sempre que um elemento é retirado da fila, ele 
// é efetivamente desalocado e a memória ocupada pelo mesmo pode ser reutilizada. Já o problema de fila 
// cheia se modifica, pois como não há uma quantidade definida de memória alocada previamente, a fila 
// pode crescer virtualmente sem limite.

// Na prática, o crescimento é limitado pela memória disponível, mesmo assim, isso não se constitui em 
// óbice significativo normalmente. Por essas razões, também não há necessidade de fazermos uma 
// implementação circular e podemos manter o campo “prox” do último elemento sempre com o valor NULL.

// Vamos verificar mais detalhadamente como ocorrem a inserção e a remoção. Quando a função “enfileirar” 
// é chamada, ela recebe como parâmetro o novo elemento a ser inserido. Antes que ele possa ser colocado 
// na fila, precisamos alocar o espaço de memória e guardar o endereço correspondente.

// A fila será formada por uma lista de nós com apenas dois campos:
// - Elemento – Que guarda o elemento a ser inserido na lista.
// - Prox ‒ Que guarda o endereço do próximo nó.

// Ao ser criado o nó, devemos fazer “prox” assumir valor nulo. Esse campo só se alterará quando um novo 
// nó for inserido em seguida, caso em que “prox” guardará o valor do endereço desse nó. O nó criado será
// inserido quando o campo “prox” do nó anterior apontar para ele e o ponteiro “fim” for atualizado com o 
// endereço do nó inserido.

// A remoção é ainda mais simples. Basta fazer o ponteiro “inicio” avançar na fila, isto é, inicio = inicio -> prox. 
// Em seguida, desalocamos o nó removido. O Código 15 mostra o enfileiramento e o Código 16 o desenfileiramento.

// Código 15: Função enfileirar.
// 1	int enfileirar ( Elemento elemento ) {
// 2		No *novo_no = ( No * ) calloc ( 1 , sizeof ( No ) );
// 3		novo_no -> elemento = elemento;
// 4		novo_no -> prox = NULL;
// 5		if ( novo_no != NULL ) {
// 6			if ( fim != NULL )
// 7				fim->prox = novo_no;
// 8			else {
// 9				inicio = novo_no;
// 10				fim = novo_no;
// 11				return 1; //sucesso
// 12			} else
// 13				return 0; //falha
// 14	 }
// 15 }

// Olhando o Código 15, percebemos que a linha 5 verifica se houve sucesso na alocação de um novo nó. Se 
// esse nó tiver sido alocado com sucesso, o programa segue para a linha 6, que verifica se a fila é vazia 
// (pelo que explicamos antes, basta testar um dos ponteiros de controle). Se a fila não for vazia, a 
// linha 7 faz o nó apontado pelo ponteiro “fim” apontar para o novo nó e a linha 10 avança o fim da fila 
// para o nó inserido.

// Observe que a linha 10 é executada mesmo se a fila for vazia, caso em que a linha 9 também o é. Isso 
// corresponde à situação que vimos de uma fila com um único nó.

// Código 16: Função desenfileirar.
// 1	Elemento desenfileirar ( void ) {
// 2		int elemento_recuperado;
// 3		No *aux = inicio;
// 4		if ( inicio != NULL ) {
// 5			inicio = inicio->prox;
// 6			if ( inicio == NULL )
// 7				fim = NULL;
// 8			elemento_recuperado = aux->elemento;
// 9			free ( aux );
// 10			return elemento_recuperado; //sucesso
// 11		} else
// 12			return NULL; //falha
// 13	}

// A função desenfileirar, mostrada no Código 16, é igualmente simples. A linha 4 verifica se a fila é 
// vazia, o que inviabiliza a remoção. Se houver algum elemento na fila, basta avançar-se o ponteiro 
// de “inicio”, o que é feito na linha 5. A linha 6 verifica se a fila se tornou vazia. Se tiver se 
// tornado, o ponteiro “fim” precisa ser ajustado como na linha 7. Finalmente, em 9, o espaço de memória 
// é liberado. Para isso, um ponteiro auxiliar é utilizado.

// Da mesma maneira que na alocação sequencial, as operações de inserção e remoção são executadas em um 
// número constante de passos.

// A essa altura, você deve ter compreendido que a limitação da execução de inserções e remoções em 
// posições específicas é a responsável pela redução da complexidade, pois torna dispensável a busca 
// nas listas.

// Para encerrar, apresentaremos um algoritmo que se vale de filas para realizar a ordenação.

// A ordenação é um problema frequentemente enfrentado em computação e o Algoritmo 5 mostrado em 
// pseudocódigo realiza a ordenação de “n” chaves utilizando-se “m” filas, sendo as chaves números 
// inteiros numa base “m” > 1. Ou seja, o número de filas usadas é igual à base usada na representação 
// numérica das chaves. Isso significa que para ordenar chaves decimais, serão utilizadas 10 filas. 
// Esse tipo de ordenação é chamado ordenação por distribuição. O processo todo é relativamente simples.

// Para realizar a ordenação, a lista de entrada com as “n” chaves é percorrida. Nessa primeira passagem, 
// é avaliado o dígito menos significativo. As filas auxiliares são Fi, com “i” variando de 0 até “m” – 1. 
// Logo, para o caso decimal, temos que “i” varia de 0 até 9. Os dígitos menos significativos são comparados 
// ao índice “i”. Quando forem iguais, a chave é inserida nessa fila.

// Ao fim da passagem, as chaves estarão distribuídas pelas filas, segundo seu dígito menos significativo. 
// Uma nova fila de entrada é, então, construída a partir da concatenação das filas, mantendo-se a ordem 
// de seu índice. Isto é, F0 – F1 - ... – F9.

// Uma segunda passagem é feita, tendo como entrada essa nova fila, empregando-se o mesmo princípio, mas 
// agora comparando-se o segundo dígito mais significativo. O algoritmo terminará após a concatenação da 
// última fila, construída a partir da distribuição feita considerando-se o dígito mais significativo.

// Algoritmo 5: Ordenação por distribuição.               
// 1	 ordenacaoPorDistribuicao ( int m , int n , int Entrada [ ] )
// 2	 int nr_digito = m - 1 , aux
// 3	 int Fila [ nr_digito ]
// 4	 para i = 0 até i < m - 1
// 5		 para j = 0 até n - 1
// 6			 aux = o i-ésimo digito menos significativo de Entrada [ j ]
// 7			 Fila [ aux ] = Entrada [ j ]
// 8		 j = 1
// 9	 para aux = 0 até m - 1
// 10		enquanto Fila [ aux ] tiver elemento não processado
// 11			Entrada [ j ] = Fila [ aux ]
// 12			j++
