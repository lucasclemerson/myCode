#include <stdio.h>
#include <math.h>


void main ()
{
  int a, b, c;

  printf("Informe os lados do seu triângulo");
  printf("\nValor (a): ");
  scanf("%d", &a);
  printf("Valor (b): ");
  scanf("%d", &b);
  printf("Valor (c): ");
  scanf("%d", &c);

  int eh_equilatero = (a==b && b==c);
  int eh_escaleno = (a!=b && b!=c && a!=c);
  int eh_triangulo = (a < b+c) && (b < a+c) && (c < a+b);

  printf("\né triângulo: %d", eh_triangulo);
  printf("\né equilatero: %d", eh_equilatero);
  printf("\né escaleno: %d", eh_escaleno);
}
