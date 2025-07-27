// Listas encadeadas
// A primeira coisa que iremos ver é como inserimos um elemento numa lista vazia.

// Como dissemos antes, precisamos ter uma referência para a lista. Essa referência é um ponteiro 
// que guardará o endereço do nó cabeça. Logo, para saber se uma lista é vazia, é suficiente testar 
// se o campo “prox” do nó cabeça é nulo.

// Se for, a inserção do novo elemento é simples. Basta alocá-lo na memória e fazer o nó cabeça 
// apontar para ele. Apontar significa fazer o campo “prox”, um ponteiro, guardar o endereço de 
// memória do elemento que se quer apontar.

// Atenção
// Lembremos que a função calloc solicita uma área de memória e, caso haja sucesso em reservar esse 
// espaço, ela retorna o endereço para o mesmo.

// Mas, para reservar esse espaço, a função precisa saber o tipo de dado que será armazenado. Bom, 
// os nós guardam os elementos da lista. Mesmo que esses elementos sejam tipos primitivos, nós 
// precisamos que os nós também possuam um campo ponteiro (ou dois, se for uma lista duplamente 
// ligada) para guardar o endereço do próximo elemento (e do anterior, nas listas com dupla ligação). 
// Assim, um nó da lista é um tipo de dado não primitivo.

// Para definir um nó em linguagem C, usaremos a função struct, como pode ser visto no Algoritmo 4. Um 
// nó de uma lista duplamente encadeada teria mais um campo ‒ No *ant –, a fim de guardar o endereço do 
// nó anterior.

// Algoritmo 4: Definição genérica de um nó de uma lista simplesmente encadeada.
// 1	struct No {
// 2		< tipo > campo1;
// 3		< tipo > campo2;
// 4		[...]
// 5		< tipo > campoN;
// 6	No *prox; }

// Repare que definimos uma estrutura chamada “No”, que contém N+1 campos. A instrução struct é usada em 
// linguagem C para instruir o compilador de que os elementos que compõem a estrutura devem ser alocados 
// sequencialmente. Ela define um tipo de dado não primário.

// Para nossa discussão, vamos nos concentrar no ponteiro “prox” e por isso vamos usar uma estrutura de nó 
// simples (Código 4), contendo um campo “prox”, do tipo ponteiro; um campo “chave”, do tipo inteiro; e 
// outro campo que é na verdade outra estrutura chamada “Elemento” e cuja definição não faremos. Na prática, 
// “Elemento” poderia estar definida dentro de “No” e a construção dessa forma tem apenas fins didáticos.

// Código 4: Definição simples de um nó de lista simplesmente encadeada.
// 1	struct No {
// 2		int chave;
// 3		Elemento elemento;
// 4		No *prox; }

// Agora que definimos um tipo de dado útil para construir nossa lista, podemos retomar nossa abordagem de 
// construção da lista.
// - Inicialmente, vamos considerar uma lista simplesmente encadeada e não ordenada. Já vimos como proceder 
//   se a lista for vazia. Para o caso considerado, mesmo se a lista não for vazia, a inserção de um novo 
//   elemento é trivial, pois este pode ser inserido em qualquer ponto.
// - Então, basta alocar um espaço de memória para o novo elemento, fazer esse novo elemento apontar para o 
//   mesmo nó que o nó cabeça aponta e, depois, fazer o nó cabeça apontar para o novo elemento. Desse jeito, 
//   estamos inserindo os novos elementos entre o nó cabeça e os nós existentes. Isso é possível, pois não 
//   estamos tratando com nenhum tipo especial de lista.
// - Tratemos agora de como realizar uma busca numa lista encadeada. Como já mencionamos, temos referência 
//   apenas para o nó cabeça e, sendo uma lista simplesmente encadeada, só podemos percorrer a lista em um 
//   sentido.

// Portanto, a busca consiste em, partindo-se do nó cabeça, percorrer toda a lista comparando-se as chaves dos 
// nós. Numa lista não ordenada, essa comparação precisa prosseguir até o fim. O fim da lista é encontrado quando 
// o ponteiro “prox” de um nó tem valor nulo, indicando que não há outros nós encadeados.

// Já numa lista ordenada, essa busca pode cessar quando a chave do nó comparado for maior do que a buscada ou 
// quando o fim da lista for atingido. Em ambos os casos, porém, o pior caso será quando toda a lista precisa 
// ser verificada. O Código 5 mostra a implementação em linguagem C de uma função de busca em uma lista ordenada.

// Código 5: Busca em lista encadeada ordenada
// 1	No *buscar ( No *no_cabeca , No **aux, int chave ) {
// 2		No *atual = no_cabeca -> prox;
// 3		*aux = no_cabeca;
// 4		while ( atual != NULL ) {
// 5			if ( atual -> chave < chave ) {
// 6				*aux = atual;
// 7				atual = atual -> prox; }
// 8			else if ( atual -> chave == chave ) {
// 9				return atual; } //elemento encontrado
// 10			else {
// 11				return NULL; } //elemento não encontrado
// 12		return NULL; } //lista vazia
// 13	}

// Atenção
// Uma coisa interessante de se observar nessa função, é que aproveitamos a busca para retornar o endereço do 
// elemento imediatamente anterior ao buscado, caso este não esteja na lista. Isso torna a função de busca útil 
// para a inserção, pois o acesso não pode ser feito diretamente a partir de um simples cálculo de deslocamento, 
// diferentemente da alocação sequencial.

