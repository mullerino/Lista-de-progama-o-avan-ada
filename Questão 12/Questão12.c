#include <stdio.h>

//função para realizar a contagem do intervalo
void contar (int a, int b){
  for (int i = a;i<=b;i++){
    printf("%d",i);
  }
  }

int main(void) {
  void (*conte)(int,int) = &contar; // o ponteiro para void que retorna dois valores inteiros recebe o endereço da função contar.
  int c,d;
  printf("Digite o intervalo de numeros que você deseja contar: \n");
  scanf("%d \n", &c);
  scanf("%d", &d);

  (*conte)(c,d);

  return 0;
}