#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define pi 3.14


void main ()
{
  float n1;

  printf("Informe o valor (n1): ");
  scanf("%f", &n1);


  int inteiro, achou_raiz;
  float expo, v_absoluto, raiz;

  expo = n1*n1;
  v_absoluto = abs(n1);
  inteiro = n1;

  achou_raiz = false;
  for (int i=0; i<=n1; i++)
  {
    if ((i * i) == n1)
    {
      achou_raiz = true;
      printf("\nRAíZ DO NÚMERO: %d", i);
    }
  }

  if (!achou_raiz)
  {
    printf("\nRAíZ DO NÚMERO: -1");
  }



  printf("\nNÚMERO AO QUADRADO: %f", expo);
  printf("\nVALOR ABSOLUTO: %f", v_absoluto);
  printf("\nNÚMERO EM INTEIRO: %d", inteiro);
  printf("\nPi: %f", pi);



  /*
  int n1, n2;
  int soma, divisao, multiplicacao, subtracao;

  printf("Informe o valor (n1): ");
  scanf("%d", &n1);
  printf("Informe o valor (n2): ");
  scanf("%d", &n2);


  soma = n1+n2;
  subtracao = n1-n2;
  divisao = n1/n2;
  multiplicacao = n1*n2;


  printf("\nSOMA; %d+%d = %d", n1,n2, soma);
  printf("\nSUBTRAÇÃO; %d-%d = %d", n1,n2, subtracao);
  printf("\nDIVISÃO; %d/%d = %d", n1,n2, divisao);
  printf("\nMULTIPLICAÇÃO; %d*%d = %d", n1,n2, multiplicacao);

  */



}
