#include <stdio.h>

int main(void) {
  int mat[4], *p, x;

  p = mat + 1; // Expressão válida, p receberá o endereço da posição 2 do vetor mat[];
  p = mat;` // Expressão inválida, devido o acento
  p =`mat; // Expressão inválida, devido o acento
  x = (*mat); // Expressão válida, x receberá o conteúdo armazenado no endereço de mat[0].

}