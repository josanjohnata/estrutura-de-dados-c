// Representação computacional de árvores
// Até agora, o que falamos sobre árvores situa-se no campo teórico. Mas uma questão fundamental 
// é como uma árvore é implementada de fato num software. Uma das formas de fazê-lo é com o uso 
// de alocação sequencial (array). É perfeitamente possível implementar uma árvore com vetores, 
// embora esta não seja a maneira mais eficaz por diversos motivos:

// 1. Em primeiro lugar, um vetor limita o espaço de memória a ser utilizado pela árvore, que não 
// pode ultrapassar a quantidade definida em tempo de programação. Isto diminui as vantagens de 
// se empregar uma estrutura de dados dinâmica como a árvore.
// 2. Além disto, a unidimensionalidade do vetor torna menos intuitivo operar com a árvore 
// implementada desta forma.

// Tanto as operações quanto as relações hierárquicas entre os nós passam a depender fortemente 
// de cálculos matemáticos, trazendo um grande esforço para a programação.

// Por estas razões, não vamos nos aprofundar neste tipo pouco usual de implementação de árvores. 
// O Código 1 apresenta, apenas como ilustração, uma função em linguagem C usada para posicionar 
// uma chave à direita de um nó passado como parâmetro em uma árvore implementada por meio de um 
// vetor. Veja, na linha 6, que a posição correta do vetor que representa o filho direito de um 
// dado nó é fornecida pela fórmula (pai * 2) + 2, aonde “pai” é o índice vetorial do nó pai.
// int insere_filho_direita ( char chave, int pai ) {
//   if ( arvore [ pai ] == NULL ) {
//     printf ( “Erro: noh pai inexistente!” )
//     return 0; //falha
//   } else
//     arvore [ ( pai * 2 ) + 2 ] = chave
//   return 1; //sucesso
// }

// A outra maneira de se implementar árvores, e a mais comum, é através da alocação encadeada. Esta 
// maneira tem vantagens óbvias com relação ao uso de alocação sequencial. Ela permite que a árvore 
// cresça sob demanda, em tempo de execução. Se a árvore encolher, não há desperdício de memória, 
// pois os nós removidos são desalocados. Além disto, a implementação se torna consideravelmente mais 
// simples. É claro que, no uso de alocação encadeada, será necessário empregar tantos campos ponteiros 
// quanto for o grau da árvore e mais um campo para se guardar a chave do nó.

// Atenção
// Logo, o nó de uma árvore m-ária, com uma chave do tipo inteiro, ocupará um espaço de memória igual 
// a (m * tamanho ponteiro para o nó + tamanho da representação de inteiro). Ou, utilizando-se linguagem 
// C: m * sizeof(No*) + sizeof(int), sendo m o grau da áevore e "No" a estrutura que define o nó da árvore.

// O Código 2 mostra a estrutura de um nó de uma árvore ternária e o código 3 a generalização desta 
// estrutura para uma árvore m-ária.
// struct No {
// 	int chave;
// 	No *filho_esq;
// 	No *filho_meio;
// 	No *filho_dir;
// }

// struct No {
//   <tipo> chave;
//   No *filho_1;
//   No *filho_2;
//   [...]
//   No *filho_m;
// }

// Observe agora o Código 4, que mostra a função de inserção na subárvore direita de um nó. A linha 6 
// é onde a inserção propriamente dita ocorre. Perceba como a linha se tornou mais simples que a linha 
// 6 do Código 1 e como agora não são necessários cálculos matemáticos para se determinar a posição do 
// nó filho.

// Para ser mais preciso, tudo que ocorre agora são acessos à memória. Na verdade, ocorre apenas uma 
// escrita em memória no espaço reservado para “filho_dir”.

// Na linha 6 do Código 1, eram feitas duas operações aritméticas e uma escrita em memória. Assim, 
// podemos esperar uma performance melhor do Código 4 em comparação com o Código 1.
// int insere_filho_direita ( No novo_no, No *pai ) {
//   if ( pai == NULL ) {
//     printf ( “Erro: noh pai inexistente!” )
//     return 0; //falha
//   } else
//     pai -> filho_dir = novo_no;
//   return 1; //sucesso
// }

// É claro que o código apresentado aborda um caso simples, no qual o filho à direita do nó passado 
// como argumento ou não existe ou está sendo sobrescrito. Mas esta condição vale tanto para o Código 
// 4 quanto para o Código 1.

// Você deve notar que, no caso do Código 1, sobrescrever o nó não exige ações adicionais, já que a 
// relação hierárquica é estabelecida pela posição dos nós no vetor. No Código 4, contudo, sobrescrever 
// um nó envolve considerar a existência de filhos deste nó.

// Pelo menos duas soluções de modificação do Código 4 podem ser feitas para este caso:

// 1. A primeira consiste em se verificar se o nó a ser sobrescrito possui filhos e, neste caso, 
// atualizar apenas a chave com o novo valor.
// 2. Outra solução é fazer com que os nós filhos do nó a ser sobrescrito se tornem também filhos do 
// novo nó e depois inseri-lo na árvore na posição correta.

// Veja que sempre há vantagens e desvantagens. Portanto, a decisão de qual mecanismo de alocação a 
// ser usado deve ser sempre uma decisão técnica tomada segundo o problema a ser resolvido.

// Atenção
// Por isso, você deve ser capaz de analisar o problema e de compreender como empregar as ferramentas 
// que tem à disposição. Nas seções seguintes, veremos em mais detalhes casos especiais de árvores, 
// suas aplicações e propriedades.
