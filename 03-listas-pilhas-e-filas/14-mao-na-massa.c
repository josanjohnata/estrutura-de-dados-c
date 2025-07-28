// Mão na Massa

// Passo 1
// Ao percorrê-la, primeiro seria empilhado o 3, depois o 2. A seguir, seria encontrado o símbolo do 
// produto, causando o desempilhamento de 2 e 3, a execução do produto 2 * 3 e o empilhamento do 
// resultado (6).

// Passo 2
// Continuando, seriam empilhados 4 e 2. A pilha agora seria formada por 6, 4, 2, estando 2 no topo. 
// Ao ser encontrado o segundo operador de produto (*), 4 e 2 seriam desempilhados, 4 * 2 seria 
// executada e o resultado, 8, seria empilhado.

// Passo 3
// Nesse ponto, a pilha seria 6, 8. Continuando a varredura, encontraríamos o sinal de divisão ( / ), 
// levando ao desempilhamento de 6 e 8 e à execução de 8 / 6.

// A seguir, seria empilhado o resultado dessa divisão, 0,75, que é o resultado da expressão.
