// Método da inserção (Insertion Sort)
// O método de ordenação da inserção é um algoritmo simples e eficiente para listas “quase” ordenadas.

// O princípio de funcionamento do algoritmo é dividir a lista em duas partes:

// Os elementos já ordenados.
// Os elementos a ordenar.
// Inicialmente, a parte da lista que contém os elementos já ordenados é o primeiro elemento (uma lista 
// unitária é sempre uma lista ordenada). Em seguida, devemos inserir o primeiro elemento da lista não 
// ordenada (segundo elemento da lista na primeira iteração) na posição correta do segmento já ordenado 
// da sequência.  O processo é repetido até que não tenhamos mais elementos na lista não ordenada.

// Vamos analisar a execução do algoritmo através de um exemplo. Seja a sequência: 16, 8, 20, 18, 9, 2.
// Início: 16, 8, 20, 18, 9, 2
// 1ª iteração: 8, 16, 20, 18, 9, 2
// 2ª iteração: 8, 16, 20, 18, 9, 2
// 3ª iteração: 8, 16, 18, 20, 9, 2
// 4ª iteração: 8, 9, 16, 18, 20, 2
// 5ª iteração: 2, 8, 9, 16, 18, 20

// Antes da primeira iteração, consideramos que o primeiro elemento “16” é a sequência ordenada e os 
// elementos “8, 20, 18, 9, 2” os não ordenados.
// Etapa 01
// Na primeira iteração, analisamos o primeiro elemento da sequência não ordenada colocando-o na sua 
// posição correta. Assim, passamos a ter “8, 16”, que é a sequência ordenada, e “20, 18, 9, 2”, que 
// é a sequência não ordenada.

// Etapa 02
// Na segunda iteração, vamos colocar o elemento “20” na posição correta que, por coincidência, já está 
// posicionado. Sendo assim, passamos a ter “8, 16, 20” como sequência ordenada e “18, 9, 2” como não 
// ordenada.

// Etapa 03
// Na terceira iteração, analisamos a chave “18”, colocando-a na sua posição correta na sequência ordenada 
// “8, 16, 18, 20”. Restando “9, 2” como não ordenada.

// Etapa 04
// Na quarta iteração, analisamos “9”, obtendo “8, 9, 16, 18, 20” e “2”.
// Na última iteração, a chave “2” é colocada em sua posição, terminando a execução.

// A complexidade deste algoritmo também é O(n²). Assim como o método da bolha, o algoritmo tem o pior 
// caso bem formado, a saber, as instâncias ordenadas em ordem reversa da desejada. Seja a sequência 
// S = s1, s2, s3, ..., sn onde s1 < s2 < s3 < ... < sn. Supondo que inicialmente apresentamos ao algoritmo 
// a sequência ordenada em ordem reversa, isto é, S’ = sn, sn-1, ..., s3, s2, s1, teremos a seguinte execução:

// Início: sn, sn-1, sn-2 ..., s3, s2, s1
// 1ª iteração: sn-1, sn, sn-2 ..., s3, s2, s1 – 1 troca
// 2ª iteração: sn-2, sn-1, sn, ..., s3, s2, s1 – 2 trocas
// ...
// n-3ª iteração: s3, ..., sn-2, sn-1, sn, s2, s1 – n-3 trocas
// n-2ª iteração: s2, s3, ..., sn-2, sn-1, sn, s1 – n-2 trocas
// n-1ª iteração: s1, s2, s3, ..., sn-2, sn-1, sn – n-1 trocas

// Somando-se a quantidade de comparações e trocas: 1 + 2 + 3 + ... + n-1 = n (n-1)/2 que é O(n²).

// Assim como os outros, o algoritmo é estável, não recursivo e com complexidade de espaço de O(n). 
// O programa em Linguagem C que implementa o algoritmo é apresentado no Programa 4.
// void insertion (int *v)
// {
//   int i, j, aux;
//   for (i=0; i< TAMANHO-1; i++)
//   {
//     j=i+1;
//     while (v[j-1]>v[j] && j > 0)
//     {
//       aux = v[j-1];
//       v[j-1]=v[j];
//       v[j]=aux;
//       j--;
//     }
//   }
// }
