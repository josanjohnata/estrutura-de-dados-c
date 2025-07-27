// Mão na Massa

// Considere, por exemplo, a seguinte lista: [1, 3, 6, 7, 9, 12, 15, 22, 90]. Suponha que você esteja 
// buscando o elemento de valor 5. Pois bem, consultando o elemento central da lista (9), verificamos 
// que ele é maior do que o elemento buscado.

// Etapa 01
// Dessa forma, podemos descartar todos os elementos do meio até o fim (pois como se trata de uma lista 
// ordenada, sabemos que o 5, se existir, estará à esquerda de 9).
// Etapa 02
// Agora, repitamos o procedimento considerando apenas a primeira metade da lista ( [1, 3, 6, 7, 9] ). 
// Nesse caso, o elemento de valor 6 (central) é maior do que o buscado.
// Etapa 03
// Portanto, repetimos o procedimento para o primeiro quarto da lista ( [1, 3] ). É fácil ver que após 
// a última repetição ‒ segundo oitavo da lista ( [3] ), teremos como resposta que o elemento buscado 
// não faz parte da mesma.

// O procedimento realizado acima, se você observou atentamente, faz chamadas recursivas a si mesmo sempre 
// dividindo ao meio o espaço de busca. Esse procedimento é chamado de busca binária. Ou seja, tiramos 
// proveito do fato de se tratar de uma lista ordenada, para tornar a busca mais eficiente. A função exibida 
// no Código 3 mostra a implementação da busca binária em C.

// Código 3: Busca binária
// 1 	int busca_binaria ( int lista [ ] , int elemento , int inicio , int fim ) {
// 2 		int meio = floor ( ( fim + inicio ) / 2 );
// 3 		if ( ( inicio == fim ) && ( lista [ meio ] != elemento ) )
// 4 			return -1;
// 5 		else if ( lista [ meio ] == elemento )
// 6 			return meio;
// 7 		else if ( elemento < lista [ meio ] )
// 8 			busca_binaria ( lista , elemento , inicio , meio );
// 9 		else busca_binaria ( lista , elemento , meio + 1 , fim );
// 10 	}

// Olhemos agora mais um caso particular de listas, as chamadas double ended queue ou “deque”. Nessas 
// listas, as inserções e remoções somente são permitidas nas extremidades. Não há um início e um fim 
// propriamente ditos, pois as inserções podem ocorrer antes da extremidade esquerda e/ou após a 
// extremidade direita. Isso vale para a remoção.

// Em outras palavras, a lista deque pode crescer pela esquerda, pela direita ou por ambas as extremidades 
// (o encurtamento, é análogo). Isso tem algumas implicações para nossos algoritmos. A inserção e a remoção 
// somente podem ser realizadas em pontos determinados (extremidades), e o acesso à memória é direto, pois 
// trata-se de alocação sequencial.

// Vimos anteriormente que na alocação sequencial não temos como desalocar o espaço de memória do elemento 
// removido. A solução para isso seria mover todos os elementos à sua direita de forma a sobrescrevê-lo e 
// registrar o encurtamento da lista. Mas isso é um caso geral que comporta remoções internas. Na verdade, 
// se limitamos a remoção às extremidades, esse problema se torna consideravelmente mais simples.

// Considere o vetor v = [ a, b, r, t, c, p]. Trata-se claramente de uma lista não ordenada com 6 elementos. 
// Sendo “v” um deque, os únicos elementos que podem ser removidos são o “a” e o “p”.

// Vamos usar duas variáveis auxiliares, “aux_esq” e “aux_dir” que registram as posições extremas ocupadas, 
// respectivamente, à esquerda e à direita. No caso, aux_esq = 0 e aux_dir = 5. Para remover “a”, tudo que 
// precisamos fazer é incrementar aux_esq, que passará a valer 1. Dessa forma, a posição 0 é considerada 
// disponível.

// Raciocínio análogo é feito para se remover “p”, nesse caso decrementando aux_dir (que passará a ser 4). 
// Uma vez que estamos removendo artificialmente o elemento (pois ele continua em memória até que seja 
// sobrescrito), precisamos ter o cuidado de testar quando nossa lista estiver vazia (aux_esq > aux_dir).
// É fácil reverter o raciocínio anterior para compreendermos a inserção. Quando esta se der à esquerda, 
// decrementamos aux_esq e gravamos o novo elemento. Quando se der à direita, incrementamos aux_dir e 
// inserimos o novo elemento.
// Agora, contudo, dois testes são necessários. Precisamos verificar se aux_esq é igual a zero, pois nesse 
// caso não temos como inserir um elemento à esquerda (geraria overflow). O mesmo problema ocorre se aux_dir 
// for igual ao índice da última posição do vetor.

// Mas essa limitação não é o único problema. Voltemos ao nosso exemplo. Suponha que tenham sido removidos 
// “a” e “b” e se deseje inserir “u” à direita. Essa inserção viola o limite do vetor, gerando overflow, 
// mas na verdade há espaço disponível para tal inserção.

// O problema é que como esse espaço está antes da extremidade esquerda, ele não pode ser utilizado, o que 
// acaba desperdiçando memória. Uma forma elegante de se contornar essa limitação é utilizar-se uma lista 
// circular.

// Uma lista circular é uma lista na qual as extremidades direita e esquerda estão ligadas. Assim, ultrapassar 
// o limite superior direito, leva à extremidade esquerda, enquanto ultrapassar o limite inferior esquerdo, 
// leva à extremidade direita.

// Colocando de outra forma, ao movermo-nos para a esquerda em nosso vetor exemplo “v”, antes da posição 0, 
// estaria a posição 5. Ao movermo-nos para a direita, após a posição 5, está a posição 0. É óbvio que esse 
// não é o comportamento de um vetor, mas tal comportamento pode ser codificado nos algoritmos de remoção e 
// inserção, de forma que a lista se comporte como a lista circular teórica.

// Comentário
// Não podemos nos esquecer, contudo, que novos testes de controle precisam ser feitos, de forma que se evite, 
// por exemplo, que uma inserção sobrescreva inadvertidamente um elemento não removido.

// Você também não deve confundir esse artifício, que visa ao uso eficiente de memória, com o aumento da 
// capacidade de um vetor. Usemos listas circulares ou não, o número máximo de elementos que um vetor 
// comporta é igual ao número de posições contíguas de memória alocadas.

// Como dissemos anteriormente, o uso de alocação sequencial é uma forma de se implementar listas. Conforme 
// mostramos, há vantagens e desvantagens que devem ser pesadas antes da decisão de qual mecanismo utilizar. 
// Na seção seguinte, compreenderemos outro mecanismo de alocação, chamado de alocação encadeada.
