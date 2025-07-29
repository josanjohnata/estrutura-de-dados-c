// Filas em alocação sequencial
// Como vimos, a implementação de filas demanda o controle de duas posições, o início e o fim.

// A posição final é aquela na qual ocorrem as inserções, e por isso, por onde a lista aumenta. 
// A posição inicial é onde ocorrem as remoções, sendo por onde a fila é encurtada. Isso acarreta 
// um problema para a alocação sequencial.

// Imagine uma fila implementada através de um vetor com N posições. Inicialmente, a fila está vazia. 
// Após a chegada do primeiro elemento, a primeira posição do vetor é ocupada. Com a chegada de um 
// segundo elemento, ocupa-se a segunda posição. Suponha que, nesse momento, um elemento seja retirado 
// da fila. Nesse caso, o início da fila, que era a primeira posição, torna-se a segunda posição (a 
// primeira agora está desocupada).

// Comentário
// Perceba que, ao longo do tempo, conforme inserções e remoções sejam feitas na fila, esta realiza um 
// deslocamento aparente no sentido da sua retaguarda. As posições inicial e final têm índices sucessivamente 
// maiores.

// Mesmo se as inserções forem superadas pelas remoções, é possível afirmar-se que, com certeza, a posição 
// inicial se deslocará em direção à retaguarda. Assim, duas situações podem ocorrer:
// - Novas inserções podem ser impedidas, devido ao fim da fila atingir o fim do vetor.
// - O desperdício de memória relativo aos espaços desocupados antes do início.

// Uma possível solução para essa questão seria deslocar todos os elementos da fila uma posição em direção ao 
// início, sempre que houver uma remoção. Dessa forma, o início da fila seria sempre mantido na primeira posição 
// do vetor e, de fato, quando uma inserção não fosse possível seria devido ao vetor estar preenchido.

// Outra abordagem possível é implementar a fila através de uma lista circular. Nesse caso, o vetor comporta-se 
// como se após a última posição, estivesse a primeira. Ou seja, uma vez que o fim da fila atinja o fim do vetor, 
// uma nova inserção será possível se a primeira posição estiver livre.
