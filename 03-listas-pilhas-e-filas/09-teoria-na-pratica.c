// Teoria na prática
// Vamos proceder a um exemplo para ilustrar a propriedade citada. Textualmente, representaremos uma 
// pilha pelos símbolos de chaves. O símbolo “{“ representa a base da pilha. Já o símbolo “}” marca o 
// topo da pilha, onde as operações ocorrem.

// Considere que você tem os seguintes elementos que deseja inserir numa pilha: a, b, c, d, e. Os 
// elementos são lidos da esquerda para a direita em sequência.

// RESOLUÇÃO
// Vejamos a execução do empilhamento (Tabela 1) de todos os itens, seguida do desempilhamento (Tabela 2).
/**
 * Tabela 1: Empilhamento
 * +-----------------+------------+----------------------+
 * | Pilha           | Operação   | Sequência de Entrada |
 * +-----------------+------------+----------------------+
 * | { }             | push (a)   | a, b, c, d, e        |
 * | { a }           | push (b)   | b, c, d, e           |
 * | { a, b }        | push (c)   | c, d, e              |
 * | { a, b, c }     | push (d)   | d, e                 |
 * | { a, b, c, d }  | push (e)   | e                    |
 * | { a, b, c, d, e}|            |                      |
 * +-----------------+------------+----------------------+
 * 
 * Tabela 2: Desempilhamento
 * +-----------------+------------+--------------------+
 * | Pilha           | Operação   | Sequência de Saída |
 * +-----------------+------------+--------------------+
 * | { a, b, c, d, e}| pop ( )    |                    |
 * | { a, b, c, d }  | pop ( )    | e                  |
 * | { a, b, c }     | pop ( )    | e, d               |
 * | { a, b }        | pop ( )    | e, d, c            |
 * | { a }           | pop ( )    | e, d, c, b         |
 * | { }             |            | e, d, c, b, a      |
 * +-----------------+------------+--------------------+
 */

 // Olhando o exemplo, algumas considerações merecem ser feitas
// 1. Primeiro, você deve notar que a operação de empilhamento (push) recebe como parâmetro o item a ser 
//     inserido, enquanto a operação para desempilhar (pop) não tem parâmetro. O que ocorre é que push 
//     precisa receber o elemento a ser colocado na pilha, enquanto pop vai sempre remover o elemento do 
//     topo da pilha.
//     Assim, à medida que um elemento é desempilhado, é preciso atualizarmos a posição que representa o 
//     topo.
// 2. Em segundo, conforme dito, as sequências de entrada e saída estão invertidas. Em nossa pilha de 
//    exemplo, o topo foi sempre a extremidade direita.
// 3. Em terceiro, o fato de termos executado todas as operações de empilhamento e só depois iniciarmos 
//    o desempilhamento teve motivo apenas didático. Nada impede que as operações ocorram mescladas em 
//    qualquer ordem, exceto o desempilhamento de uma pilha vazia, que geraria um erro.
// 4. A quarta observação diz respeito à ocorrência da regra LIFO. Note que o último elemento a ser 
//    inserido é sempre o primeiro a ser desempilhado. Tentar desempilhar um elemento abaixo do topo 
//    é uma violação da definição de pilha.
// 5. A última observação é que não precisamos do campo “chave”, uma vez que só podemos manipular o 
//    elemento do topo da pilha. Isso significa, inclusive, que podemos empilhar elementos iguais. 
//    Assim, no caso das pilhas, os nós podem ser bem mais simples, contendo apenas dois campos: Um 
//    para armazenar o dado e outro, do tipo ponteiro, para encadeamento com outro nó (campo “prox”). 
//    Aliás, se utilizarmos alocação sequencial, não há necessidade do campo do tipo ponteiro, ficando 
//    o nó restrito ao campo que contém o elemento a ser empilhado.

// Pilhas possuem diversas aplicações em informática. A característica de inversão de cadeias tem grande 
// utilidade, permitindo funcionalidades que facilitam o cotidiano, como a funcionalidade de desfazer ações 
// existentes em diversos programas, por exemplo. Cada ação realizada no programa, é inserida na pilha. 
// Quando acionamos a função de desfazer, as ações são desfeitas na ordem inversa em que ocorreram, isto é, 
// da mais recente para a mais antiga. Isso é feito desempilhando as ações a serem revertidas.

// Outro importante exemplo de uso de pilhas está relacionado diretamente com a execução de programas computacionais.

// Pilhas são empregadas durante a execução de qualquer programa de computador, para controlar as trocas de contexto.

// Exemplo
// Quando uma função é chamada durante a execução do programa, o contador de programa é desviado para outra 
// posição de memória, inserindo o endereço de retorno em uma pilha. Isso é necessário para permitir que a 
// execução do programa seja retomada a partir do ponto no qual foi desviada. Quando a função termina sua 
// execução, o contador de programa desvia para o último endereço de retorno empilhado e o retira da pilha 
// de execução. Caso uma segunda função seja chamada antes do término da primeira, um novo desvio é feito 
// pelo contador de programa e um novo endereço de retorno é empilhado. Conforme as funções forem terminando 
// sua execução, o contador de programa vai retornando aos endereços empilhados e retirando-os da pilha de 
// execução.

// Outros casos, como a conversão para número binário, podem ser identificados, mas os exemplos dados 
// devem ser suficientes para mostrar-lhe a importância dessa estrutura de dados.

// Em nosso exemplo, utilizamos uma representação genérica de pilha. Mas não se esqueça de que se 
// trata de um tipo particular de lista. Ou seja, da mesma maneira que as listas, podemos implementar 
// a pilha através de alocação sequencial ou encadeada, com diferentes vantagens e desvantagens. Nas 
// próximas subseções, nós veremos essas possibilidades mais detidamente.
