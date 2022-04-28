#include <stdio.h>

void main ()
{
  int idade;
  int ano_nascimento, ano_atual;


  printf("Informe qual o seu ano de nascimento: ");
  scanf("%d", &ano_nascimento);
  printf("Informe qual o ano em que estamos: ");
  scanf("%d", &ano_atual);

  idade = ano_atual - ano_nascimento;
  printf("\nVocê tem %d anos", idade);
}
