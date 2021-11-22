#include <stdio.h>
#include <stdlib.h>

void soma(int *v1, int *v2, int *v3, int ne){

  for(int i = 0; i<ne; i++){
    v3[i] = v1[i] + v2[i];
  }
  }

int main(void) {
  int tamanho;
  int *vetor1,*vetor2, *vetorsoma;

  printf("Digite o tamanho do vetor:");
  scanf("%d",&tamanho);

  vetor1 = malloc(tamanho*sizeof(int));
  vetor2 = malloc(tamanho*sizeof(int));
  vetorsoma = malloc(tamanho*sizeof(int));
  
  // laço para gerar valores aleatórios para os vetores
  for (int z =0; z<tamanho; z++){
    vetor1[z] = rand() % 50;
    vetor2[z] = rand() % 50;
  }

  printf("seu vetor A:\n");
  for (int y =0; y<tamanho; y++){
    printf("vetor A[%d] = %d\n", y,vetor1[y]); 
  }

  printf("seu vetor B:\n");
  for (int y =0; y<tamanho; y++){
    printf("vetor B[%d] = %d\n", y,vetor2[y]); 
  }
  
  soma(vetor1,vetor2,vetorsoma,tamanho);
  
  printf("Vetor soma:\n");
  for (int a =0; a<tamanho; a++){
  printf("vetorsoma[%d] = %d \n",a,vetorsoma[a]);
  }

  return 0;
}