// Conceitos básicos e terminologia
// O primeiro conceito que apresentaremos é justamente o que define o que é uma árvore.

// Uma árvore 𝛵 é um conjunto finito de elementos que obedecem a:

// - Se 𝛵 = {Ø}, então a árvore é dita vazia.
// - Caso contrário, existe pelo menos um elemento chamado de “nó raiz”. Os demais elementos 
// ou são um único conjunto vazio ou são divididos em 𝑚 ≥ 1 conjuntos disjuntos não vazios, 
// chamados subárvores do nó raiz, cada qual, por sua vez, uma árvore.

// Os elementos que formam uma árvore são chamados nós ou vértices da árvore, sendo que um nó 
// é especial: O nó raiz, que é o único nó existente na posição hierárquica mais alta. Uma árvore 
// vazia não possui nó raiz.

// Todos os demais nós da árvore, se existirem, pertencem a alguma subárvore do nó raiz. Usaremos, 
// assim, a notação 𝛵(𝒌) para designar uma subárvore 𝛵, cujo nó raiz é “𝒌”. Já um conjunto de árvores, 
// a seu turno, é chamado de floresta.

// Entendamos melhor a definição de árvore.

// Primeiro, observe que é uma definição recursiva. Cada subárvore é, ela própria, uma árvore. Logo, 
// cada subárvore atende às condições da definição e possui, ela mesma, o seu nó raiz.

// Observe agora as duas condições impostas. Na primeira, o conjunto de elementos que formam a árvore 
// é vazio. Ou seja, trata-se de uma árvore que não possui nós. Por isso, essa árvore é chamada de vazia.

// A segunda situação diz respeito ao caso em que há nós na árvore. Neste caso, você deve prestar 
// bastante atenção ao seguinte: Os elementos são divididos em 𝑚 ≥ 1 conjuntos disjuntos não vazios.

// Comentário
// Em outras palavras, dizer que esses conjuntos são disjuntos significa dizer que eles não possuem 
// elementos em comum, ou, colocando ainda de outra forma, nenhum nó faz parte ao mesmo tempo de duas 
// subárvores distintas. Finalmente, isto quer dizer que uma árvore não possui ciclos.

// Veja a Figura 1 e a Figura 2. A primeira exibe uma árvore. Já a segunda figura mostra um grafo, 
// outro tipo de estrutura de dados. Repare que no segundo caso, o nó D pertence simultaneamente a 
// dois conjuntos: A subárvore esquerda de A e a subárvore direita, formando um ciclo (ABDC).

// A razão pela qual esse ponto foi sucessivamente apresentado de forma cada vez menos formal, ao 
// invés de darmos logo a definição de ausência de ciclos, é que você precisa compreender as nuances 
// envolvidas na definição de árvore. Entender o que são as subárvores e como estas se relacionam 
// será essencial para compreender as propriedades de árvores que veremos nas próximas sessões.

// A Figura 1 mostra uma forma clássica de se representar graficamente as árvores. Esta representação, 
// chamada de hierárquica, mostra a árvore com a raiz no topo. Cada nó está ligado, mostrando a relação 
// hierárquica entre eles. A representação hierárquica pode apresentar, ainda, o nó raiz na base, 
// conforme se vê na Figura 3.

// Há outras formas de se representar graficamente uma árvore. Você pode ver algumas delas na Figura 4, 
// que mostra uma árvore representada por diagramas de inclusão e na Figura 5, que exibe a representação 
// por diagramas de barras.

// Atenção
// Note que, em todas, é possível se observar a hierarquia dos nós e a sua ordem, mas a Figura 1 mostra 
// estas relações com mais clareza, razão pela qual é mais popular na área de Computação.

// Há, ainda, a forma parentizada, que usa parênteses aninhados para representar a hierarquia dos nós. 
// Por exemplo, a árvore da Figura 1 é representada por parênteses aninhados como (A (B) (C (D) (E) ) ). 
// É fácil ver a semelhança entre esta notação e uma expressão aritmética. Na verdade, uma expressão 
// aritmética completamente parentizada pode ser representada por uma árvore, colocando-se os operandos 
// nos nós e seus respectivos operadores nas subárvores. Assim, a expressão 
// (𝑎 * (𝒃 + 𝒄 / 𝑑)) é representada, sem ambiguidade, pela árvore da Figura 6.

// Atenção
// A respeito da relação hierárquica entre os nós, chamamos de filhos de k a todos os nós raízes n₁, n₂, ... n𝘫
// das subárvores 𝛵(𝒌). Os nós n₁, n₂, ... n𝘫 são irmãos e k é nó pai destes nós. Se um nó w é filho de n₁, então 
// n₂ é tio de w (e w é sobrinho de n₂, ... n𝘫) e k é avô de w (e w, por sua vez, é neto de k). Se p pertence à 
// subárvore 𝛵(𝒌), p é descendente de k, o qual é ancestral de p. Se p for diferente de k, então w é descendente 
// próprio de k e este é ancestral próprio de w (ou seja, um nó é descendente e ancestral de si mesmo, pela definição).

