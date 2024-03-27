/*
 Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
*/
#include <stdio.h>
#include <math.h>

int main()
{

int distancia;
int angulo;

printf("Digite a distancia percorrida: ");
  int deu_certo = scanf("%i", &distancia);
printf("Digite o angulo: ");
  deu_certo = scanf("%i", &angulo);
  

  float PI = 3.14159265358979323846;
double altura = sin(angulo * (PI / 180)) * distancia;
printf("A altura alcancada é %f\n", altura);

return 0;
}