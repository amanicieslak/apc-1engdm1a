/*
Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.
*/

#include <stdio.h>
int main()
{
int anos;
  printf("Digite os anos: ");
  int deu_certo = scanf("%i", &anos);

  float meses = anos * 12;
  float dias = anos * 365;

  printf("O tempo em meses é %f\n", meses);
  printf("O tempo em dias é %f\n", dias);

return 0;
}