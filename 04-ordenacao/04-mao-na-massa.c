// Mão na Massa
// Por exemplo, seja a sequência com números de três dígitos: 005, 235, 014, 236, 423, 456, 890.
// - Etapa 01
// Na primeira iteração, analisamos a ordem mais significativa, que é a centena, separando os números por centena.
// Centena 0: 005, 014
// Centena 1: -
// Centena 2: 235, 236
// Centena 3: -
// Centena 4: 423, 456
// Centena 5: -
// Centena 6: -
// Centena 7: -
// Centena 8: 890
// Centena 9: -
// - Etapa 02
// Para cada centena, separamos por dezena:
// Centena 0:
//   Dezena 0: 005
//   Dezena 1: 014
// Centena 2:
//   Dezena 3: 235, 236
// Centena 4:
//   Dezena 2: 423
//   Dezena 5: 456
// Centena 8:
//   Dezena 9: 890
// - Etapa 03
// Centena 0:
//   Dezena 0:
//     Unidade 5: 005
//   Dezena 1:
//     Unidade 4: 014
// Centena 2:
//   Dezena 3:
//     Unidade 5: 235
//     Unidade 6: 236
// Centena 4:
//   Dezena 2:
//     Unidade 3: 423
//   Dezena 5:
//     Unidade 6: 456
// Centena 8:
//   Dezena 9:
//     Unidade 0: 890

// Concatenando tudo na ordem (de cima para baixo): 005, 014, 235, 236, 423, 456, 890.

// Alguns autores citam a complexidade deste algoritmo como O(n). A argumentação é que, como a quantidade 
// de dígitos k é conhecida e constante, e para cada ordem numérica percorremos a sequência a ser ordenada 
// uma vez, temos k * n que representa uma complexidade de O(n).

// Entretanto, k é a quantidade máxima de dígitos do número e a função matemática que fornece a quantidade 
// de dígitos de um número em base 10 é log (n). Por esta razão, alguns autores citam este algoritmo com 
// complexidade O(n log n).
