// Percurso em árvores binárias
// Agora, apresentaremos alguns algoritmos usados para percorrer árvores binárias. Você reparará 
// que são algoritmos simples e de implementação igualmente simples ‒ todos fazem uso da 
// recursividade. O mais importante é você compreender o funcionamento desses algoritmos.

// Percorrer uma árvore binária significa visitar sistematicamente seus nós.

// Atenção
// A razão de estudarmos esse tipo de operação é que árvores binárias possuem diversas aplicações, 
// sendo muito utilizadas como indexadores, por exemplo. Assim, percorrer de forma eficiente uma 
// árvore, tem impacto nas aplicações que a utilizam.

// Antes de passarmos aos algoritmos, estabeleceremos o que significa visitar um nó. Para nosso 
// propósito, podemos ver que:

// Visitar um nó é uma generalização que engloba qualquer operação que seja feita sobre a informação 
// contida neste nó.

// Assim, podemos visitar um nó com o intuito de imprimir seu conteúdo ou atualizá-lo, por exemplo. 
// Estamos considerando o caso de árvores implementadas por alocação encadeada. Assim, cabe fazermos 
// uma distinção. Só consideramos que um nó é visitado quando a operação é realizada sobre a informação 
// contida no nó.

// As operações realizadas sobre os campos do tipo ponteiro de um nó não são parte do conceito de 
// visitação. Ou seja, se acessarmos um nó apenas para buscarmos o endereço de um nó filho, não o 
// estamos visitando, mas apenas passando por ele em nosso percurso pela árvore. Contudo, se imprimimos 
// a informação de um nó, consideramos que este nó foi visitado.

// Para discutirmos como o percurso é feito, vamos começar com a representação de uma árvore genérica, 
// vista na Figura 17. Nesta árvore, notamos o nó raiz (r) e suas duas subárvores (Te(r) e Td(r)). Temos 
// que ter em mente que, se desejamos percorrer uma árvore, isto significa visitar todos os seus nós. Mas, 
// como vemos na árvore apresentada, isto implica percorrer também as subárvores esquerda e direita do nó 
// raiz.

// Atenção
// Veja que a recursividade do algoritmo emerge da análise do problema de forma imediata. Uma vez que 
// desejamos percorrer uma árvore, precisamos percorrer também suas subárvores, e assim, sucessivamente, 
// até encontrarmos uma subárvore vazia. Eis a recursão.

// Contudo, a ordem na qual fazemos as operações de percorrer a subárvore esquerda, percorrer a subárvore 
// direita e visitar o nó impacta na forma como o percurso é feito. Conforme a ordem, uma forma de se 
// realizar o percurso na árvore pode torná-lo mais adequado para solucionar um problema.

