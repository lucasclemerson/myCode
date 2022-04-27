#include <stdio.h>

void main ()
{
  int n1, n2, media;
  printf("Informe o valor (n1): ");
  scanf("%d", &n1);
  printf("Informe o valor (n2): ");
  scanf("%d", &n2);
  media = (n1+n2)/2;
  printf("\nA média de %d e %d = %d", n1,n2, media);
}
