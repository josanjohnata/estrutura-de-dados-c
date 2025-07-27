// Entendendo a alocação sequencial

// O primeiro conceito que você precisa ter bem claro é o de alocação sequencial. Esse tipo de alocação, 
// como o próprio nome já revela, é o armazenamento de dados de forma sequencial na memória do computador. 
// Isto quer dizer que as posições de memória ocupadas serão contíguas.

// Numa situação real, a memória do computador é ocupada por diversos outros dados que são armazenados pela 
// execução de outros programas, deixando espaços de tamanhos diversos desocupados.

// Para que a alocação sequencial possa ser levada a termo, o programa precisa informar previamente todo o 
// tamanho de memória que será necessário. Há duas estratégias, como veremos mais à frente, mas ambas envolvem 
// a alocação de toda a memória necessária, diferindo apenas se esse valor é determinado em tempo de compilação 
// ou de execução.

// Um vetor indica ao compilador que este deve solicitar a reserva de um número de posições de memória suficientes 
// para guardar todos os elementos do vetor. Para isso, faz-se necessário especificar o tipo de dado que será 
// armazenado. Vamos observar o exemplo a seguir, que é um trecho de código em linguagem C no qual um vetor é declarado.

// Código 1: Alocação sequencial na linguagem C.
// 1: [...]
// 2: int vetor [ 10 ];
// 3: int a = 50;
// 4: vetor [ 3 ] = a;
// 5: [...]

// A linha 2 desse código informa ao compilador que deverão ser reservadas posições de memória suficientes para armazenar 
// 10 elementos do tipo inteiro. Você deve ter reparado que estamos falando em posição de memória, e não em tamanho. A 
// razão disso é que o número de posições necessárias depende do tamanho do tipo de dado e da palavra da memória.

// Exemplo
// Por exemplo, considere que o tipo de dados “int” em C tenha o tamanho mínimo definido na especificação C99 (16 bits). 
// Suponha, a título de exemplo, uma memória cuja palavra seja de 8 bits. Logo, cada posição de memória pode armazenar 1 
// byte (8 bits). Assim, para armazenar 10 elementos do tipo inteiro serão necessárias 10 * (16 / 8) = 20 posições de memória. 
// Observe que cada elemento ocupará duas posições de memória.
// (ISO, 2011)

// Voltando ao Código 1, agora compreendemos como o compilador, de posse dos parâmetros necessários, gera o código que instrui o 
// sistema operacional a alocar o espaço sequencial para armazenar o vetor.

// Mas isso não é tudo. Sabemos também que os elementos de um vetor podem ser acessados diretamente através do seu índice. Isso é 
// possível porque na verdade o índice corresponde ao offset ou deslocamento a ser feito a partir do endereço do primeiro elemento 
// do vetor.

// Nesse caso, a linha 4 do exemplo está acumulando o valor de “a” no quarto elemento do vetor (em C, o vetor inicia com índice zero). 
// Isso quer dizer saltar 6 posições de memória (3 (índice do vetor) * 2 (número de posições de memória que cada elemento ocupa) = 6).

// - Uma maneira de se criar uma lista em memória é através da alocação sequencial. Como nesse caso todos os seus nós estarão em posições 
//   contíguas, isso tem vantagens para o acesso.
// - Em contrapartida, operações como a remoção são prejudicadas, pois não é possível desalocar o espaço de memória sem comprometer a 
//   sequencialidade das posições. Esse tipo de operação é mais bem suportada pela alocação dinâmica.
// - Portanto, a escolha da melhor forma de implementação da lista dependerá de uma análise das vantagens e desvantagens.

// Compreender o que é alocação sequencial vai lhe ajudar não apenas no entendimento de como estruturas tais quais listas, filas e pilhas 
// funcionam, mas também na compreensão do mecanismo da alocação dinâmica.
