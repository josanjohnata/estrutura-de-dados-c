// Propriedades básicas
// A primeira propriedade que apresentaremos é que toda árvore com n > 1 nós possui no 
// mínimo 1 e no máximo n - 1 folhas.

// Em outras palavras, uma árvore com 5 nós (n = 5) possuirá no mínimo 1 folha e no máximo 
// 4. Isto não é difícil de se enxergar.

// O número mínimo de nós será sempre obtido tendo-se todos os nós em um mesmo galho. Ou 
// seja, se todos os n nós da árvore guardarem entre si uma relação de ancestralidade, 
// quaisquer que sejam esses nós, então o que teremos serão todos os nós alinhados 
// verticalmente da raiz até a folha. Como não há nós irmãos, temos uma única folha nessa 
// árvore. Essa é, também, a árvore mais alta que pode ser obtida com n nós: uma árvore 
// de altura n.

// Em contrapartida, o número máximo de folhas será dado pela árvore de menor altura que se 
// pode construir com n nós. Neste caso, um nó deve ser a raiz da árvore. Restam, assim, n - 1 
// nós que serão colocados como filhos do nó raiz. Assim, essa árvore, que tem altura igual a 2, 
// possui n - 1 folhas (n - 1 nós irmãos).

// Dica
// Embora esta não seja uma prova formal desta propriedade, ela deve ter lhe convencido da validade 
// da mesma. Sugerimos que você faça a prova formal como maneira de consolidar os conhecimentos. 
// Para isto, desenvolva a argumentação mostrada.

// Observe, agora, a árvore da Figura 10. Note que essa árvore possui os nós ordenados de forma 
// diferente da árvore da Figura 1. Mas você deve ter notado que há semelhanças estruturais e 
// nos elementos que formam os nós de ambas as árvores. A bem da verdade, a Figura 10 mostra uma 
// árvore que é uma imagem especular da árvore da Figura 1.

// Veja que, mediante a reordenação das subárvores da Figura 10, podemos transformá-la na árvore 
// da Figura 1. Aliás, para que as árvores se tornem coincidentes, esta reordenação é necessária 
// e suficiente. A esta propriedade, chamamos de isomorfismo e dizemos que a árvore da Figura 1 é 
// isomorfa da árvore da Figura 10 (e vice-versa).

// De maneira formal, duas árvores exibem isomorfismo quando puderem se tornar coincidentes mediante 
// a permutação na ordem das subárvores de seus nós. Obviamente, duas árvores ordenadas são isomorfas 
// quando forem coincidentes segundo sua regra de ordenação.

// Cabe esmiuçarmos um pouco mais esta propriedade.

// Dizer que as árvores podem se tornar coincidentes pela permutação de suas subárvores, implica dizer 
// que os rearranjos devem ocorrer na horizontal. Isto é, entre nós irmãos.

// A árvore da Figura 11, por exemplo, não é isomorfa da árvore da Figura 1 e nem da árvore da Figura 10. 
// Neste caso, a simples permutação na ordem das subárvores não as torna coincidentes. Para isto, faz-se 
// necessário também permutar o nível dos nós C e D.

// Além disto, para que duas árvores sejam isomorfas, não é necessário que todas as subárvores devam ser 
// reordenadas.

// Comentário
// O exemplo da Figura 10 é um caso extremo. Mas poderia ocorrer de uma ou mais subárvores já se encontrarem 
// na posição necessária.
