/*
Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
  */

#include <stdio.h>
int main()  
{
 float preco_inicial = 78.95f;
  float ICMS = 0.17f;
float COFINS = 0.076f;
  float PIS_PASEP = 0.0165f;

  const float preco_final = ((1 + ICMS + COFINS + PIS_PASEP) * preco_inicial);

printf("O preco final e %f\n", preco_final);
  
  return 0;
}