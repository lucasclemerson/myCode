#include <stdio.h>
#define DOLAR 5


void main ()
{
  float real, dolares;
  printf("Informe qual o seu saldo em reais(R$): ");
  scanf("%f", &real);

  dolares = real * DOLAR;
  printf("\nVocê tem %.2f dolares", dolares);
}
