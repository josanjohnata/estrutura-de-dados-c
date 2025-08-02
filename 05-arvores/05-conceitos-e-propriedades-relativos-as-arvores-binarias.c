// Conceitos e propriedades relativos às árvores binárias
// Nós já apresentamos a definição geral de árvores. Entretanto, vamos formalizar o significado 
// deste caso especial. Você notará a semelhança com a definição geral. Definimos uma árvore binária, 
// chamada T, como sendo um conjunto finito de elementos denominados vértices ou nós e que obedecem a:

// - Se T = {Ø}, então a árvore é dita vazia.
// - Caso contrário, existe pelo menos um elemento chamado de “nó raiz”. Os demais elementos podem ser 
// divididos em dois subconjuntos disjuntos, chamados subárvore esquerda e subárvore direita da raiz, 
// cada qual, por sua vez, uma árvore binária.

// Veja que a definição é praticamente a mesma para o caso geral, porém particularizada para o caso em 
// que os nós possuem no máximo 2 filhos. Novamente, trata-se de uma definição recursiva, de tal maneira 
// que, quando o conceito estipula que as subárvores são também árvores binárias, estas podem ser vazias 
// e possuir ou não suas próprias subárvores esquerda ou direita.

// Ou seja, um nó pode ter 0 (zero) filhos (subárvores esquerda e direita vazias), 1 filho (apenas uma 
// subárvore vazia) ou 2 filhos (nenhuma subárvore vazia).

// Para facilitar, vamos particularizar, também, a simbologia usada. Para representar o nó raiz da árvore
// T usaremos r(T). Já, para representar a subárvore esquerda do nó raiz, usaremos Te(r(T)) e Td(r(T)) 
// para indicar a subárvore direita. Lembre-se de que a definição é recursiva, assim, essa simbologia pode 
// ser usada para os nós raízes das subárvores.

// Quando a subárvore esquerda de um nó v não for vazia, a raiz dessa subárvore será chamada filho esquerdo 
// de v. Analogamente, a raiz da subárvore direita é chamada de filho direito de v. Adaptaremos à notação 
// geral, de maneira que Te(v) e Tc(v) representarão, respectivamente, as subárvores esquerda e direita de v.

// Uma diferença entre as árvores binárias e o caso geral é que a posição das subárvores identifica 
// unicamente uma árvore binária.

// Repare a Figura 12 (a) e a Figura 12 (b). Você notará que ambas são isomorfas e idênticas, mesmo se 
// consideradas como árvores ordenadas. Entretanto, ambas as árvores são distintas se consideradas 
// binárias. Esta diferença reside, justamente, nas subárvores do nó B. No caso da primeira árvore, a 
// Te(B) é vazia e a Td(B) possui um nó filho (D). Já na segunda árvore, a situação se inverte.

// Atenção
// Compreenda que a ordenação, conforme vimos, diz respeito ao ordenamento entre nós irmãos. É por 
// isso que, mesmo se consideradas árvores ordenadas, ambas são idênticas (apesar de graficamente 
// representadas de forma diferente). Para o caso geral, a posição de cada subárvore não importa, 
// mas apenas a ordem entre elas.

// Mas se considerarmos ambas as árvores como binárias, então, elas se tornam diferentes, pois, neste 
// caso, a posição das subárvores passa a ser relevante. Em uma, o nó D está na subárvore esquerda e 
// na outra, na direita.

// Já vimos o que é uma árvore binária. Agora, veremos alguns tipos particulares de árvores binárias. 
// Começaremos por definir o que é uma árvore estritamente binária.

// Saiba mais
// Uma árvore estritamente binária é uma árvore em que cada nó possui zero ou dois filhos, ou seja, 
// uma árvore que possua pelo menos um nó com apenas um filho é uma árvore binária, mas não é uma 
// árvore estritamente binária. Perceba que nós que não possuem filhos, pelos conceitos que já vimos, 
// são obrigatoriamente nós folha. Assim, uma árvore estritamente binária é uma árvore na qual todo 
// nó interior possui dois filhos.

// A Figura 13 mostra um exemplo de árvore estritamente binária:

// Veja agora outros conceitos de árvore binária:
// - Árvore binária cheia:
//   Uma árvore binária cheia é uma árvore na qual qualquer nó que possua alguma subárvore vazia 
//   situa-se no maior (último) nível. Ou seja, este tipo de árvore binária não possui nós com 
//   subárvores vazias fora do último nível. A Figura 14 exemplifica isso.
// - Árvore binária completa:
//   Define-se, ainda, uma árvore binária completa como uma árvore binária na qual qualquer que seja 
//   o nó que possua uma subárvore vazia, tal nó situa-se no último ou no penúltimo nível. Veja que 
//   uma árvore binária cheia é uma árvore binária completa, mas o inverso não é verdadeiro. Uma árvore 
//   binária cheia é mostrada na Figura 15.
// - Árvore zigue-zague:
//   Chamamos, finalmente, de árvore zigue-zague àquela árvore binária em que todos os nós interiores 
//   possuem exatamente uma subárvore vazia. Note que, neste caso, não pode haver nós interiores com 
//   duas subárvores não vazias. Este tipo de árvore é exibido na Figura 16.
