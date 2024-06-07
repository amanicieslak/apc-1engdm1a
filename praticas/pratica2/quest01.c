/*
1. Faça um programa em C que leia três números reais e imprima a média aritmética destes números.
*/

#include <stdio.h>
int main()
{
  float numero1 = 13.0f;
float numero2 = 17.0f;
  float numero3 = 20.0f;

  float media = (numero1 + numero2 + numero3) / 3;

  printf("A media e %f\n", media);

  return 0;

}