/*
 Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).
*/

#include <stdio.h>
int main()
{

  float valor_de_compra;
  float ano_de_fabricacao;
  float ano_de_depreciacao;

  printf("Digite o valor de compra: ");
  int deu_certo = scanf("%f.", &valor_de_compra);

  printf("Digite o ano de fabricacao: ");
  deu_certo = scanf("%f.", &ano_de_fabricacao);
  printf("Digite o ano de depreciacao: ");
  deu_certo = scanf("%f.", &ano_de_depreciacao);
  const float depreciacao = (ano_de_depreciacao - ano_de_fabricacao) * 0.01 * valor_de_compra;

  printf("O valor depreciado e %f\n", depreciacao);
  
return 0;  
}