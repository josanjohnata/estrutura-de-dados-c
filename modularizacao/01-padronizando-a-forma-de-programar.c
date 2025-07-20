// Padronizando a forma de programar

// A modularização é uma técnica fundamental na programação em C, que envolve a divisão do 
// código-fonte em módulos autônomos e interconectados, facilitando a construção, a manutenção 
// e a escalabilidade dos programas. Inspirada pela Revolução Industrial e a evolução da engenharia 
// de software, a modularização permite a reutilização de código, a clareza na leitura e a eficiência 
// no desenvolvimento. Vamos explorar a importância da modularização, suas vantagens, e como ela se 
// integra com conceitos de programação estruturada, como funções e procedimentos, proporcionando aos 
// alunos uma base sólida para a criação de software de alta qualidade.

// História

// Modularização é o ato ou efeito de modularizar ou tornar modular, isto é, o desenvolvimento, a construção 
// ou a fabricação de algo em unidades ou peças autônomas que são passíveis de serem combinadas com outras 
// para formarem um todo. No campo computacional, a modularização é empregada para dividir o programa em 
// partes funcionais, partes essas que conversam umas com as outras.

// Para entender melhor a definição de modularização, é necessário traçar um paralelo com a Revolução 
// Industrial, que aconteceu na Inglaterra, no século XIX.

// Antes da Revolução Industrial, todo produto era manufaturado, ou seja, construído inteiro por um artesão e 
// seu aprendiz. 

// O sapateiro construía todo o sapato, desde a sola até o acabamento em couro, por exemplo. 

// Para construir um conjunto de cadeiras, o marceneiro recebia a madeira e “esculpia” uma a uma.

// Com o advento da Revolução Industrial, o trabalho passou a ser segregado. Uma pessoa construía uma parte 
// da cadeira, − o assento, por exemplo − outra o encosto e outra montava. Tempos depois, a Ford chamou esse 
// processo de linha de montagem, termo utilizado até hoje.

// Dessa forma, um produto que era inteiriço passou a ser divido em módulos, que se interligavam e construíam o produto.

// Na computação não foi muito diferente. O primeiro computador digital registrado, o ENIAC, não tinha o conceito 
// de software, era tudo hardware. Porém, com a evolução da computação, em meados dos anos 1950, o cientista Von Neumann 
// criou a arquitetura de computadores, cuja proposta inicial dividia o computador em três partes:

// - Entrada
// - Processamento
// - Saída

// Começava, assim, a Revolução da Computação. As máquinas de Von Neumann, como são conhecidas as que adotam esse modelo, 
// dividem o hardware do computador em três partes:

// - Unidade central de processamento
// - Dispositivos de entrada/saída
// - Memória

// John Von Neumann introduziu o projeto lógico de computadores com programa armazenado na memória, modularizando o computador 
// em partes como hardware e software.

// Após essa fase, começaram a surgir os programas e o interesse comercial por computadores. Inicialmente, os programas eram 
// escritos todos como um produto inteiriço, à semelhança de como era antes da Revolução Industrial. Sendo assim, algumas partes
// do código eram utilizadas mais de uma vez, o que deixava os programas com muita redundância no código, manutenção complicada 
// e difícil, além da prática de utilizar os desvios com os “Go To”.

// No final da década de 1960, então, ocorreu a crise do software, devido às dificuldades enfrentadas no seu desenvolvimento frente 
// ao rápido crescimento da demanda, à complexidade dos problemas a serem resolvidos e à ausência de técnicas bem estabelecidas para 
// o desenvolvimento de sistemas.

// Foi nessa época, mais precisamente em 1968, que ocorreu a Conferência da OTAN sobre Engenharia de Software (NATO ‒ Software 
// Engineering Conference) em Garmisch, Alemanha. O principal objetivo dessa reunião era estabelecer práticas mais maduras para 
// o processo de desenvolvimento e, por essa razão, o encontro é considerado como o nascimento da disciplina de engenharia de software.

// A criação da engenharia de software surgiu em uma tentativa de contornar a crise e dar um tratamento de engenharia (mais sistemático e 
//   controlado) ao desenvolvimento de sistemas de software complexos.

