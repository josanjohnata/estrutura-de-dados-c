// Teoria na prática
// Para ilustrar, retomemos o exemplo dado no primeiro parágrafo dessa subseção, considerando uma 
// fila com implementação circular e um vetor cuja posição inicial tenha índice 1.

// RESOLUÇÃO
// Utilizemos uma variável “I” para controlar a posição inicial da fila e “F” para a posição do fim. 
// Vimos que as inserções e remoções causariam um deslocamento aparente na fila. Imagine agora que 
// uma inserção foi feita, ocupando a N-ésima posição do vetor, e que houve pelo menos uma remoção da 
// fila. Nessa situação, sabemos que F = N e I > 1.

// Caso se tente fazer uma nova inserção, esta terá que ser feita na posição seguinte à N-ésima, que 
// no caso da lista circular, é a primeira posição do vetor. Como já houve ao menos uma remoção, 
// podemos afirmar que a primeira posição está disponível.

// Nessa situação, o fim da fila passa a ser a primeira posição, nos levando a F = 1 e I > 1. Portanto, 
// I > F, ou seja, temos uma situação na qual o índice da posição inicial da fila é maior do que o índice 
// da posição final.

// A situação anterior aborda a inserção, mas a remoção também se comportará de forma semelhante. Consideremos 
// que após um certo número de operações, o início da fila continuou se deslocando até que I = N (o início da 
// fila está na N-ésima posição). O comportamento no caso de uma nova remoção da fila é mover o início da fila 
// para a primeira posição do vetor (pois esta é a posição subsequente à N-ésima numa lista circular), de forma 
// que I ≤ F.

// É preciso perceber que quando a fila só tem um elemento, I = F. O valor de I e F, nesse caso, dependerá das 
// operações realizadas, pois o elemento pode estar em qualquer posição da lista.

// Uma fila vazia, por sua vez, deverá ser identificada por algum valor de I e F convencionados e fora dos 
// limites do vetor (por exemplo, I = F = -1 ). A remoção do único elemento existente em uma fila deverá, 
// dessa forma, fazer com que I e F tenham o valor igual a -1, que é o valor convencionado para indicar lista 
// vazia. Você não pode deixar de perceber que apenas se alguma das variáveis, I ou F, for diferente do valor 
// convencionado para fila vazia, a outra também o será obrigatoriamente. Veja, quando um elemento é inserido 
// numa fila vazia, I = F = 1.

// Um caso que talvez esteja lhe fazendo pensar é como identificar que a fila está cheia. Para determinarmos 
// isso, precisamos considerar duas situações distintas:
// - A primeira é relativa ao caso em que a fila simplesmente recebe novos elementos, sem nenhuma remoção. Nesse 
// caso, a fila estará cheia se I = 1 e F = N.
// - A segunda situação é quando houve remoções na fila, o que fez com que I > 1. Nessa hipótese, não é suficiente 
// testar se F = N, pois há espaço livre antes de I (afinal, é uma lista circular).

// A fila se encontrará cheia numa situação como essa se, e somente se, I = F + 1. Ou seja, caso o início da fila 
// esteja na posição imediatamente posterior ao seu fim.

// Você pode imaginar que a fila cresceu até que seu fim tocou seu início, completando o círculo. No raciocínio 
// desenvolvido até agora, utilizamos um vetor cujo índice da primeira posição é 1. No caso de linguagens, como 
// a C, o vetor inicia-se em 0 (zero), o que deve ser considerado para ajustar a lógica. O Código 13 e o Código 
// 14 exibem, respectivamente, a implementação das funções para enfileirar (enqueue) e desenfileirar (dequeue). 
// MAX_FILA é o tamanho máximo do vetor.

// Código 13: Função enfileirar.
// 1	int enfileirar ( Elemento elemento ) {
// 2		if ( !( ( inicio == 0 && fim == MAX_FILA - 1 ) || ( inicio == fim + 1 ) ) ) {
// 3			if ( ( fim == MAX_FILA - 1 ) || ( fim == -1 ) ) {
// 4				fila [ 0 ] = elemento;
// 5				fim = 0;
// 6				if ( inicio == -1 )
// 7					inicio = 0;
// 8				} else {
// 9					fila [ ++fim ] = elemento;
// 10					return 1; //sucesso
// 11				} else
// 12					return 0; //falha
// 13	 }
// 14 }

// No Código 13, a linha 2 verifica se a fila está cheia. Em seguida, a linha 3 verifica se o fim da fila 
// está na última posição do vetor ou se a fila é vazia. Já a linha 9 é executada se o fim da fila não 
// estiver na última posição do vetor e a fila não for vazia. E a linha 12 indica a falha caso seja tentada 
// uma inserção em uma fila cheia.

// Código 14: Função desenfileirar.
// 1	Elemento desenfileirar ( void ) {
// 2		Elemento elem_temp;
// 3		if ( inicio != -1 ) {
// 4			elem_temp = fila [ inicio ];
// 5			if ( inicio == fim )
// 6				fim = inicio = -1;
// 7			else if ( inicio == MAX_FILA - 1 )
// 8				inicio = 0;
// 9			else {
// 10				inicio++;
// 11				return elem_temp;
// 12			} else
// 13				return NULL; //falha
// 14	}
// 15 }

// Na função de desenfileiramento mostrada no Código 14, a linha 3 evita a remoção em uma lista vazia e a 
// linha 5 visa a identificar se após a retirada do elemento da fila, ela vai se tornar vazia. A linha 7 
// implementa a circularidade na remoção, enquanto a linha 10 corresponde às remoções nas demais situações.

// Comentário
// Observe que, em ambos os casos, o número de passos dos algoritmos não varia. Os elementos também não são 
// desalocados de fato. Como em todos os casos que já vimos de alocação sequencial, apenas as posições dos 
// elementos removidos se tornam livres para serem sobrescritas.
