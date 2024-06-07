/*
Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).
*/

#include <stdio.h>

int main()
{

int numero;

printf("Digite um numero: ");
int deu_certo = scanf("%i", &numero);

  float unidade = numero % 10;
  float dezena = numero % 100;
  float centena = numero % 1000;
  float milhar = numero % 10000;

  printf("O numero tem %.f unidades\n", unidade);
  printf("O numero tem %.f dezenas\n", dezena);
  printf("O numero tem %.f centenas\n", centena);
  printf("O numero tem %.f milhares\n", milhar);

return 0;
}