// Felizmente, há apenas três combinações dessas operações, uma vez que não se inverte a ordem em que as 
// subárvores são percorridas, que dão origem aos chamados percursos em pré-ordem, em ordem simétrica e 
// em pós-ordem.
// - Percurso em pré-ordem
//   Consiste em se visitar o nó, percorrer em pré-ordem a subárvore esquerda e, depois, percorrer em 
//   pré-ordem a subárvore direita. O Código 5 mostra a implementação desse algoritmo. Aplicando-o à 
//   arvore da Figura 1 e considerando que visitar o nó é imprimir sua chave, temos como saída a 
//   sequência A B C D E.
//   void pre_ordem ( No *ptr ) {
// 		printf ( ptr -> chave ); //visita o nó
// 		if ptr -> filho_esquerda != NULL
// 			pre_ordem ( ptr -> filho_esquerda ); //percorre recursivamente em pré-ordem a subárvore esquerda
// 		if ptr -> filho_direita != NULL
// 			pre_ordem ( ptr -> filho_direita ); //percorre recursivamente em pré-ordem a subárvore direita
// 	}
// - Percurso em ordem simétrica
//   Consiste em se percorrer em ordem simétrica a subárvore esquerda, depois se visitar o nó e finalmente 
//   se percorrer em ordem simétrica a subárvore direita. A implementação em linguagem C é exibida no Código 
//   6 e a aplicação do algoritmo à árvore da Figura 1 produz a saída B A D C E.
//   void ordem_simetrica ( No *ptr ) {
// 		if ptr -> filho_esquerda != NULL
// 			ordem_simetrica ( ptr -> filho_esquerda ); //percorre recursivamente em ordem simétrica a subárvore esquerda
// 		printf ( ptr -> chave ); //visita o nó
// 		if ptr -> filho_direita != NULL
// 			ordem_simetrica ( ptr -> filho_direita ); //percorre recursivamente em ordem simétrica a subárvore direita
// 	}
// - Percurso em pós-ordem
//   Consiste em se percorrer em pós-ordem a subárvore esquerda, depois percorrer em pós-ordem a subárvore 
//   direita e, finalmente, visitar o nó. Este algoritmo é mostrado implementado no Código 7. Aplicando-o à 
//   árvore da Figura 1, temos como saída B D E C A.
//   void pos_ordem ( No *ptr ) {
// 		if ptr -> filho_esquerda != NULL
// 			pos_ordem ( ptr -> filho_esquerda ); //percorre recursivamente em pós-ordem a subárvore esquerda
// 		if ptr -> filho_direita != NULL
// 			pos_ordem ( ptr -> filho_direita ); //percorre recursivamente em pós-ordem a subárvore direita
// 		printf ( ptr -> chave ); //visita o nó
// 	}

// Comentário
// Os códigos apresentados implementam os três tipos de percursos vistos. Como há grandes semelhanças entre 
// os mesmos, pela simplicidade envolvida, vamos nos limitar a explorar o Código 6. Extrapolar para os demais 
// algoritmos é trivial.
// void ordem_simetrica ( No *ptr ) {
//   if ptr -> filho_esquerda != NULL
//     ordem_simetrica ( ptr -> filho_esquerda ); //percorre recursivamente em ordem simétrica a subárvore esquerda
//   printf ( ptr -> chave ); //visita o nó
//   if ptr -> filho_direita != NULL
//     ordem_simetrica ( ptr -> filho_direita ); //percorre recursivamente em ordem simétrica a subárvore direita
// }

// Primeiramente, note que os códigos apresentados precisam receber como parâmetro um ponteiro para a árvore 
// a ser percorrida. Na primeira chamada do algoritmo, a função receberá como parâmetro o ponteiro para o nó 
// raiz da árvore binária a ser percorrida. Nós não testamos se o nó raiz é nulo, porque não faz sentido tentar 
// percorrer uma árvore vazia. Este teste deve ser feito, portanto, pelo código chamador da função.
// - Uma vez que a função de percurso foi invocada, no caso do Código 6, a primeira coisa que é feita é a 
//   verificação se a subárvore esquerda do nó apontado por “ptr” é vazia (linha 2).
// - Caso não seja, o algoritmo de percurso é chamado recursivamente, passando como parâmetro o ponteiro para 
//   o nó raiz da subárvore esquerda (linha 3).
// - Se a subárvore esquerda for vazia, passa-se à operação seguinte que, no caso do Código 6, é a visitação 
//   do nó (linha 4).
// - Uma vez que o nó tenha sido visitado, a função verifica se a subárvore direita do nó apontado por “ptr” 
//   é vazia. Tal procedimento é análogo ao que foi feito para a subárvore esquerda.
// - Assim, a linha 5 realiza a chamada recursiva da função de percurso passando como parâmetro o ponteiro 
//   para o nó raiz da subárvore direita. Mas a linha 5 só é executada se a subárvore direita não for vazia.

// Esse princípio de funcionamento é o mesmo para os três códigos mostrados. Todos têm em comum o recebimento 
// de um ponteiro para o nó raiz da árvore na primeira chamada. Da mesma forma, as chamadas recursivas sempre 
// passam como parâmetro ponteiros para os nós raízes das subárvores. Estas, entretanto, são sempre testadas 
// para verificar sua existência, pois uma subárvore vazia é condição de impedimento para a recursão.

