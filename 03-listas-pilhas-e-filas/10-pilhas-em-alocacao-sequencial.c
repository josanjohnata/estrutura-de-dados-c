// Pilhas em alocação sequencial
// Uma limitação que você já deve estar imaginando é que pilhas implementadas através de alocação 
// sequencial estão sujeitas à restrição de memória correspondente ao tamanho do vetor definido.

// Assim, é preciso realizar testes que impeçam o desempilhamento em uma pilha vazia (underflow) 
// e o empilhamento em uma pilha cheia (overflow).

// Apesar disso, operacionalizar uma pilha com alocação sequencial é simples. A operação de inserção 
// (empilhamento) sempre ocorre na extremidade, assim como a remoção (desempilhamento). Mais ainda, 
// ambas ocorrem na mesma extremidade. Com isso, não temos a sobrecarga de mover os demais elementos 
// do vetor, como seria se fosse possível fazer tais operações no interior.

// Semelhantemente à lista genérica alocada sequencialmente, o desempilhamento não desaloca de fato a 
// memória. O que é feito, nesse caso, é um controle de qual posição do vetor representa o topo. As 
// posições do início até o topo são consideradas ocupadas. As posições maiores que o topo até o 
// limite do vetor, são posições disponíveis, que podem receber elementos.

// Portanto, empilhar significa incrementar o topo, e desempilhar, decrementá-lo.

// A Figura 5 ilustra essas operações para um vetor genérico.

// Vamos verificar, primeiramente, como se processa a operação de empilhamento em uma pilha vazia.

// Para pilhas implementadas por meio de vetores, o topo será controlado por uma variável do tipo 
// inteiro chamada de “topo”. A finalidade dessa variável é guardar o índice do vetor que corresponde 
// ao topo da pilha.

// Em linguagem C, o vetor inicia em 0 (zero), então convencionaremos que uma pilha vazia será indicada 
// pelo valor da variável “topo” igual a -1.

// Antes de inserirmos um elemento na pilha, precisamos verificar se há posições desocupadas no vetor. 
// Isso é feito comparando-se o valor de “topo” com o tamanho do vetor, o qual é conhecido a priori.

// Caso haja espaço, a variável “topo” deve ser incrementada e o novo elemento inserido no novo topo. 
// Esse procedimento pode ser visto no Código 9. Nesse código, MAX_PILHA é o tamanho do vetor que 
// implementa a pilha. A falha ocorrerá se for tentado o empilhamento de um elemento em uma pilha cheia.

// Código 9: Função de empilhamento.
// 1 int push ( Elemento elemento ) {
// 2 	if ( topo < ( MAX_PILHA – 1 ) ) {
// 3 		topo++;
// 4 		pilha [ topo ] = elemento;
// 5 		return 1; //sucesso
// 6 	} else
// 7 		return 0; //falha
// 8 }

// O desempilhamento é igualmente uma operação simples. Antes de se remover um elemento da pilha, é 
// preciso verificar-se se ela está vazia. Dessa maneira, se o valor da variável “topo” for maior ou 
// igual a zero, o desempilhamento pode ocorrer. Caso contrário, ele deve ser impedido para se evitar 
// o underflow.

// Antes de desempilhar o elemento do topo, esse é acumulado em uma variável temporária para que seu 
// valor possa ser recuperado. Em seguida, basta decrementarmos a variável “topo”, indicando que a 
// posição passou a estar disponível para escrita. Observe a implementação do Código 10.

// Código 10: Função de desempilhamento.
// 1 Elemento pop ( void ) {
// 2 	Elemento valor_recuperado;
// 3 	if ( topo >= 0 ) {
// 4 		valor_recuperado = pilha [ topo ];
// 5 		topo--;
// 6 		return valor_recuperado;
// 7 	} else
// 8 		return NULL; //falha
// 9 }

// Voltando ao nosso exemplo do empilhamento dos elementos a, b, c, d, e.

// Antes do primeiro empilhamento, “topo” teria valor -1. Vamos agora considerar que nosso vetor tem 3 
// posições, isto é, os índices variam de 0 a 2.

// A primeira chamada push ( a ), incrementará o valor de “topo” e colocará o elemento “a” na posição 0 
// (zero) do vetor.

// A execução subsequente de push ( b ) e push ( c ), fará com que “topo” tenha valor 2.

// Logo, a execução em seguida de push ( d ), será desviada na linha 2 do Código 9, pois topo (2) é igual 
// ao valor da expressão MAX_PILHA (3) – 1.

// Entretanto, se executarmos a função pop ( ), “c” será removido da pilha, e o valor de “topo” será 
// decrescido para 1.

// Após isso, push ( d ) conseguiria empilhar “d”, tornando a pilha novamente cheia.

// Vamos considerar agora o desempilhamento. A execução de pop ( ), irá desempilhar “d”, decrementando “topo”.

// Atenção
// Não se esqueça que, de fato, “d” permanece no vetor, mas agora a sua posição poderá ser sobrescrita.

// A sequência pop ( ), pop ( ) esvaziará completamente a pilha, de forma que a tentativa de se executar 
// uma quarta vez seguida a função pop ( ) não será possível. Na quarta execução, “topo” valerá -1, 
// desviando a execução na linha 3 do Código 10.
