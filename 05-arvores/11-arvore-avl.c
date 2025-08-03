// Árvore AVL
// Árvores AVL são um tipo especial de árvores binárias que buscam atingir e manter um bom 
// desempenho de busca em tempo de execução.

// Alguns autores consideram a árvore AVL como uma árvore balanceada, outros, no entanto, 
// consideram-na praticamente balanceada, adotando uma definição bem mais rígida para o 
// balanceamento. Para nossa discussão, consideraremos a árvore AVL como uma árvore 
// balanceada e vamos defini-la como se segue: Uma árvore AVL é uma árvore binária de 
// busca tal que:
// - As alturas das subárvores esquerda e direita do nó raiz diferem por, no máximo, uma 
//   unidade.
// - As subárvores esquerda e direita do nó raiz são, por sua vez, árvores AVL.

// Atenção
// Um nó que atende à primeira parte da definição (que estipula que a altura entre as 
// subárvores do nó deve diferir de no máximo uma unidade) é chamado de nó regulado. 
// Quando um nó não atende a essa limitação, ele é chamado de desregulado.

// Veja, também, que essa definição é recursiva. Isto significa que, ao dizer que as 
// subárvores esquerda e direita do nó raiz são, por sua vez, árvores AVL, estamos 
// dizendo que o nó raiz dessas subárvores também é um nó regulado. E assim, sucessivamente.

// Uma árvore que possui todos os nós regulados é uma árvore balanceada. Porém, uma árvore 
// que possua ao menos um nó desregulado é dita desregulada. É imediato ver que toda árvore 
// completa é uma árvore AVL. Pela sua definição, só há subárvores vazias no penúltimo ou 
// no último nível. Suponha um nó v do penúltimo nível que possua a subárvore esquerda vazia 
// e um filho d à direita. Pela definição, d necessariamente é folha. Então, a diferença de 
// altura entre as subárvores de v é de uma unidade. Nos demais casos, as diferenças serão 
// zero. Assim, evidenciamos que uma árvore completa é AVL.

// Perceber que o inverso não é necessariamente verdadeiro também deve ser fácil. Basta 
// lembrar que uma árvore AVL não impõe restrições a que haja nós com subárvores vazias 
// no antepenúltimo nível.

// A Figura 19 mostra um exemplo de árvore AVL que não é completa.

// Agora que já apresentamos a definição de uma árvore AVL, vamos entender como essa definição 
// produz uma árvore balanceada. Para isso, iremos determinar o valor mínimo de nós que podem 
// existir em uma árvore AVL de altura h.

// O primeiro nó a ser examinado é o nó raiz. Neste caso, como se trata de uma árvore AVL, sabemos 
// que a diferença entre as alturas de suas subárvores pode ser, no máximo, igual a 1. Ora, se a 
// altura da árvore é h, então a maior altura das subárvores da raiz pode ser h -1. Assim, a outra 
// subárvore poderá ter altura h -1 ou h -2, a fim de não violar a condição de árvore AVL. Se 
// buscamos o número mínimo de nós, então devemos olhar para o caso em que a outra subárvore possui 
// altura h -2. A aplicação recursiva deste raciocínio permitirá construir uma árvore AVL com altura 
// h. Para esta árvore AVL, o número de nós n se relaciona com a altura h de forma que h é sempre 
// menor que a ordem de grandeza de log n. Isto, conforme vimos na subseção anterior, é a altura 
// imposta a uma árvore balanceada.

// Precisamos, agora, compreender o mecanismo de balanceamento. Começaremos por estudar a inserção 
// em árvores AVL. Durante a inserção, como já debatemos, alterações podem ocorrer que demandem o 
// esforço de balanceamento do nó. Isto implica que, a cada inserção, os nós da árvore precisam ser 
// checados para verificar-se se algum se tornou desregulado. Caso nenhum nó tenha se desregulado, 
// nada precisa ser feito. Contudo, se um nó se tornou desregulado, faz-se necessário operar sobre 
// a árvore, de forma a restabelecer o seu balanceamento.

// Para restabelecer o balanceamento de uma árvore AVL que se tornou desbalanceada, podemos empregar 
// quatro transformações. Estas transformações são:

// - Rotação simples à direita. FIGURA 20
// - Rotação simples à esquerda. FIGURA 21
// - Rotação dupla à direita. FIGURA 22
// - Rotação dupla à esquerda. FIGURA 23

// Vejamos, agora, de que forma a inclusão pode ensejar o uso destas transformações para se balancear 
// novamente a árvore.

// Seja uma árvore AVL T inicialmente regulada. Suponha que um nó q seja inserido em T. Se tal inserção 
// não provocou a desregulagem de nenhum nó de T, então nada precisa ser feito, pois a árvore permanece 
// AVL. No entanto, caso a inserção tenha provocado o desbalanceamento de T, precisaremos empregar as 
// transformações para regular os nós desregulados.

// Seja, então, o nó p desregulado mais próximo das folhas de T. Sabemos que p se encontra no caminho de 
// q até a raiz, pois do contrário ele não teria sido desregulado pela inserção de q.

// Usaremos He(p) e Hd(p) para representar respectivamente as alturas das subárvores esquerda e direita 
// de p. Como p se tornou desregulado, então sabemos que |He(p) - Hd(p)| = 2.

// Para sabermos qual transformação empregar, necessitamos avaliar as quatro a seguir:
// 1. A inserção ocorreu na subárvore esquerda do filho u esquerdo de p(He(p) > Hd(p) e He(u) > Hd(u)).
// Neste caso, He(u) - Hd(u) = 1, pois u não é desregulado e Hd(p) = Hd(u), pois p está desregulado. O 
// balanceamento pode, então, ser recuperado através de uma rotação à direita.
// 2. A inserção ocorreu na subárvore direita do filho u esquerdo de p(He(p) > Hd(p) e He(u) < Hd(u)).
// Neste caso, u também possui um filho v, tal que |He(v) - Hd(v)| = 1. Além disso, Hd(p) = He(u) = a 
// máximo{He(v), Hd(v)}. Para balancear a árvore, deve-se realizar uma rotação dupla à direita.
// 3. A inserção ocorreu na subárvore direita do filho z direito de p(He(p) < Hd(p) e He(z) < Hd(z).
// Neste caso, temos que Hd(z) - He(z) = 1 e He(p) = He(z). O balanceamento, então, pode ser feito 
// através de uma rotação à esquerda.
// 4. A inserção ocorreu na subárvore esquerda do filho z esquerdo de p(He(p) < Hd(p) e He(z) > Hd(z)).
// Neste caso, z possui um filho à esquerda y e as relações entre as alturas das subárvores de p, z e y 
// são análogas ao segundo caso. Logo, o balanceamento pode ser feito através de uma rotação dupla à esquerda.

// As árvores AVL são um importante exemplo de árvores balanceadas, mas não são as únicas árvores que 
// obedecem a este conceito. Entretanto, a compreensão do seu funcionamento é importante para fortalecer 
// os conceitos envolvidos no uso de árvores binárias de busca.
