/*
 Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).
*/

#include <stdio.h>
#include <math.h>
int main()  
{
  float x1;
  float y1;
  float x2;
  float y2;

  printf("Digite o x1: ");
  int deu_certo = scanf("%f", &x1);
  printf("Digite o y1: ");
  deu_certo = scanf("%f", &y1);
  printf("Digite o x2: ");
  deu_certo = scanf("%f", &x2);
  printf("Digite o y2: ");
  deu_certo = scanf("%f", &y2);

  float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  
printf("A distancia entre os pontos e %f\n", distancia);

  return 0;
}