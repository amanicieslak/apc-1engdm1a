/*
Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
  */

#include <stdio.h>
int main()  
{
float base = 5.0f;
float altura = 13.0f;

  const float area = (base * altura) / 2.0f;

  printf("A area do triangulo é %f\n", area);

  return 0;
}