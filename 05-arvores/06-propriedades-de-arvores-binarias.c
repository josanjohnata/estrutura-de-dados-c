// Propriedades de árvores binárias
// Já vimos as propriedades de árvores gerais. Agora veremos quais propriedades podem ser 
// derivadas pelo fato de restringirmos o grau da árvore a no máximo 2.

// Comentário
// Mas, antes, não se esqueça de que o grau da árvore corresponde ao maior grau de seus nós. 
// Entretanto, pela definição de árvore binária, a árvore da Figura 16 é uma árvore binária, 
// apesar de ser uma árvore de grau 1. Isto é importante para as discussões a seguir e para 
// o correto entendimento de o que é uma árvore binária.

// Nós não faremos a prova formal das propriedades. Ao invés disso, vamos nos concentrar em 
// compreender estas propriedades através de uma discussão suficientemente estruturada. O 
// nosso objetivo será entender como as propriedades são estabelecidas e qual a sua utilidade.

// A primeira propriedade que vamos discutir é relativa à altura de uma árvore binária. Olhemos 
// os casos extremos:
// - Altura máxima:
//   Qual seria a altura máxima de uma árvore binária com n nós? Para responder a esta pergunta, 
//   precisamos imaginar como construir uma árvore binária de altura máxima. Ora, se esta árvore 
//   for construída de maneira que cada nó possua exatamente uma subárvore vazia, então vamos 
//   garantir que em cada nível haja somente um nó. Assim, conseguimos enfileirar todos os n nós 
//   na vertical, maximizando a altura da árvore. Estamos falando, neste caso, de uma árvore 
//   zigue-zague como a da Figura 16 e que terá, portanto, altura n.
// - Altura mínima
//   Qual seria a altura mínima de uma árvore binária com n nós? Novamente, devemos considerar 
//   como construir tal árvore. Ora, se na construção, conseguirmos garantir que todos os nós 
//   sejam completados antes de iniciarmos um novo nível da árvore, estaremos garantindo que 
//   somente no penúltimo ou no último níveis existam nós com alguma subárvore vazia. Isto é, 
//   estamos impedindo uma árvore como a da Figura 13 e construindo uma árvore como a da Figura 15. 
//   Então, a árvore binária de altura mínima é uma árvore completa.

// Consideremos melhor este caso. Imagine uma árvore binária completa T com n nós e altura h. Sendo 
// completa, temos certeza de que somente há nós com subárvores vazias no último ou no penúltimo 
// nível. Assim, devemos nos perguntar se há alguma forma de rearranjar os nós do último nível, de 
// maneira que a nova altura h! seja menor do que h.

// Bem, tudo que podemos fazer é tentar mover os nós do último nível para o penúltimo, pois todos 
// os níveis diferentes do penúltimo e do último não possuem subárvores vazias. Mas, para que algum 
// nó possa ser movido do último nível para o penúltimo, se faz necessário que algum nó do 
// antepenúltimo nível possua pelo menos uma subárvore vazia. Mas, isto, como vimos, contraria a 
// construção de uma árvore binária completa. Logo, nenhum rearranjo pode ser feito para eliminar o 
// último nível e, portanto, a altura da árvore não pode ser reduzida.

// Assim, a árvore binária completa tem altura mínima e tal altura é 1 + piso(log n).

// Lembre-se de que o logaritmo em estrutura de dados está na base 2 e não na decimal, como usualmente. 
// Com base no que discutimos, podemos afirmar que:
// Dada uma árvore binária T com n > 0 nós, a altura h de T é tal que n ≤ h ≤ 1 + piso(log n).

// Outra propriedade de árvores binárias diz respeito ao número de subárvores vazias em uma árvore 
// com n > 0 nós. Vejamos para o caso mais simples, ou seja, uma árvore binária com apenas um nó.

// Neste caso, o nó é raiz e folha ao mesmo tempo e a árvore tem duas subárvores vazias (as subárvores 
//   esquerda e direita do nó raiz). Ou seja, se n = 1, o número de subárvores vazias é igual a n = 1.

// Olhemos, então, o caso em que n = 2. Nesta situação, o nó raiz tem um filho, que pode estar à esquerda 
// ou à direita, e uma subárvore vazia. O nó filho da raiz, por sua vez, é um nó folha e possui, assim, 
// duas subárvores vazias. Essa árvore tem, então, três subárvores vazias. Então, se n = 2, o número de 
// subárvores vazias se mantém igual a n + 1

// Pelo princípio da indução finita, podemos demonstrar que o número de subárvores esquerdas e direitas 
// vazias em uma árvore binária com n > 0 nós é n + 1.
