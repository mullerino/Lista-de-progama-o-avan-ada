#include <stdio.h>

int main(void) {
  char *x[4];
  char *x1;
  int *y[4];
  int *y1;
  float *z[4];
  float *z1;
  double *a[4];
  double *a1;

  x1 = &x;
  y1 = &y;
  z1 = &z;
  a1 = &a;

  printf("variável char:\n");
  printf("endereço= %X \n",x1+1);
  printf("endereço= %X \n",x1+2);
  printf("endereço= %X \n",x1+3);

  printf("variável int:\n");
  printf("endereço= %X \n",y1+1);
  printf("endereço= %X \n",y1+2);
  printf("endereço= %X \n",y1+3);

  printf("variável float:\n");
  printf("endereço= %X \n",z1+1);
  printf("endereço= %X \n",z1+2);
  printf("endereço= %X \n",z1+3);

  printf("variável double:\n");
  printf("endereço= %X \n",a1+1);
  printf("endereço= %X \n",a1+2);
  printf("endereço= %X \n",a1+3);

  return 0;
  }