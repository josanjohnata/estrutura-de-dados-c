// Classificação dos algoritmos de ordenação
// Os algoritmos de ordenação podem ser classificados segundo diversos parâmetros:
// - Complexidade computacional.
// - Complexidade de espaço.
// - Ordenação interna ou externa.
// - Caráter recursivo.
// - Estabilidade.

// Cada uma destas características é importante e será discutida a seguir.

// Complexidade computacional
// O estudo da complexidade computacional é um pré-requisito para o estudo dos algoritmos de ordenação.

// Entretanto, em linhas gerais, podemos dizer que determinar a complexidade computacional de um algoritmo 
// é encontrar uma função matemática.
//  ƒ: N R, tal que k f(n), onde k > 0 R e n N é o tamanho da instância.

// A função f é cota assintótica superior para o número de operações elementares necessárias para um 
// algoritmo A resolver todas as instâncias de tamanho n.  

// A cota assintótica descrita acima define a notação O, isto é, diz-se que g é O(f) se existe um 
// n0 N e um k > 0 R, tal que para todo n > n0, k * f(n) > g(n).

// A introdução da notação O permite que a análise de complexidade computacional classifique os 
// algoritmos em classes que determinam seu desempenho. Os algoritmos mais eficientes são aqueles 
// que executam em um tempo proporcional a uma constante e, a partir daí, temos o aumento do tempo 
// de execução segundo as ordens definidas na Tabela 1.

/**
 * Tabela 1
 * +-----------+-------------------+
 * |   Ordem   | Tempo de Execução |
 * +-----------+-------------------+
 * |    O(1)   |         |         |
 * |  O(log n) |         |         |
 * |    O(n)   |         |         |
 * | O(n log n)|        \ /        |
 * |    O(n2)  |         V         |
 * +-----------+-------------------+
 */

//  A frieza da Matemática não traduz com precisão a separação existente nesta classificação. Para 
//  exemplificar, vamos comparar uma busca linear em um vetor, que procura por todos os elementos 
//  do vetor, com a busca binária.

// A ideia básica do algoritmo de busca binária é simples. Seja V um vetor ordenado. A busca binária 
// compara a chave buscada com o elemento central do vetor (n/2, onde n é o tamanho do vetor). Caso 
// a chave seja igual ao elemento buscado, temos o sucesso, caso contrário, a chave buscada pode ser 
// maior ou menor. Conforme o caso, buscamos recursivamente na metade superior ou inferior do vetor.

// Este algoritmo tem complexidade O(log n) e a busca linear O(n).

// Exemplo
// Imaginemos agora que desejamos buscar uma chave em um vetor de 106 elementos. Com a busca linear, 
// teríamos que realizar 106 comparações. Aplicando a busca binária, teremos log2 106 ≅ 20 comparações. 
// Isto é a mudança na classificação de ordem e implica numa mudança significativa na quantidade de 
// operações elementares executadas.

// Existe um resultado importante em relação à complexidade computacional dos algoritmos de ordenação,
// que são baseados na comparação entre dois elementos do vetor que desejamos ordenar. Existe um limite 
// inferior para complexidade destes algoritmos, que é O(n log n).

// Podemos visualizar este resultado modelando a ordenação como um problema de decisão. Assim, pode-se 
// montar uma árvore de decisão que modele as comparações entre elementos deste vetor. Cada nó interno 
// da árvore de decisão é a comparação entre dois elementos do vetor, e as folhas desta árvore as 
// permutações obtidas pelo algoritmo. Como temos n! permutações, temos n! folhas nesta árvore de decisão. 
// Sabemos também que a árvore de decisão é uma árvore binária (a comparação entre dois elementos x e y só 
//   pode fornecer dois resultados: x < y ou x > y).

// Sendo assim, os algoritmos mais eficientes de ordenação geram árvores de decisão de altura mínima, isto 
// é, árvores completas. Ou seja, se determinarmos a altura da árvore de decisão mínima (árvore completa), 
// determinamos a quantidade mínima de comparações para ordenar um vetor.

