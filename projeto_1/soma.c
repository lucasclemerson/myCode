#include <stdio.h>

void main ()
{
  int n1, n2, soma;
  printf("Informe o valor (n1): ");
  scanf("%d", &n1);
  printf("Informe o valor (n2): ");
  scanf("%d", &n2);
  soma = n1+n2;
  printf("\nA soma de %d + %d = %d", n1,n2, soma);
}
