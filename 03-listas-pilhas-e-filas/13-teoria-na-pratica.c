// Teoria na prática
// Você pode se surpreender, mas há mais de uma forma de se escrever uma expressão aritmética.

// A forma tradicional, com os operadores posicionados entre seus operandos é chamada de forma infixa. 
// Essa notação, porém, é ambígua, o que obriga o estabelecimento de regras e o uso dos delimitadores.

// Veja a expressão 2 * 3 / 4 * 2.

// Você consegue calcular o resultado?

// RESOLUÇÃO
// Se considerarmos que o produto e a divisão possuem mesma precedência, passamos a ter dois resultados 
// possíveis: 0,75 e 3, dependendo da ordem em que executemos as operações:

// 2 * ( 3 / 4 ) * 2 = 3
// ( 2 * 3 ) / ( 4 * 2 ) = 0,75
// Assim, podemos ver que, para eliminar a ambiguidade, as regras de precedência dos operadores aritméticos 
// não são suficientes. Precisamos lançar mão dos delimitadores, a fim de eliminar a ambiguidade.

// A notação infixa, ou tradicional, ao ser modificada pelos delimitadores, é também chamada de notação 
// parentizada. A dificuldade de se avaliar expressões tradicionais ou parentizadas advém, justamente, 
// do fato de que a prioridade das operações não segue a ordem de ocorrência.

// Outra forma de se escrever tais expressões é a chamada notação polonesa. Nesta forma, os operadores 
// aparecem imediatamente antes dos operandos, o que evita ambiguidades.

// A expressão ( 2 * 3 ) / ( 4 * 2 ) é escrita em notação polonesa como / * 2 3 * 4 2. Isso indica que 
// a divisão será aplicada ao produto entre 2 e 3 e entre 4 e 2. Ou seja, as operações podem ser 
// processadas na ordem em que aparecem, sem ambiguidade e sem necessidade de parentização.


// Há também a notação polonesa reversa, ou pós-fixa, na qual o operador aparece imediatamente após os 
// operandos.

// Essa discussão serve para contextualizar a aplicação de pilhas que são utilizadas para permitir a 
// conversão da notação parentizada para a polonesa reversa. Essa conversão não altera a ordem dos 
// operandos, ou seja, estes podem ser copiados diretamente para a nova expressão. Segundo Pereira 
// (2016), os operadores, todavia, devem refletir a prioridade estabelecida pela parentização. Como 
// a ocorrência de um operador na notação pós-fixa implica a execução da operação, estes deverão ser 
// copiados quando o parêntese de fechamento correspondente for encontrado.

// A notação polonesa reversa permite calcular o valor de uma expressão percorrendo-a e empilhando os 
// operandos.

// Quando um operador é encontrado, desempilham-se dois operandos, e o resultado da operação realizada é 
// empilhado.

// Ao término, o valor da expressão estará registrado no topo da pilha.

// Por exemplo, considere a expressão em notação pós-fixa 2 3 * 4 2 * /.