// Como a árvore é completa com n! folhas, sabe-se que esta árvore possui 2(n!) nós, porém 2(n!) < nn. 
// Sabemos também que a altura da árvore completa é proporcional a log k, onde k é o número de nós da 
// árvore. Logo, a altura da árvore de decisão é menor que log (nn) = n log n, o que mostra o resultado.

// Complexidade de espaço
// A complexidade de espaço mede a quantidade de memória necessária para que o algoritmo seja executado. 
// O usual é que o algoritmo execute necessitando O(n) bytes, isto é, somente o espaço necessário para 
// armazenar o vetor contendo as informações. Entretanto, é possível trocar espaço de memória por 
// complexidade computacional.

// Por exemplo, suponhamos que desejamos ordenar números inteiros contidos no intervalo [0, 100000], 
// armazenados em um vetor V de tamanho n. Podemos instanciar um vetor AUX de tamanho 100000, inicializar 
// este vetor com valor zero, por exemplo, e percorrer o vetor a ser ordenado da seguinte forma:
// 1	Para i = 1 até n
// 2		aux [V[i]]=1;

// Após esta operação, percorremos o vetor auxiliar, colocando em V os valores do índice que não possuem 
//valor zero.
// 1	j=0;
// 2	para i = 0 ate 100000
// 3		se (aux[i] == 1)
// 4			inicio
// 5				V[j]=i;
// 5				j++;
// 7			fim

// Após o término do loop acima, o vetor V estará ordenado.

// A análise da complexidade computacional nos remete a um algoritmo que executa em O(n). Entretanto, a 
// análise não leva em conta que o algoritmo aloca memória proporcional ao tamanho do conjunto universo 
// das chaves (observe que o conjunto universo é o intervalo [0-100000]).

// Ou seja, a análise teórica da complexidade computacional do algoritmo nos indica um algoritmo de 
// ordenação muito eficiente em termos de complexidade de tempo, porém, muito ineficiente em termos de 
// complexidade de espaço, uma vez que necessita de uma memória proporcional ao tamanho do universo.

// Observe que a análise de complexidade de tempo para este caso é tendenciosa. Isto é, despreza o fato 
// de que a memória precisa ser inicializada e este passo consome recursos computacionais. Algoritmos 
// cuja linearidade não é proporcional ao tamanho da instância, e sim ao tamanho do conjunto universo 
// são chamados de algoritmos pseudolineares e, normalmente, possuem complexidade computacional alta.

// Ordenação interna x externa
// Esta característica refere-se ao local onde os dados estão armazenados. Como sabemos, todo computador 
// tem a memória principal ou memória RAM e a memória secundária, no caso, disco rígido ou memória de 
// estado sólido.

// São duas as principais diferenças entre estes tipos de memória:
// - A forma de acesso.
// - A velocidade de acesso.

// A memória principal é acessada aleatoriamente, isto é, pode-se acessar byte a byte da memória 
// independentemente. Já o acesso à memória secundária é feito por blocos, isto é, a menor porção 
// que pode ser recuperada é um bloco, normalmente múltiplo de 512 Kbytes.

// Em relação à velocidade, a memória principal é muito mais rápida que a secundária. O tempo de 
// acesso à memória principal é da ordem de nanosegundo 1x10⁻⁹, enquanto a memória secundária é 
// acessada em milissegundo 1x10⁻³.

// Os algoritmos de ordenação interna executam somente com todos os dados presentes na memória 
// principal, enquanto os algoritmos de ordenação externa são capazes de ordenar dados contidos 
// em memória secundária.

// Atenção
// Vale destacar que os algoritmos de ordenação externa não são capazes de abstrair completamente a 
// memória principal, isto é uma impossibilidade no paradigma de von Neumann. Para a execução de um 
// programa, o código e os dados devem estar em memória principal. Assim sendo, um algoritmo de 
// ordenação externa copia parte dos dados para a memória principal, trata estes dados e armazena o 
// resultado (a sequência ordenada) em memória secundária.

