#include <stdio.h>
#include <math.h>

void main ()
{
  int n1, n2;
  printf("Informe o primeiro número:");
  scanf("%d", &n1);
  printf("Informe o segundo número:");
  scanf("%d", &n2);

  ////// operadores
  printf("\nO número %d é igual a %d: %d", n1, n2, (n1==n2));
  printf("\nO número %d é diferente de %d: %d", n1, n2, (n1!=n2));
  printf("\nO número %d é maior que %d: %d", n1, n2, (n1>n2));
  printf("\nO número %d é maior ou igual que %d: %d", n1, n2, (n1>=n2));
  printf("\nO número %d é menor que %d: %d", n1, n2, (n1<n2));
  printf("\nO número %d é menor ou igual que %d: %d", n1, n2, (n1<=n2));







}