// Olhando, ainda, os códigos mostrados, você perceberá que, nestes casos, a visitação significou a impressão 
// da informação armazenada no nó. Mas, os códigos podem ser facilmente alterados com outros fins, por exemplo, 
// retornar o endereço de cada nó da árvore.

// Atenção
// Outra observação relevante válida para todos os algoritmos é que estes são chamados tantas vezes quanto 
// são os nós a serem visitados. Logo, numa árvore com n nós, haverá n chamadas às funções de percurso. Veja, 
// também, que você pode ser obrigado a passar mais de uma vez por um nó, para acessar sua subárvore direita. 
// Contudo, dentro da argumentação que fizemos antes, os nós são visitados apenas uma vez.

// Embora o algoritmo recursivo seja consideravelmente mais simples, é possível realizar-se a implementação 
// dos percursos na árvore através de algoritmos não recursivos. Neste caso, contudo, a programação se torna 
// mais complexa, pois é necessário a cada passo do algoritmo que se mantenha a informação de qual direção 
// (esquerda ou direita) se está seguindo. Também é preciso controlar quais ramos já foram percorridos.

// Outras dificuldades podem surgir, mas o ponto relevante é ilustrar como a recursividade simplifica essa 
// implementação.

// Esses algoritmos apresentados foram construídos para árvores binárias. Mas podem ser generalizados, sem 
// grandes dificuldades, para árvores m-árias. Você só precisa considerar que os percursos em pré-ordem e 
// em pós-ordem se caracterizam apenas pela ordem em que o nó é visitado e as subárvores são percorridas 
// recursivamente:

// - Percurso em pré-ordem
//   Primeiro se visita o nó e depois se percorre recursivamente em pré-ordem todas as subárvores.
// - Percurso em pós-ordem
//   Primeiro se percorre recursivamente em pós-ordem todas as subárvores e depois se visita o nó. 
//   Esse procedimento abarca perfeitamente árvores m-árias.
// - Percurso em ordem simétrica
//   Tem, apenas como desafio a mais, o posicionamento da visita ao nó entre os percursos recursivos 
//   das subárvores.

// Por fim, os percursos apresentados não são os únicos. Outros algoritmos podem ser estabelecidos, mas 
// os três apresentados são de fundamental interesse.

// Exemplo
// Podemos empregar o Código 7 para calcular a altura de uma árvore. Basta, para tanto, alterar a visita 
// para que, ao invés de imprimir a informação existente no nó, ela realize o cálculo do nível do nó. O 
// Código 8 mostra uma forma de se realizar tal cálculo. Para usá-lo, a linha 6 do Código 7 deve ser 
// substituída pela chamada “altura (No*ptr)”.
// static void altura ( No *ptr) {
//   if ptr -> filho_esquerda != NULL
//     altura_subarvore_esquerda = ptr -> filho_esquerda -> altura;
//   else
//     altura_subarvore_esquerda = 0;
//   if ptr -> filho_direita != NULL
//     altura_subarvore_direita = ptr -> filho_direita -> altura;
//   else
//     altura_subarvore_direita = 0;
//   if altura_subarvore_esquerda > altura_subarvore_direita
//     ptr -> altura = altura_subarvore_esquerda + 1;
//   else 
//     ptr -> altura = altura_subarvore_direita + 2;
// }

// Algumas observações são necessárias para melhor compreensão do código mostrado.
// - Em primeiro lugar, o código considera que há mais um campo nos nós, chamado “altura”, e que armazena 
//   a altura calculada de cada nó.
// - As variáveis “altura_subarvore_esquerda” e “altura_subarvore_direita” são variáveis estáticas.
// - A altura da árvore emergirá do maior valor entre as variáveis citadas. Esta é apenas uma maneira de 
//   se aproveitar o percurso para se realizar o cálculo da altura.

// Na próxima seção, apresentaremos alguns tipos específicos de árvores empregadas para pesquisa. São 
// tipos de árvores voltadas para a busca e se constituem numa aplicação de árvores para um problema 
// fundamental da computação.
