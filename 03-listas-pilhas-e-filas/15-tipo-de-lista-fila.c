// Tipo de lista: Fila
// Uma fila é um tipo particular de lista mais elaborado do que a pilha. No caso de filas, as 
// operações de inserção e remoção ocorrem em duas extremidades.

// As inserções sempre ocorrem no final ou retaguarda da fila, enquanto as remoções são 
// executadas na outra extremidade, denominada início.

// As filas obedecem à regra “O primeiro a chegar é o primeiro a sair”, também chamada de FIFO, 
// do inglês first in, first out. Por essa razão, precisamos de dois controles para a fila:
// - Um para identificar o início da fila.
// - Outro para marcar o seu término.

// Comentário
// Se uma pilha tem a capacidade de inverter a ordem, a fila tem a propriedade de manter a ordem 
// dos elementos.

// Isso decorre do fato de que as remoções ocorrem na mesma ordem que as inserções. Ilustremos 
// essa situação.

// Suponha que vamos enfileirar o conjunto de entrada a, b, c, d, e. Usaremos a mesma simbologia 
// de pilhas, mas, nesse caso, o símbolo de “{“ representa o início da fila e o símbolo de “}” o 
// seu final.

// Inicialmente, a fila está vazia e as entradas são lidas na ordem em que aparecem. A Tabela 3 
// mostra o processamento das entradas pela fila. De maneira similar à pilha, a operação de 
// enfileirar (enqueue) recebe como parâmetro o elemento a ser inserido na fila, mas a operação 
// de desenfileirar (dequeue) não possui parâmetro.

/**
 * Tabela 3: Processamento de uma cadeia através de uma fila.
 * +---------------+---------------+-----------------+----------------+----------------+
 * | Entrada       | Enfileirar    |       Fila      |  Desenfileirar |      Saída     |
 * +---------------+---------------+-----------------+----------------+----------------+
 * | a, b, c, d, e | enqueue ( a ) | {}              |                |                |
 * | a, b, c, d    | enqueue ( b ) | {a}             |                |                |
 * | a, b, c       | enqueue ( c ) | {a, b}          |                |                |
 * | a, b          | enqueue ( d ) | {a, b, c}       |                |                |
 * | a             | enqueue ( e ) | {a, b, c, d}    |                |                |
 * |               |               | {a, b, c, d, e} | dequeue ()     |                |
 * |               |               | {b, c, d, e}    | dequeue ()     | a              |
 * |               |               | {c, d, e}       | dequeue ()     | a, b           |
 * |               |               | {d, e}          | dequeue ()     | a, b, c        |
 * |               |               | {e}             | dequeue ()     | a, b, c, d     |
 * |               |               | {}              |                | a, b, c, d, e  |
 * +---------------+---------------+-----------------+----------------+----------------+
 */

//  Se você observar atentamente a tabela, notará que em nossa fila de exemplo as inserções ocorreram 
//  pela direita, fazendo a fila crescer nesse sentido. Já as remoções se deram pela esquerda, 
//  provocando o seu encurtamento.

// A esquerda é o início da fila e a direita é o fim. Isso pode gerar um problema para filas em alocação 
// sequencial, o que torna sua implementação nesse caso ligeiramente mais complexa. Vamos explorar isso 
// na subseção que trata de filas alocadas sequencialmente, mas procure refletir desde já e tente identificar 
// o problema.

// Assim como a pilha, a fila tem ampla aplicação.

// Exemplo
// Considere, por exemplo, a execução de programas nas CPU com múltiplos núcleos. Desconsideremos, por 
// questão de simplicidade, a existência de prioridades de execução. Quando um programa é iniciado, 
// cria-se um processo que é colocado numa fila de execução.

// À medida que os núcleos finalizam suas tarefas, os processos são retirados da fila e postos em execução 
// no núcleo vago, garantindo-se, assim, que todos sejam atendidos. Na prática, essa sistemática é bem mais 
// elaborada, pois há prioridades de execução e preempção, por exemplo. A prioridade de execução pode levar 
// um processo a ser atendido antes de outro que foi enfileirado primeiro.

// Já a preempção pode tirar de execução um processo, antes deste terminar, permitindo ao núcleo atender a 
// outro processo. Contudo, todas essas características são implementadas através de filas (por exemplo, 
// uma fila de prioridades), não havendo violação do princípio FIFO. O agendamento de processos faz largo 
// emprego de filas, com estruturas bem complexas, como filas multinível.

// Outro exemplo do uso de filas, também se desconsiderando a existência de parâmetros que alterem a ordem 
// de execução, é a implementação de uma fila de impressão. Nesse exemplo, múltiplos usuários podem enviar 
// diversos arquivos para a impressão num mesmo equipamento. Esses arquivos, ao serem recebidos, são colocados 
// numa fila e são impressos seguindo a ordem de chegada. Ou seja, o primeiro a ser recebido é o primeiro a 
// ser impresso.

// Há vários outros exemplos do uso de filas, mas estes devem ter mostrado sua relevância e utilidade. Vamos 
// olhar, nas próximas subseções, os detalhes relativos à implementação de filas em alocação sequencial e em 
// alocação encadeada.
