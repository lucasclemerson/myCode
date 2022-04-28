#include <stdio.h>
#include <math.h>

void main ()
{
  int angulo;
  printf("Infome um valor de angulo:");
  scanf("%d", &angulo);

  float sen, cose, tang;

  sen = sin(angulo);
  cose = cos(angulo);
  tang = tan(angulo);

  printf("\nSEN: %.2f", sen);
  printf("\nCOS: %.2f", cose);
  printf("\nTAN: %.2f", tang);
}
