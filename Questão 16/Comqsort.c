#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
  if ( *(float*)a <  *(float*)b ) return -1;
  if ( *(float*)a == *(float*)b ) return 0;
  if ( *(float*)a >  *(float*)b ) return 1;
}

int main(void) {
clock_t Ticks[2];
int n; // quantidade de valores
float *x;

Ticks[0] = clock(); // inicio

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

Ticks[1] = clock();
double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
printf("Tempo gasto: %g ms.", Tempo);
getchar();

return 0;
}

// Utilizando a função qsort o tempo de execução do programa foi menor.