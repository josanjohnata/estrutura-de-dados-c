// Método da bolha (Bubble Sort)
// Seja S = s₁, s₂, ..., s𝚗 uma sequência de números inteiros distintos. Uma forma de verificar 
// se a sequência S está ordenada é realizar o seguinte conjunto de operações: Para 1 ≤ i < n 
// verificar se sᵢ < sᵢ₊₁, caso isto ocorra, para todos os valores de i, a sequência está ordenada.

// Exemplo
// Por exemplo, para a sequência S = s₁ = 10, s₂ = 12, s₃ = 15, s₄ = 20, s₅ = 25, temos que s₁ < s₂, s₂ < s₃, s₄ < s₅. 
// Por esta razão, podemos afirmar que a sequência está ordenada.

// A ideia do método da bolha é explorar esta propriedade com o objetivo de ordenar o vetor.

// No exemplo acima, S = s₁ = 10, s₂ = 12, s₃ = 15, s₄ = 20, s₅ = 25, realizamos uma iteração, 
// ou seja, todas as comparações, e verificamos que a propriedade é válida para todo par de 
// elementos adjacentes. Isto garante a ordenação da sequência. De fato, se sᵢ < sᵢ₊₁ e sᵢ₊₁ < sᵢ₊₂ 
// então sᵢ < sᵢ₊₂ , ou seja, a comparação é transitiva e assim se garante que a relação é válida 
// para qualquer par da sequência sᵢ < sj, se i < j.

// O método da bolha explora esta propriedade realizando a troca de posição caso a comparação entre elementos 
// adjacentes falhe.
