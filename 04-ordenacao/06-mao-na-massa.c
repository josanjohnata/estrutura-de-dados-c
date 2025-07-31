// Mão na Massa
// Vejamos um exemplo, seja a sequência S = 15, 20, 8, 16, 40. No ábaco abaixo, vamos destacar 
// o par que está sendo comparado a cada passo. Caso a comparação seja bem-sucedida, isto é, 
// si < si+1, nada é realizado, caso contrário, efetuamos a troca.

// Na iteração completa que não ocorra troca, teremos a sequência ordenada.
// Etapa 01
// Início da 1ª iteração
// Passo 1: 15 < 20, 8, 16, 40
// Passo 2, 15, 20 > 8, 16, 40
// Passo 3: 15, 8, 20 > 16, 40
// Passo 4: 15, 8, 16, 20 < 40
// Fim da 1ª iteração

// Etapa 02
// Início da 2ª iteração
// Passo 1: 15 > 8, 16, 20, 40
// Passo 2: 8, 15 < 16, 20, 40
// Passo 3: 8, 15, 16 < 20, 40
// Passo 4: 8, 15, 16, 20 < 40
// Fim da 2ª iteração

// Etapa 03
// Início da 3ª iteração
// Passo 1: 8 < 15, 16, 20, 40
// Passo 2: 8, 15 < 16, 20, 40
// Passo 3: 8, 15, 16 < 20, 40
// Passo 4: 8, 15, 16, 20 < 40
// Fim da 3ª iteração – Como não houve troca, a sequência está ordenada.

// Entendido o princípio de funcionamento do algoritmo, vejamos a complexidade computacional para 
// obter a sequência ordenada.

// O primeiro passo para o estudo da complexidade computacional do algoritmo é a determinação do 
// pior caso. Se analisarmos o ábaco acima, poderemos verificar que cada iteração tem quatro passos, 
// isto é, n-1 comparações, e que o algoritmo para as n-1 comparações têm sucesso.

// Outra característica interessante é que, em uma iteração, o valor que é trocado vai para a posição 
// dele no vetor ordenado. Isto é, na primeira iteração, o maior valor vai para última posição, na 
// segunda iteração, o segundo maior valor vai para penúltima posição, e assim, sucessivamente. Deste 
// modo, o pior caso para o método da bolha é quando apresentamos a sequência ordenada em ordem reversa 
// na entrada do algoritmo.

// Para fins de análise, seja a sequência S = s1 < s2 < s3 < ... < sn. Se ela for apresentada em ordem 
// reversa para o algoritmo da bolha, teremos na entrada S’ = sn, ..., s3, s2, s1. Assim, a cada iteração 
// teremos os seguintes resultados parciais:
// 1ª iteração: sn-1, sn-2, ..., s3, s2, s1, sn – após n-1 comparações e trocas
// 2ª iteração: sn-2, ..., s3, s2, s1, sn-1, sn – após n-1 comparações e trocas

// n-2ª iteração: s2, s1, s3, ..., sn-2, sn-1, sn – após n-1 comparações e trocas
// n-1ª iteração: s1, s2, s3, ..., sn-2, sn-1, sn – após n-1 comparações e nenhuma troca

// A operação elementar do algoritmo é a comparação, não a troca, e a comparação sempre ocorre. 
// Assim, para ordenar o vetor, o algoritmo executa (n-1)² comparações, isto é, o algoritmo executa 
// em O(n²). Ainda em relação à complexidade, o método da bolha só executa O(n²) operações no pior caso.

// Comentário
// Lembre-se, o estudo de complexidade do algoritmo é feito sempre no pior caso, entretanto, a quantidade 
// de comparações pode variar, chegando, no melhor caso (que é o fornecimento do vetor já ordenado em 
// ordem crescente), a n-1 comparações.

// Vejamos as outras características do algoritmo: É estável, ou seja, caso um elemento esteja 
// posicionado corretamente em relação ao seu sucessor e antecessor na sequência, o algoritmo 
// não efetua troca. É não recursivo. Tem baixa complexidade de espaço O(n), isto é, só utiliza 
// a memória necessária para armazenar a sequência a ser ordenada e é um método de ordenação interna.

// O código em C do algoritmo é fornecido abaixo:
// void bolha (int *v)
// {
// 	int troca=1;
// 	int i=0;
// 	int aux;
// 	while (troca)
// 	{
// 		troca = 0;
// 		while (i < TAMANHO - 1)
// 		{
// 			if (v[i] > v[i+1])
// 			{
// 				aux = v[i];
// 				v[i] = v[i+1];
// 				v[i+1] = aux;
// 				troca = 1;
// 			}
// 			i++;
// 		}
// 		i = 0;
// 	}
// }	
