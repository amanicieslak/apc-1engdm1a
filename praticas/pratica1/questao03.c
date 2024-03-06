/*
Faça um programa em C que calcule os impostos incluidos no preço do produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP iguala 1,65%.
*/

  #include <stdio.h>

  int main()
  {
  float preco_inicial = 100.0f;
  float preco_final = 0.0f;
  const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PIS_PASEP = 0.0165f;

    float valor_imposto_icms = ICMS * preco_inicial;
    float valor_imposto_cofins = COFINS * preco_inicial;
    float valor_imposto_pis_pasep = PIS_PASEP * preco_inicial;

  preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;

  printf("Preço inicial = %f\n", preco_inicial);
    printf("Preço inicial = %f\n", valor_imposto_icms);
    printf("Preço inicial = %f\n", valor_imposto_cofins);
    printf("Preço inicial = %f\n", valor_imposto_pis_pasep);
    printf("Preço inicial = %f\n", preco_final);
    
    return 0;
  }