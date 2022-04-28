#include <stdio.h>

void main ()
{
  float c, f;


  printf("Informe qual a temperatura em faheirter: ");
  scanf("%f", &f);

  c = (f - 32) / 1.8;
  printf("\nSua temperatura em Celcios é de %.1f C°", c);
}