// O motivo de termos analisado a busca na lista encadeada ordenada é que este caso particular exibe um 
// comportamento ligeiramente mais complexo. Em uma busca em uma lista não ordenada, a busca necessariamente 
// precisa prosseguir até encontrar o elemento ou o fim da lista. Nesse caso, o procedimento é mais simples, 
// não sendo necessário o teste mostrado na linha 5.

// Essa diferença, todavia, não ocorre com os procedimentos de inserção ou remoção. Nesses procedimentos, as 
// operações são as mesmas, embora as listas ordenada e não ordenada guardem diferenças.

// Isso é possível uma vez que listas não ordenadas admitem, fora casos particulares de pilhas, filas e deques, 
// a inserção de um elemento em qualquer posição.

// Olhemos como a inserção ocorre no Código 6.

// Código 6: Inserção em lista encadeada
// 1	int inserir ( No *no_ant , Elemento novo_elemento , int chave ) {
// 2		No *aux , *anterior = no_cabeca;
// 3		No *novo_no = ( No * ) calloc ( 1 , sizeof ( No ) );
// 4		aux = buscar ( no_cabeca , &anterior , chave );
// 5		if ( ( novo_no == NULL ) || ( aux != NULL ) ) {
// 6			return 0; //falha na inserção
// 7		} else {
// 8			  novo_no -> elemento = novo_elemento;
// 9			  novo_no -> chave = chave;
// 10		    novo_no -> prox = anterior -> prox;
// 11		    anterior -> prox = novo_no;
// 12	      return 1; //inserção bem sucedida }
// 13		}
// 14  }

// Agora, observe as linhas 8 a 11 do código mostrado. É nelas que a inserção ocorre.
// - Nas linhas 8 e 9, o novo nó recebe os valores a serem inseridos. Esse nó, criado na linha 3, 
//   corresponde até esse ponto a um espaço de memória preenchido com os novos valores, mas sem 
//   qualquer ligação com a lista.
// - Na linha 10, fazemos o campo “prox” do novo nó (“novo_no”) apontar para a mesma região de memória
//   que é apontada por “prox” em “anterior”.
// - O próximo passo, linha 11, consiste em fazer o campo “prox” de “anterior” apontar para “novo_no”. 
//   Em outras palavras, após a linha 11 teremos inserido “novo_no” entre o nó “anterior” e aquele 
//   apontado pelo seu campo prox. Esse procedimento funciona indistintamente para listas ordenadas ou não.

// A remoção é igualmente simples. No caso das listas encadeadas, não precisamos sobrescrever o elemento 
// removido com o posterior, pois esse pode ser efetivamente desalocado.

// Assim, a remoção consiste em duas ações básicas: Fazer o nó anterior ao nó que será removido apontar 
// para o nó posterior deste e desalocar o nó removido, o que na linguagem C é feito pela instrução free.

// Vejamos o Código 7, que implementa a remoção de um nó em uma lista encadeada.

// Código 7: Remoção em lista encadeada.
// 1	remover ( No *no_cabeca , int chave ) {
// 2		No *aux , *anterior = no_cabeca;
// 3		aux = buscar ( no_cabeca , &anterior , chave );
// 4		if ( aux != NULL ) {
// 5			anterior -> prox = aux -> prox;
// 6			free ( aux );
// 7			return 1; //remoção bem sucedida
// 8		} else
// 9			return 0; //falha remoção
// 10		}

// Essas operações se aplicam à lista simplesmente encadeada. Mas, como vimos antes, podemos construir 
// listas com duplo encadeamento. Para isso, a estrutura do nó mostrado no Código 4 precisa ser modificada 
// para incluir mais um campo do tipo ponteiro, que será usado para apontar para o nó predecessor, conforme 
// observamos no Código 8 (campo “ant”).

// Código 8: Definição de um nó para lista duplamente encadeada.
// 1	struct No {
// 2		int chave;
// 3		Elemento elemento;
// 4		No *prox;
// 5		No *ant; }

// Obviamente os procedimentos de inserção e remoção precisam ser adequados. Uma lista duplamente encadeada 
// torna desnecessário manter um ponteiro para o antecessor do nó buscado e exige mais operações na inserção 
// e na remoção.

// O procedimento de busca (Código 5) funciona mesmo em listas duplamente encadeadas, mas para estas, ele 
// pode ser simplificado. Mas a existência de um duplo encadeamento não altera a complexidade das operações 
// de inserção, busca e remoção.

// Da mesma maneira que na alocação sequencial, podemos transformar uma lista encadeada em circular de forma 
// simples. Basta que o último nó da lista passe a apontar para o nó cabeça. Isso significa fazer o campo 
// “prox” do último nó apontar para o nó cabeça.
// Todavia, isso não altera a unidirecionalidade do percurso na lista, que só pode se dar do nó cabeça em direção 
// aos nós subsequentes.

// Para permitir que o percurso numa lista circular se dê em dois sentidos, faz-se necessário usarmos uma lista 
// duplamente encadeada. Com uma lista desse tipo, para que ela se torne circular, além de fazermos o último nó 
// apontar para o nó cabeça, precisamos fazer o campo “ant” do nó cabeça apontar para o último nó da lista.
