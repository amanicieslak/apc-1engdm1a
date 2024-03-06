/*
Faça um programa em C que calcule a area de um triangulo (a = base x altura / 2). Considere base e altura numeros inteiros maior que 0.
  */

#include <stdio.h> 
int main()
{
  int base = 5;
  int altura = 7;

  int area = base * altura / 2;

  printf("A area do triangulo eh %i\n", area);

return 0;
}