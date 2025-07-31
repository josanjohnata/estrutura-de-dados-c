// Método da seleção (Selection Sort)
// O método da ordenação por seleção é um algoritmo simples.

// O algoritmo é iterativo e parte do princípio que a sequência não está ordenada e que todos os 
// elementos da sequência estão fora de sua posição.

// Na primeira iteração, o algoritmo analisa a sequência S = s1, s2, ..., sn e determina o menor 
// elemento desta sequência. Seja sk = s’1 este elemento. Em seguida, o algoritmo troca s’1 com s1. 
// Obtendo a sequência S = s’1, s2, ..., s1, ..., sn.

// Na segunda iteração, como s’1 é o menor elemento, s’1 está na posição correta. Ou seja, s’1 é o 
// primeiro elemento da sequência ordenada. Nesta iteração, o algoritmo irá determinar o menor 
// elemento entre s2, ..., s1, ..., sn, que será o segundo menor elemento da sequência ordenada. 
// Seja sj o menor elemento entre s2, ..., s1, ..., sn, seja s’2 = sj. Trocando sj = s’2 com s2, 
// temos a sequência s’1, s’2, s3 ..., s1, ..., s2, ..., sn. Ao término da segunda iteração, s’1, s’2 
// correspondem aos dois primeiros termos da sequência ordenada.

// Repetimos cada iteração n-1 vezes, assim teremos a sequência ordenada completando a execução do 
// algoritmo. Utilizando a sequência 13, 25, 8, 19, 7, 52 como exemplo, vamos executar o algoritmo.
// 1ª iteração: 13, 25, 8, 19, 7, 52; 7 é o menor elemento
// 2ª iteração: 7, 25, 8, 19, 13, 52; 8 é o menor elemento
// 3ª iteração: 7, 8, 25, 19, 13, 52; 13 é o menor elemento
// 4ª iteração: 7, 8, 13, 19, 25, 52; 19 é o menor elemento
// 5ª iteração: 7, 8, 13, 19, 25, 52; 25 é o menor elemento
// 6ª iteração: 7, 8, 13, 19, 25, 52; 52 é o menor elemento
// Fim de execução

// A complexidade computacional do algoritmo é O(n²). Este fato pode ser provado analisando o número de 
// iteração e a quantidade de operações por iteração. O primeiro passo para a análise é determinar a 
// operação fundamental do algoritmo. A cada iteração, necessitamos o valor mínimo de uma sequência de n 
// elementos. A operação básica para isto é a comparação.

// Na primeira iteração, temos que determinar o menor elemento de uma sequência de n elementos. Para isto, 
// é necessário realizar n comparações. Na segunda iteração, temos que determinar o menor elemento de uma 
// sequência de n-1 elementos, e assim por diante. Assim, temos:
// 1ª iteração: n-1 comparações
// 2ª iteração: n-2 comparações
// ...
// n-1ª iteração: 1 comparação

// Logo, o número de operações elementares é: n-1 + n-2 + ... + 1 = (n)(­n-1)/2 que é O(n²). Um aspecto relevante 
// na análise de complexidade do método da seleção é que não existe um tipo de instância de pior caso, para todas 
// as instâncias o algoritmo executa de mesma forma em O(n2).

// Em relação às demais características do algoritmo: É estável, porém, dependendo de como for implementado, esta 
// característica pode ser perdida, entretanto não há impacto na complexidade, não recursivo, tem complexidade de 
// espaço de O(n).

// O código em C é fornecido abaixo. Programa 2.
// void selecao (int *v)
// {
//   int i,j,aux;
//   for (i=0; i < TAMANHO-1; i++)
//   {
//     for (j=i+1; j < TAMANHO; j++)
//     {
//       if (v[i] > v[j])
//       {
//         aux = v[i];
//         v[i] = v[j];
//         v[j] = aux;
//       }
//     }
//   }
// }

// O código acima apresenta a versão menos estável do algoritmo. Observe que trocamos o valor armazenado na posição 
// i do vetor com o menor valor da sequência i+1 até o tamanho do vetor. Uma forma de fazer isto é trocar todo 
// elemento v[j] < v[i], está conceitualmente correto, porém reduz a estabilidade do algoritmo.

// Podemos melhorar a estabilidade do algoritmo realizando a execução em dois passos: No primeiro, elege-se o elemento 
// mínimo e, no segundo passo, realiza-se a troca com o elemento na posição i. O Programa 3 está implementado desta forma.
// void selecao (int *v)
// {
//   int i,j,aux, minimo, pos_minimo;
//   for (i=0; i < TAMANHO-1; i++)
//   {
//     minimo = v[i];
//     pos_minimo = i;
//     for (j=i+1; j < TAMANHO; j++) // Passo 1 
//     {
//       if (minimo > v[j])
//       {
//         minimo = v[j];
//         pos_minimo = j;
//       }
//     }
//     if (pos_minimo != i)  // Passo 2
//     {
//       aux = v[pos_minimo];
//       v[pos_minimo] = v[i];
//       v[i] = aux;
//     }
//   }
// }
