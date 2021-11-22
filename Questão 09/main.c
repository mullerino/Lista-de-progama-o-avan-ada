#include <stdio.h>

int main(void) {

  int vet[] = {4,9,13};
  int i;

  // Laço responsável por mostrar o conteúdo armazenado no endereço (vet+i)
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }
  // Laço responsável por mostrar o endereço de (vet+i)
  for(i=0;i<3;i++){
   printf("%X ",vet+i);
  }
}
