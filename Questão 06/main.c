int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;// f recebe o endereço de vet[0]

  printf("contador/valor/valor/endereco/endereco");

  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d",i);
  printf("vet[%d] = %.1f",i, vet[i]);
  printf("*(f + %d) = %.1f",i, *(f+i));
  printf("&vet[%d] = %X",i, &vet[i]);
  printf("(f + %d) = %X",i, f+i);
  }
  
}

/*
Os resultados obtidos foram:
Para i=0;
vet[0] = 1.1;
(f+0) = 1.1;
&vet[0] = 7A73E590;
(f+0) = 7A73E590;

Para i=1;
vet[1] = 2.2;
(f+1) = 2.2;
&vet[1] = 7A73E594;
(f+1) = 7A73E594;

Para i=2;
vet[2] = 3.3;
(f+2) = 3.3;
&vet[2] = 7A73E598;
(f+2) = 7A73E598;

Para i=3;
vet[3] = 4.4;
(f+3) = 4.4;
&vet[3] = 7A73E59C;
(f+3) = 7A73E59C;

Para i=4;
vet[4] = 5.5;
(f+4) = 5.5;
&vet[4] = 7A73E5A0;
(f+4) = 7A73E5A0;
*/