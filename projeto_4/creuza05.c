#include <stdio.h>

void main ()
{
  float valor, juros, valor_final;
  int parcelas;

  printf("Informe qual o valor do emprestimo: ");
  scanf("%f", &valor);
  printf("Informe qual a quantidade de parcelas: ");
  scanf("%d", &parcelas);

  juros = (valor * 0.2);
  valor_final = valor + juros;

  printf("Valor final de %.2f R$", valor_final);
  printf("\n%dx de %.2f R$", parcelas, valor_final/parcelas);
}
