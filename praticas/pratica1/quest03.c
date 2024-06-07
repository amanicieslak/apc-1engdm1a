/*
 Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/

#include <stdio.h>
#include <math.h>
int main()  
{
float raio = 23.2f;
  float PI = 3.1416f;

  const float perimetro = (2 * PI * raio);

  printf("O perimetro da pizza é %f\n", perimetro);
  

  return 0;
}