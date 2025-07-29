// Ordenação
// O problema da ordenação é, sem dúvida, um dos mais antigos e mais estudados em computação. É a 
// ferramenta para a solução de diversos problemas mais complexos e existem diversos algoritmos 
// que resolvem este problema.

// Informalmente, podemos enunciar o problema como sendo encontrar uma permutação de uma sequência de 
// dados, tal que dois elementos adjacentes desta sequência satisfaçam a uma das relações a seguir:
// - Menor que(“<”): Caso se deseje encontrar a sequência ordenada em ordem crescente.
// - Maior que(“>”): Caso se deseje encontrar a sequência ordenada em ordem decrescente.

// Uma instância do problema é composta por um conjunto de dados em uma sequência arbitrária de tamanho 
// n e sua solução é a permutação que respeite a relação de ordem desejada.

// Exemplo
// Por exemplo, a sequência 12, 35, 17, 92, 45, 8 é uma instância de tamanho n = 6 e a solução desta 
// instância é a permutação 8, 12, 17, 35, 45, 92, se a relação de ordenação for menor que (“<”), ou 
// a permutação 92, 45, 35, 17, 12, 8, se a relação de ordenação for maior que (“>”).

// Podemos simplificar o estudo da ordenação considerando que a relação de ordem a ser respeitada é a 
// “menor que”. Ao assumir isto, não há perda de generalidade, uma vez que o estudo para relação “maior que” 
// é completamente análogo.

// Formalizando o enunciado do problema
// Seja S =s1, s2, s3, ...., sn uma sequência de números inteiros distintos. Ordenar a sequência S é 
// equivalente a encontrar a permutação S’ =s’1, s’2, s’3, ... , s’n tal que s’i < s’i+1 para 0 < i < n.

// Não há perda de generalidade ao enunciar o problema da forma acima referenciando números inteiros, 
// pode-se tratar qualquer objeto de dados da mesma forma, bastando definir a relação “<” para estes 
// objetos da dados.

// Exemplo
// Por exemplo, caso os objetos de dados fossem cadeias de caracteres, poderíamos definir a relação “<” 
// como a ordem lexicográfica (“ordem alfabética”), viabilizando o processo de ordenação. Assim, por 
// exemplo, a cadeia “Andrea” < “Luiz”.

// Definido o problema, pode-se dizer que um algoritmo de ordenação é a entidade que recebe como entrada 
// uma instância do problema de ordenação e fornece como saída uma permutação desta entrada, satisfazendo 
// a relação de ordem definida no enunciado do problema.
