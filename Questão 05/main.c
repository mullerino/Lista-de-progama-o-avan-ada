// Respostas obtidas comentadas ao longo do código

int main() {
int valor;
int *p1;
float temp;
float *p2;
char aux;
char *nome = "Ponteiros";
char *p3;
int idade;
int vetor[3];
int *p4;
int *p5;

/* (a) */
valor = 10;
p1 = &valor;
*p1 = 20;
printf("%d \n", valor); // impressão do valor 20.


/* (b) */
temp = 26.5;
p2 = &temp;
*p2 = 29.0;
printf("%.1f \n", temp); // impressão do valor 29.


/* (c) */
p3 = &nome[0];
aux = *p3;
printf("%c \n", aux); // impressão da letra p.


/* (d) */
p3 = &nome[4];
aux = *p3;
printf("%c \n", aux); // impressão da letra l.


/* (e) */
p3 = nome;
printf("%c \n", *p3);// impressão da letra p.


/* (f) */
p3 = p3 + 4;
printf("%c \n", *p3);// impressão da letra e.


/* (g) */
p3--;
printf("%c \n", *p3);// impressão da letra t.


/* (h) */
vetor[0] = 31;
vetor[1] = 45;
vetor[2] = 27;
p4 = vetor;
idade = *p4;
printf("%d \n", idade); // impressão do valor 31.


/* (i) */
p5 = p4 + 1;
idade = *p5;
printf("%d \n", idade);// impressão do valor 45.


/* (j) */
p4 = p5 + 1;
idade = *p4;
printf("%d \n", idade); // impressão do valor 27.


/* (l) */
p4 = p4 - 2;
idade = *p4;
printf("%d \n", idade);// impressão do valor 31.


/* (m) */
p5 = &vetor[2] - 1;
printf("%d \n", *p5);// impressão do valor 45.


/* (n) */
p5;// erro na escrita p5';
printf("%d \n", *p5); // impressão do valor 45.

return(0);
}
