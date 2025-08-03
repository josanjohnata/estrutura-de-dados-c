// A árvore binária de busca (ABB)
// Uma árvore binária de busca é uma árvore binária, estabelecida com algumas particularidades, 
// ou seja, é uma árvore binária rotulada. Antes de definimo-la, contudo, precisamos formalizar 
// o nosso problema de busca. Como vimos, trata-se de encontrar um elemento através da busca de 
// sua chave, caso esta exista no espaço de busca.

// Formalmente, dado um conjunto de chaves C = {c₁, c₂, ..., c𝚗} tal que c₁ < c₂ < ... < c𝚗, o 
// problema de busca consiste em se identificar o valor de n que corresponde à chave procurada, 
// ou identificar que a chave não pertence ao conjunto C, se este for o caso.

// Atenção
// Repare que as chaves possuem uma relação de ordem entre si. Este fato será considerado na 
// rotulagem da árvore binária.

// Para fazer frente a esse problema, define-se uma árvore binária de busca para C como sendo uma 
// árvore binária rotulada T segundo as seguintes regras:
// - T possui k nós, sendo que cada nó de T corresponde a uma única chave distinta de C, e vice-versa. 
//   Cada nó possui como rótulo o valor c𝑖 que é a chave correspondente.
// - Qualquer que seja o nó v de T e os nós v₁ e v₂, respectivamente pertencentes à subárvore esquerda 
//   e à direita de v, então: O rótulo de v₁ é menor do que o rótulo de v e o rótulo de v₂ é maior do 
//   que o rótulo de v.

// Uma coisa interessante de se observar é de que forma esta definição afeta a árvore binária. Veja que, 
// para que ela seja uma ABB e, desta forma, possa solucionar o problema de busca, uma regra de ordenação 
// foi imposta.

// Todos os nós da subárvore esquerda de um nó v qualquer ou são inexistentes ou são menores do que v. 
// Analogamente, todos os nós da subárvore direita de v ou são inexistentes ou são maiores que v.

// Mas isto não implica na existência de uma única árvore binária de busca para o conjunto C quando o 
// número de elementos for maior do que 1. De fato, existe mais de uma ABB para um conjunto C neste caso.

// Veja dois exemplos para o conjunto C = {1, 2, 3, 4, 5}, mostrados na Figura 18. Cabe também observar 
// que usaremos chaves numéricas para facilitar o entendimento, mas desde que haja uma relação de 
// precedência, chaves alfabéticas também poderiam ser utilizadas (por exemplo: A < B < C ... < Z).

// Utilizemos, agora, a árvore “b” da Figura 18 para entender como ela nos ajuda na busca por uma chave.

// Exemplo
// Suponha que estejamos buscando a chave 3. Neste caso, o primeiro nó a ser analisado é a raiz. Se a raiz 
// contiver a chave buscada, nossa busca terminou. Mas este não é o caso. Vamos, então, comparar a chave 
// buscada com o rótulo da raiz. Como 3 > 2, sabemos que, se a chave existir, ela estará na subárvore 
// direita da raiz. Passamos, então, a analisar o nó “4”. Agora, vemos que 3 < 4, o que indica que a chave 
// buscada, se existir, estará à esquerda do nó “4”. Na próxima iteração, finalmente encontramos a chave 
// buscada.

// No nosso exemplo, estamos conduzindo uma busca num conjunto pequeno, com apenas 5 chaves. Mas observe 
// que foram feitas apenas 3 comparações, de 5 possíveis. Se aplicássemos a busca na árvore “a”, faríamos 
// apenas 1 comparação.

// Então, duas considerações merecem ser feitas:
// - Em primeiro, a construção da árvore binária de busca tem impacto na busca.
// - Em segundo, no caso médio, vemos que a ABB reduziu o número de comparações necessárias para se 
// encontrar a chave.

// É claro que se a árvore fosse um caso degenerado em árvore zigue-zague, com a raiz sendo 1, no pior 
// caso teríamos que fazer 5 comparações, e não tiraríamos nenhuma vantagem da ABB. Mas é por isso que 
// o balanceamento de árvores de busca é importante, como veremos mais à frente. Note que o pior caso 
// para as árvores da Figura 18 é realizar 3 comparações.

// Comentário
// Você deve ter notado, também, que no pior caso, o número de vezes em que a comparação ocorre é igual 
// à altura da árvore. Assim, árvores binárias de busca de altura mínima são vantajosas para as buscas.

// O caso de uma busca em que a chave não está na árvore é trivial. Imagine que estejamos buscando a chave 
// de valor 6. Todo o processo se passaria como descrito anteriormente até atingir-se o nó “5”. Neste ponto, 
// uma nova comparação (6 > 5) indicaria que a chave 6, se existir, estará à direita do nó. Entretanto, a 
// subárvore direita do nó “5” é vazia. Logo, a chave 6 não faz parte do conjunto C.

// O Código 9 mostra uma implementação do algoritmo de busca em uma ABB.
// int busca_arvore ( int chave , No *ptr ) {
//   if ( ptr->chave == chave )
//     return 1; //chave encontrada
//   else if ( chave < ptr->chave )
//     if ( ptr->filho_esquerdo == NULL )
//       return 0; //chave não encontrada
//     else
//       busca_arvore ( chave , ptr->filho_esquerdo );
//   else if ( ptr->filho_direito == NULL )
//     return 0; //chave não encontrada
//   else
//     busca_arvore ( chave , ptr->filho_direito );
// }

// Como vimos, a altura da árvore binária de busca é de especial interesse. Logo, é interessante estabelecer 
// uma relação entre o número de nós (n) de uma árvore binária completa e sua altura.

// Sabemos que, para uma árvore binária completa, sua altura (h) é mínima, de forma que h ≥ 1 + piso(log n) 
// – lembre-se de que o logaritmo em estrutura de dados está na base 2 e não na decimal, como usualmente. 
// Resolvendo esta desigualdade para n, temos que n ≥ 2⁽ʰ⁻¹⁾. Por outro lado, observando-se uma árvore cheia, 
// vemos que o número de nós dobra a cada nível. É fácil ver que com altura igual a 2, há 3 nós, com altura 
// igual a 3, há 7 nós, e assim, sucessivamente. Logo, o número de nós em uma árvore binária cheia é n = 2ʰ - 1.

// Podemos, então, estabelecer a relação pretendida:
// Numa árvore binária completa com n nós e altura h, 2(h -1) ≤ n ≤ 2h -1.

// A esta altura, já deve ter ficado claro que a forma como a árvore binária de busca é construída tem impacto 
// na busca, ou seja, na sua principal finalidade. Vamos, então, considerar de forma mais profunda o problema 
// de construção de uma ABB.

// Inicialmente, consideremos um procedimento que, à medida que recebe as chaves do conjunto C de chaves, as 
// insere na árvore respeitando a definição dada de ABB. Este algoritmo, aplicado ao conjunto C = {1, 2, 3, 4, 5, 6, 7} 
// produzirá uma árvore zigue-zague com todos os nós inseridos nas subárvores direitas e raiz “1”. Tal árvore 
// terá altura máxima, igual ao número de nós inseridos. Ou seja, tal procedimento é sensível à ordem em que 
// as chaves são ordenadas no conjunto C. Mas, se você revir a Figura 18 (a), notará que ter na raiz a chave 
// média permitiu distribuir de forma equitativa as demais chaves.

// Atenção
// A meta é, portanto, construir a árvore binária de busca de maneira que ela seja uma árvore binária completa.