// Ao lado da engenharia de software surgiu a programação estruturada, que possibilitou dividir o código em pedaços especializados e 
// acoplá-los mais tarde, produzindo, assim, o software que atendia às necessidades comerciais com mais facilidade.

// Vale destacar que o processo é semelhante à Revolução Industrial do século XIX, só que no final das décadas de 1960 e 1970.

// Módulos
// Como já visto anteriormente, a modularização consiste em decompor um programa em uma série de subprogramas individuais. Trata-se 
// de um método utilizado para facilitar a construção de grandes programas, através de sua divisão em pequenas etapas.

// A modularização segue o lema “dividir para conquistar”, ou seja, divide o problema em subproblemas menores, sucessivamente, 
// conforme a necessidade.

// A primeira etapa, por onde começa a execução do programa, é chamada de programa principal, e as demais são os subprogramas 
// propriamente ditos, que são executados sempre que ocorre uma chamada, o que é feito através da especificação de seus nomes:

// - Programa principal
// O programa principal é o ponto de entrada do software, onde a execução do código começa. Ele inicia as instruções e chama 
// subprogramas ou funções auxiliares para cumprir a lógica e os objetivos do software.

// - Subprograma
// É um programa que, geralmente, resolve um pequeno problema, e que está subordinado a um outro que solicitará seu acionamento. 
// É possível que um subprograma chame outro subprograma.

// Mas por que devemos modularizar?

// A divisão do programa em módulos possui várias vantagens, entre elas:
// - Evitar que os programas fiquem grandes demais e difíceis de serem lidos e compreendidos.
// - Facilitar a leitura do código-fonte do programa.
// - Separar o programa em partes (blocos) que possam ser compreendidas de forma isolada (criação de módulos).
// - Evitar que um trecho seja repetido várias vezes dentro de um mesmo programa.
// - Permitir a alteração de um trecho do programa de forma mais rápida.
// - Utilizar um código em diferentes partes do programa, sem que ele precise ser escrito em cada local em que se deseje utilizá-lo.
// - Permitir o reaproveitamento de código já construído em outros programas (bibliotecas).

// Ao dividir o programa em peças menores, será possível conectá-las para formar uma solução sempre que precisarmos resolver um 
// problema mais complexo. Dessa forma, é necessário que essas peças sejam reutilizáveis, assim como blocos de montar.

// Essas peças reutilizáveis podem ser chamadas de procedimentos e funções, que são formados por um bloco de código que executa 
// uma determinada ação. De modo geral, cada função e cada procedimento deve realizar apenas uma ação, pois assim se tornam mais 
// reutilizáveis e úteis para os programas.

// Código estruturado

// Inicialmente, os programas eram blocos lógicos, com início e fim, e compostos de estruturas de controle, como a de condição, 
// seleção e repetição. Esses blocos consistiam em um conjunto de declarações e comandos delimitados pelas palavras início e fim, 
// visando a aumentar a funcionalidade do programa.

// Ao passo, porém, que os programas iam se tornando mais complexos, a divisão em partes menores os tornava mais claros e de fácil 
// entendimento. Com o advento da programação estruturada, os programadores começaram a criar estruturas simples, usando as sub-rotinas.

// Uma sub-rotina é uma ferramenta de programação que serve basicamente a dois objetivos:
// 1° Objetivo:
// Evitar que uma sequência de comandos repetida em vários locais de um algoritmo tenha que ser escrita várias vezes.

// 2° Objetivo:
// Dividir a estrutura de um algoritmo em partes fechadas e logicamente coerentes.

// As sub-rotinas devem codificar a solução para um problema pequeno e específico. Elas podem ser funções ou procedimentos 
// (quando não retornam valores):

// Os procedimentos são estruturas que agrupam um conjunto de comandos, que são executados quando o procedimento é chamado.
 
// As funções são um tipo especial de procedimento, no qual, depois de executada a chamada, o valor calculado é retornado no 
// nome da função, que passa a ser uma variável da expressão. Ou seja, elas sempre retornam algum valor para quem chamou, 
// diferentemente dos procedimentos, que não retornam valor algum.

// Portanto, em um arquivo de programa, funções/procedimentos conversam com o programa principal, e vice-versa.