// O grau de saída (ou simplesmente grau) de um nó é definido como o número de filhos deste nó. Um nó 
// que não possui descendentes próprios é chamado de nó folha. Nós que não são folha são chamados de 
// nós interiores. O nó raiz de uma árvore ele próprio um nó interior, pode agora ser definido como o 
// único nó de uma árvore que não possui ancestrais próprios. Quando falamos em ancestrais e descendentes 
// próprios para definir as folhas e a raiz, estamos evitando a confusão que poderia se originar pela 
// possibilidade de um nó ser seu próprio ancestral/descendente. Um filho é um descendente próprio. 
// Uma vez que definimos o grau de um nó, definiremos o grau de uma árvore como sendo o maior valor 
// entre os graus de seus nós. Uma árvore de grau 2 é chamada binária, de grau 3, ternária e uma 
// árvore genérica de grau m, m-ária.

// Voltando ao nosso exemplo da Árvore na Figura 1, o nó A é o nó raiz da árvore, enquanto o nó C é 
// nó raiz da subárvore direita de A. A é pai de C, que é irmão de B e D é neto de A. Os nós B, D e 
// E são nós folhas, enquanto A e C são nós interiores. Nesse exemplo, os nós A e C possuem grau 2 e 
// B, D e E grau zero.

// Atenção
// Outra definição importante é a de caminho ou percurso em uma árvore. Dada uma sequência de nós 
// distintos entre si n₁, n₂, ... nᵢ, se entre dois nós consecutivos quaisquer sempre existir uma 
// relação do tipo “é pai de” ou do tipo “é filho de”, então a sequência define um caminho ou 
// percurso da árvore. Neste caso, n₁ alcança nᵢ e vice-versa.

// Convém notar que a imposição da existência de relação de ancestralidade garante que o caminho 
// seja sempre verticalizado. Ou seja, nós irmãos estão excluídos, não podendo formar entre si um 
// caminho. Isto fica claro de se ver revisitando a Figura 1. ACE definem um caminho na árvore, 
// mas ABC não (pois não há relação de ancestralidade entre B e C). Este exemplo também é útil 
// para mostrar que um caminho de 3 vértices envolve 2 pares consecutivos de vértices (AC e CE).

// Generalizando, um caminho de q vértices, tem q - 1 pares consecutivos. Assim, o comprimento 
// de um caminho de q nós é dado pelo número de pares de relação deste caminho, ou seja, q -1.

// Mais uma definição importante é a de nível de um nó. Define-se o nível de um nó como sendo 
// o número de nós no caminho da raiz até o nó considerado. O nível do nó raiz é, portanto, 1.

// Lembre-se de que, pela definição, as subárvores de uma árvore sempre formam conjuntos disjuntos. 
// Isto significa que sempre há um, e somente um, caminho de um nó até a raiz.

// Já a altura de um nó é definida de maneira invertida. Ou seja, a altura de um nó t é o número 
// de nós do maior caminho de t até um de seus nós descendentes. Neste caso, as folhas têm altura 1.

// Exemplo
// Observe que, nesta definição, admite-se a existência de mais de um caminho do nó considerado até 
// as folhas. É essencial que você perceba que isto não contraria a inexistência de ciclos em uma 
// árvore. Basta reparar que, ao se caminhar em direção às folhas, há uma multiplicidade de caminhos 
// possíveis, conforme o grau de cada nó. Na Figura 1, por exemplo, há 3 caminhos levando do nó A 
// até as folhas. Entretanto, se fixarmos a folha, temos novamente um, e somente um, caminho. A 
// definição de altura do nó, contudo, deixa em aberto a escolha da outra extremidade do caminho, 
// pois estamos interessados no caminho mais longo. Assim, olhando novamente o exemplo, a altura do 
// nó A é 3, apesar de existir um caminho mais curto até uma folha (AB).

// A partir da definição de nível de um nó, podemos definir a altura de uma árvore, representada por 
// h(T), como sendo o maior valor entre os níveis de seus nós. Analogamente, temos que a altura de uma 
// subárvore de raiz v, representada por h(v) é definida da mesma forma, considerando-se apenas os nós 
// que pertencem à U(v) (U sendo uma subárvore de T com raiz em v). Para o exemplo da Figura 1, a Tabela 
// 1 mostra o nível e altura de cada nó. A árvore, a seu turno, tem altura 3 e grau 2 (é uma árvore binária).
/** Tabela 01
 * +------+---------+----------+--------+
 * |  Nó  |  Nível  |  Altura  |  Grau  |
 * |  A   |    1    |     3    |    2   |
 * |  B   |    2    |     1    |    0   |
 * |  C   |    2    |     2    |    2   |
 * |  D   |    3    |     1    |    0   |
 * |  E   |    3    |     1    |    0   |
 * +------+---------+----------+--------+
 */

// O último conceito que vamos apresentar nesta subseção é o de árvores ordenadas. Diz-se que uma 
// árvore é ordenada quando os filhos de cada um de seus nós estão ordenados. Vamos convencionar 
// que essa ordenação se dá da esquerda para a direita. Observando-se a árvore da Figura 1, é fácil 
// ver que se trata de uma árvore ordenada, pois todos os seus nós estão ordenados alfabeticamente 
// da esquerda para a direita. O conceito de árvores ordenadas implica que a posição relativa das 
// subárvores é importante.

// Assim, as árvores da Figura 8 e Figura 9 são diferentes entre si, se consideradas ordenadas.