// Caráter recursivo
// Outra característica dos algoritmos de ordenação é o caráter recursivo. Alguns algoritmos são recursivos, 
// normalmente aplicando a estratégia dividir para conquistar. Outros são sequenciais.

// Um exemplo de algoritmo recursivo de ordenação é o Merge Sort. A ideia do algoritmo é dividir o vetor a 
// ser ordenado em duas metades, ordenar estas metades e intercalar o resultado da ordenação obtendo o vetor 
// ordenado.

// A ordenação das metades do vetor é feita aplicando o algoritmo recursivamente. A Figura 1 mostra o exemplo 
// do processo.

// A Figura 1 ilustra o processo do algoritmo recursivo. Na primeira linha do diagrama, temos o vetor original 
// de oito elementos, que é dividido em duas metades de quatro elementos. Cada um destes vetores de quatro 
// elementos é dividido em dois vetores de dois elementos (terceira linha do diagrama). Os vetores de dois 
// elementos são divididos em vetores de um único elemento, os problemas infantis, isto é, que naturalmente 
// já estão resolvidos.

// Em seguida, inicia-se o passo da concatenação. No passo da concatenação, juntam-se, sempre dois a dois, 
// vetores do nível anterior. Isto é, vetores de um elemento são aglutinados em vetores de dois elementos, 
// de dois elementos em quatro elementos e, de quatro elementos no vetor final.

// O processo de concatenação de vetores é simples. Basta selecionar o menor elemento entre os dois vetores 
// e colocar na primeira posição do novo vetor. Em seguida, pega-se o segundo menor elemento, colocando na 
// segunda posição. Repete-se este processo até todos os elementos serem concatenados em um único vetor. O 
// resultado final é o vetor ordenado.

// Em particular, este algoritmo é baseado na comparação entre dois elemento do vetor, isto é feito no passo 
// de concatenação e, por isso, o algoritmo não pode ter complexidade inferior a O(n log n). A complexidade 
// deste algoritmo é, de fato, O(n log n). Para realizar a análise, não é necessário estudar o código do 
// algoritmo. A Figura 1 é um bom instrumento de análise.

// Na Figura 1, cada linha representa a divisão do vetor em duas metades e de suas metades recursivamente 
// (daí o caráter recursivo do algoritmo). Vejamos quantas linhas temos até a linha dos problemas infantis.

// Linha 1 vetor original n/2⁰
// Linha 2 metade do vetor original n/2¹
// Linha 3 metade da metade do vetor original n/2²
// .....
// Linha k dos problemas infantis n/2ᴷ⁻¹

// Porém, sabemos que na linha k os problemas são de tamanho = 1, assim 1 = n/2ᴷ⁻¹, logo n = 2ᴷ⁻¹. Aplicando 
// log₂ temos log₂n = log₂2ᴷ⁻¹, que fornece k-1 = log₂n, k = log₂n + 1

// Ou seja, temos log₂n + 1 linhas. Na Figura 1, n = 8, log₂8 = 3, k = 4 linhas até o problema infantil. O 
// processo se repete na concatenação. Porém, na concatenação acessamos uma vez cada elemento do vetor, assim, 
// em cada linha temos uma complexidade de n como temos log₂n linhas para concatenar. A complexidade do algoritmo 
// é O(n log n).

// Estabilidade
// Diz-se que um algoritmo de ordenação é estável quando elementos que são apresentados já na ordem correta são 
// mantidos durante a execução do algoritmo. Assim, se for apresentada uma sequência já ordenada para um algoritmo 
// estável, o algoritmo não irá realizar nenhuma operação de troca.

// Um efeito da estabilidade é a possível redução do número de operações elementares necessárias para execução do 
// algoritmo. Porém, o efeito da estabilidade é percebido nas instâncias com os melhores casos e não nos piores 
// casos. Assim, a estabilidade do algoritmo não tem impacto na complexidade computacional teórica.
