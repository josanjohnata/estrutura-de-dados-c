// Conceitos e operações em listas lineares genéricas
// Consideraremos, para fins didáticos, que as listas lineares estão implementadas através de alocação 
// sequencial em vetores de tamanho ilimitado. Posteriormente, quando aprofundarmos o estudo, trataremos 
// os casos reais de listas alocadas sequencialmente.

// Listas lineares são estruturas de dados não primitivas, usadas para reunir um conjunto de elementos 
// que guardam relação entre si.
// Listas lineares
// Formalmente, segundo Szwarcfiter e Markenzon (2010), uma lista linear é um conjunto de n ≥ 0 nós, tais 
// que suas propriedades estruturais decorrem, unicamente, da posição relativa dos nós dentro da sequência 
// linear. Ou seja, se n = 0, a lista é vazia; se n > 0, então qualquer que seja k, tal que 1 < k ≤ n, o 
// nó L[k] é precedido pelo nó L[k-1], exceto para o nó L[1], que é o primeiro nó da lista.

// Uma lista linear pode armazenar tipos de dados complexos, isto é, cada nó pode ter campos que armazenam 
// elementos com características distintas. Pode-se designar um desses campos como sendo a chave de busca 
// da lista, o qual é utilizado para indexar os nós e é chamado de “chave”.

// Quando a lista apresenta seus nós ordenados segundo a “chave”, essa lista é chamada de ordenada. Caso contrário, 
// trata-se de uma lista não ordenada. Observe que, para que seja uma chave de busca, a “chave” deve ser única 
// (todos os campos “chave” devem ser distintos entre si e correlacionados com o mesmo elemento).

// As listas apresentam casos particulares, chamados de deque, pilha e fila. Tais casos se diferenciam pela forma 
// como as operações de inserção e remoção podem ocorrer na lista. Mas antes de estudarmos esses casos, vamos 
// compreender o funcionamento das operações de inserção, remoção e busca para o caso geral.

// Observe os pseudocódigos a seguir, nos quais a lista é representada por “Lista” e possui “n” posições ocupadas.

// Algoritmo 1: Busca
// 1: int buscar ( chave )
// 2: 	se n > 0
// 3: 		para i = 1 até i <= n
// 4: 			se Lista [ i ].chave == chave
// 6: 			retornar i
// 7: 	retornar n + 1

// Repare que no caso da busca (Algoritmo 1) de um elemento da lista, esta é percorrida a partir do início até que o 
// elemento seja encontrado ou o fim da lista seja atingido. O pior caso da busca se dá quando o elemento ocupa a 
// última posição da lista ou não está na lista, o que obriga a se percorrer toda a lista.

// Algoritmo 2: Inserção
// 1: int inserir ( novo_elemento )
// 2: 	se busca ( novo_elemento.chave ) == n + 1
// 3: 		Lista [ n + 1 ] == novo_elemento
// 4: 		n = n + 1
// 5: 		retornar 1
// 6: 	senão retornar -1

// A inserção (Algoritmo 2) precisa, antes de mais nada, verificar se o elemento a ser inserido já se encontra na lista 
// (lembre-se de que as chaves são únicas e distintas). Nesse caso, se o valor retornado da busca for maior que o número 
// de elementos (n) da lista, isso quer dizer que o novo elemento pode ser inserido. Como não se trata de uma lista 
// ordenada, o novo elemento será inserido após a última posição ocupada. Note que se trata de um caso simples, uma vez 
// que a não ocorrência do elemento permite sempre o inserir após a última posição ocupada.

// Algoritmo 3: Remoção
// 1:	int remover ( chave )
// 2:		se n > 0
// 3:			int i = busca ( chave )
// 4:			se i < n + 1
// 5:				para a = i até a < n
// 6:					Lista [ i ] = Lista [ i + 1 ]
// 7:					n = n -1
// 8:			senão retornar -1
// 9:		senão retornar “Erro: lista vazia”

// O algoritmo de remoção (Algoritmo 3) também precisa realizar a busca inicialmente, uma vez que remover um elemento inexistente 
// irá gerar erro. Se esse elemento for encontrado, basta sobrescrever a sua posição com o elemento da posição seguinte e, assim, 
// sucessivamente, até o fim da lista. Talvez lhe pareça um pouco mais difícil apontar a complexidade de pior caso, mas isso é 
// apenas aparente. Na verdade, se você considerar que, seja qual for a posição do elemento a ser removido, todos os elementos 
// posteriores serão manipulados, você perceberá que esse algoritmo sempre opera sobre todos os elementos da lista: Até encontrar, 
// compara; depois de encontrado, copia.

// Comentário
// Convém lembrar que, na prática, há outros detalhes que devem ser considerados. Nos casos anteriores, consideramos que nosso vetor 
// não tinha limite. Essa é uma suposição teórica. Na realidade, o espaço em memória é limitado.

// Quando o espaço necessário para guardar os vetores é alocado antecipadamente (o cálculo prévio da quantidade de memória é trivial, 
// como vimos), a alocação é chamada estática. Nesse caso, a quantidade de memória não pode ser alterada em tempo de execução. Isso 
// explica, por exemplo, porque nosso Algoritmo 3 desloca uma posição para a esquerda todos os elementos à direita do que foi removido, 
// ao invés de simplesmente desalocar o elemento a ser removido.

// Além disso, na prática, a inserção precisaria verificar se o tamanho do vetor seria ultrapassado com a inserção de um elemento, o que 
// geraria um erro de “overflow”.

// Contudo, é possível realizar alocação sequencial de memória com o tamanho definido em tempo de execução. Esse tipo de alocação é chamado 
// de dinâmica e faz uso, em linguagem C, de instruções de reserva de memória como a malloc e outras do tipo. Observe o trecho de código a 
// seguir:

// Código 2: Alocação dinâmica
// [...]
// 1: int *vetor;
// 2: vetor = ( int * ) malloc ( tamanho_vetor * sizeof ( int ) );
// [...]

// A função malloc solicita ao sistema operacional que reserve, em tempo de execução, uma área contígua de memória igual à “tamanho_vetor” * o 
// tamanho do tipo inteiro.

// A variável “tamanho_vetor” pode ser determinada durante a execução do programa.

// Como na linguagem C o nome do vetor é um ponteiro para o endereço base desse vetor e os índices são offsets (deslocamentos) a partir desse 
// endereço base, a instrução “vetor [ n ]” tem o mesmo comportamento que no exemplo 1. Isto é, “n” significa o deslocamento a partir do 
// endereço apontado por “vetor”
