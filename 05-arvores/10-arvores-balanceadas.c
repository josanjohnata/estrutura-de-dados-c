// Árvores balanceadas
// A discussão da subseção anterior vem reforçar a preocupação em mantermos uma árvore sempre 
// eficiente para a busca.

// Ao longo do tempo, uma árvore binária de busca pode sofrer inserções e remoções que piorem 
// a execução da busca. Mesmo que uma árvore comece completa, nada impede que ela, após algumas 
// inserções ou remoções, perca essa propriedade. Num caso extremo, ela pode se degenerar numa 
// árvore zigue-zague. O que desejamos é manter o custo de acesso às chaves no seu mínimo, mesmo 
// com a execução de operações que alterem a árvore. Isto é, queremos garantir que a árvore 
// continue tendo desempenho ótimo.

// É claro que, para que a árvore se mantenha ótima mesmo com operações de inserção e remoção 
// ocorrendo, um esforço adicional deve ser realizado. Tal esforço será empregado no sentido 
// de corrigir os desvios inseridos pelas operações, fazendo com que a árvore retorne ao seu 
// estado mais eficiente no acesso às chaves.

// Uma árvore que mantém o custo de acesso às chaves na mesma ordem de grandeza de uma árvore 
// ótima, durante seu uso, é chamada de balanceada.

// Já estabelecemos na subseção anterior que uma árvore binária completa é a que minimiza as 
// comparações necessárias, no pior caso, para uma busca. Por isso, como já vimos, a árvore 
// binária completa é uma meta na construção.

// Comentário
// Você pode pensar que, por isso, manter a árvore completa também é uma meta do balanceamento 
// da árvore. Mas, neste ponto, é importante considerarmos a razão que nos leva a tentar manter 
// a árvore de busca ótima.

// Esta razão é a eficiência.

// Tentamos usar uma árvore de busca completa para que a eficiência da busca seja ótima. Estamos 
// pensando, assim, no desempenho no emprego da árvore de busca para solucionar algum problema 
// prático.

// Como já apontamos, balancear uma árvore significa empreender um esforço no sentido de mantê-la 
// com um desempenho com a mesma ordem de grandeza que a árvore ótima.

// Mas, e se o esforço para se balancear uma árvore for tal que, apesar de a busca se manter ótima, 
// supere em muito o custo da busca?
// Resposta
// Neste caso, as operações de inserção e remoção, que já possuem um custo, seriam acompanhadas do 
// custo adicional de balanceamento, que tenderia a prejudicar o emprego da árvore como uma solução 
// viável em um problema real. Infelizmente, este é o tipo de coisa que pode vir a ocorrer com 
// árvores completas.

// Uma saída para este problema é relaxarmos o desempenho de busca. Ao invés de visarmos a um 
// desempenho com máxima eficiência, ou seja, realizado no número mínimo de passos 1 + piso(log n),
// aceitamos que o desempenho na busca possa ser pior, mas exigimos que a altura da árvore seja 
// a mesma da altura de uma árvore completa com o mesmo número de nós.

// Tal imposição deve ser feita recursivamente, de forma que as subárvores obedeçam a mesma 
// limitação, considerados os números de nós de cada subárvore. Uma tal árvore é dita balanceada.

// A motivação para esse relaxamento é melhorar o desempenho do esforço de balanceamento, sem 
// comprometer o desempenho de busca. Com essa limitação, a altura da árvore poderá ser até da 
// ordem de grandeza de log n, o que ainda garante um bom desempenho de busca.

// Estudaremos, na próxima subseção, um exemplo de árvore balanceada chamada de árvore AVL.
