#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
  if ( *(float*)a <  *(float*)b ) return -1;
  if ( *(float*)a == *(float*)b ) return 0;
  if ( *(float*)a >  *(float*)b ) return 1;
}

int main(void) {
 int n; // quantidade de valores
 float *x;

 printf("digite a quantidade de valores:");
 scanf("%d", &n);

 x = malloc(n*sizeof(float));

for (int i = 0; i<n; i++){
   printf("digite o %dº valor:", i+1);
   scanf("%f",&x[i]);
}

qsort(x,n,sizeof(float),compare);

printf("Valores digitados em ordem crescente: \n");
for (int d = 0; d<n; d++){
   printf("%f \n", x[d]);
}

free(x);

return 0;
} 