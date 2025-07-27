// Entendendo a alocação encadeada
// No caso da alocação sequencial, a relação entre os elementos da lista é trivialmente construída. 
// Para que o “i-ésimo” elemento seja posterior ao “(i-1)-ésimo” elemento, basta que eles sejam 
// inseridos, respectivamente, nas posições “i” e “i-1” do vetor. Entretanto, como veremos, o mesmo 
// não se dá na alocação encadeada.

// Comentário
// A primeira coisa que precisamos ter em mente é que o conceito de lista visto na seção anterior 
// continua válido. O que muda é apenas o mecanismo usado para implementar uma lista.

// A ideia por trás da alocação encadeada é simplesmente alocar os espaços de memória suficientes para 
// guardar os elementos individualmente e encadeá-los de forma a manter a relação entre eles.

// Assim, cada elemento da lista ocupará uma posição de memória que pode ou não ser adjacente às demais.

// É claro que isso traz um problema óbvio: Como acessar os elementos da lista?

// Revendo a alocação sequencial, lembramos que todos os elementos eram acessíveis por ser o índice do 
// vetor um deslocamento a partir do endereço base do mesmo, endereço esse que era conhecido. Logo, 
// através de cálculos simples, todas as posições de memória podiam ser acessadas.

// Esse, contudo, não, é o caso aqui. Os elementos na alocação encadeada estão armazenados em posições 
// quaisquer da memória. Logo, não há uma forma de se calcular o endereço dessas posições. A solução 
// para esse problema, todavia, é simples. Basta que em cada elemento, adicionemos um campo (ponteiro) 
// responsável por guardar o endereço de memória do elemento seguinte.

// Na alocação encadeada, cada elemento é chamado de nó.

// Vamos criar um nó especial, chamado “nó cabeça”, cuja finalidade é apenas simplificar as operações sobre 
// a lista. A criação desse nó não é obrigatória, mas usá-lo evitará uma série de testes lógicos que 
// precisaríamos fazer.

// O endereço para o nó cabeça precisa ser conhecido sempre.

// Assim, precisaremos, de um ponteiro que guarde o seu endereço. Quando a lista for vazia, existirá apenas o 
// nó cabeça e o seu campo “prox” terá valor nulo (null, em linguagem C), indicando que não há nenhum nó criado.

// Perceba que a lista criada como descrito acima somente permite o movimento em um sentido, pois nenhum nó tem 
// o endereço do nó anterior. Essa restrição, não existente na alocação sequencial, dá origem às listas do tipo 
// “simplesmente encadeadas”.

// Mas não há óbices a que se crie nos elementos mais um campo ponteiro responsável por guardar o endereço do 
// elemento anterior, apesar do maior gasto de memória. Essas listas são do tipo “duplamente encadeadas” e nesse 
// caso o duplo apontamento permite que o movimento ocorra nos dois sentidos.

// A Figura 2 mostra uma representação simbólica de uma lista simplesmente encadeada, enquanto a Figura 3 mostra 
// uma lista com duplo encadeamento.

// Figura 2: Lista simplesmente encadeada.

// Figura 3: Lista duplamente encadeada.

// Comentário
// Outra coisa a ser notada é que o mecanismo de alocação dinâmico é mais apropriado para as listas encadeadas.

// Portanto, essas listas são geralmente empregadas em situações cujo tamanho só é conhecido em tempo de execução.

// Exemplo
// Por exemplo, suponha que um programa deseje manter em memória, por uma questão de desempenho, todos os registros 
// de uma agenda telefônica. Cada entrada da agenda corresponderá a um nó. Mas o tamanho da agenda, além de ser 
// variável, só poderá ser determinado por ocasião da execução.

// Aliás, o limite para o crescimento de listas encadeadas dinamicamente alocadas é a quantidade de memória disponível 
// no sistema.

// Listas simplesmente ou duplamente encadeadas têm vantagens e desvantagens distintas. Além disso, as operações precisam 
// ser ajustadas segundo o tipo de lista. A criação e a desalocação dos nós também são diferentes do que ocorre na alocação 
// sequencial. Veremos essas e outras situações em mais profundidade na próxima subseção.
