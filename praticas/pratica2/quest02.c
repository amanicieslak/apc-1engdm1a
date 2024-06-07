/*
2. Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.
*/

#include <stdio.h>
int main()
{
  int numero1 = 25;
  int numeor2 = 5;

  int quociente = (numero1 / numeor2);
  int resto = (numero1 % numeor2);

  printf("O quociente e %i\n", quociente);
  printf("O resto e %i\n", resto);

  return 0;
}