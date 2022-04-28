#include <stdio.h>

void main ()
{
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
}
