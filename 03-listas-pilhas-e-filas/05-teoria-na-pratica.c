// Teoria na prática
// Olhemos um caso exemplar simples. Um programa que começou a ser executado solicita um espaço 
// de memória para alocar um vetor de inteiros. O problema a ser resolvido pelo sistema operacional 
// não é apenas reservar um espaço. Ele primeiro precisará varrer a sua tabela de alocação buscando 
// um espaço de memória suficientemente grande para caber o vetor.

// RESOLUÇÃO
// A situação ideal, porém, é alocar o vetor num espaço disponível idêntico ao necessário, pois isso 
// minimiza as chances de que o espaço excedente nunca seja utilizado, sendo desperdiçado.

// Para isso, não é suficiente ele reservar o primeiro espaço disponível, ele precisará verificar se 
// existe em toda a tabela um espaço de tamanho idêntico ao necessário. Essa situação ilustra bem uma 
// das formas como a fragmentação impacta a performance.

// A alocação encadeada é uma forma de se contornar esse problema, reduzindo a sobrecarga com o gerenciamento 
// de memória. Dessa forma, como veremos na próxima subseção, os espaços de memória alocados não precisam ser 
// do tamanho da lista, mas apenas do tamanho do elemento da lista, sendo suficiente que se guarde, de alguma 
// forma, a relação entre eles. A última subseção explorará a implementação de lista e suas operações através 
// desse mecanismo.
