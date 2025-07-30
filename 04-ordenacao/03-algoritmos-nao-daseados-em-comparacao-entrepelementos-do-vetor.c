// Algoritmos não baseados em comparação entre elementos do vetor
// Os algoritmos de ordenação mais comuns se baseiam na comparação entre dois elementos da sequência 
// a ser ordenada e alguma operação, normalmente a troca de posição, sobre os elementos comparados. 
// Entretanto, existem algoritmos capazes de ordenar uma sequência sem comparar os elementos da sequência 
// dois a dois.

// Para estes algoritmos, o teorema que determina o limite inferior da ordenação como O(n log n) não se 
// aplica, uma vez que sua premissa é invalidada, isto é, a árvore de decisão não é “montada” pelo algoritmo. 
// Portanto, é teoricamente possível existirem algoritmos de ordenação desta classe que possuem complexidade 
// inferior a O(n log n).

// Exemplo
// Um exemplo de algoritmo de ordenação não baseado em comparações entre elementos da sequência é o 
// bucket sort ou método do balde. Este algoritmo aplica-se quando desejamos ordenar uma sequência de 
// inteiros, na qual conhecemos a quantidade máxima de dígitos desses inteiros.

// O princípio de funcionamento do algoritmo é simples. Executamos uma iteração para cada ordem numérica, 
// da maior ordem para a menor ordem. Em cada iteração, separamos por dígito (de 0 até 9) pertencente à 
// ordem analisada. Na próxima iteração, analisamos a ordem numérica inferior. Ao final, concatenamos a 
// sequência obtendo a ordenação.
