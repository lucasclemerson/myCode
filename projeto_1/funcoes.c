#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main ()
{
  float n1;

  printf("Informe o um número: ");
  scanf("%f", &n1);

  int inteiro;
  float expo, v_absoluto, raiz;

  expo = n1*n1;
  v_absoluto = abs(n1);
  inteiro = n1;
  raiz = sqrt(n1);


  printf("\nRAíZ DO NÚMERO: %f", raiz);
  printf("\nNÚMERO AO QUADRADO: %f", expo);
  printf("\nVALOR ABSOLUTO: %f", v_absoluto);
  printf("\nNÚMERO EM INTEIRO: %d", inteiro);

}
