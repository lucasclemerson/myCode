#include <stdio.h>

void main ()
{
  float valor_produto, valor_imposto;

  printf("Informe qual o valor do produto: ");
  scanf("%f", &valor_produto);

  valor_imposto = (valor_produto * 0.6);
  printf("O imposto de 60 porcento do produto é de %.2f R$", valor_imposto);

}
