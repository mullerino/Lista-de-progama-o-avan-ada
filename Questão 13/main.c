#include <stdio.h>
#include <stdlib.h>

int main(void) {
 int n; // quantidade de valores
 float *x;
 float aux;

 printf("digite a quantidade de valores:");
 scanf("%d", &n);

 x = malloc(n*sizeof(float));

for (int i = 0; i<n; i++){
   printf("digite o %dº valor:", i+1);
   scanf("%f",&x[i]);
}

for (int a =0; a<n; a++){
  for(int b=0; b<n; b++){
    if(a==0){
      if(x[a] > x[b]){
        aux = x[b];
        x[b]= x[a];
        x[a]=aux;
      }
    }
    else {
      if((x[a] < x[b]) && (x[a] < x[a-1]) ){
        aux = x[b];
        x[b]= x[a];
        x[a]=aux;
      }
    }
    }
  }

printf("Valores digitados em ordem crescente: \n");
for (int d = 0; d<n; d++){
   printf("%f \n", x[d]);
}

free(x);

return 0;
} 