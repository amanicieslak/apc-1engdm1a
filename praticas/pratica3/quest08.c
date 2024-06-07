/*
8. Faça um programa em C que calcule o fatorial de um número inteiro.
*/

#include <stdio.h>
int main(void)
{
 long int numero, resultado = 1;
  printf("entre com o número: ");
  long int deu_certo = scanf("%li", &numero);
  if (!deu_certo) 
  {
    printf("numero invalido\n");
    return 0;
  }
    for (long int i = numero; i > 0; i--)
      {
    
      resultado = resultado * i;
    }
  printf("o fatorial: %li\n", resultado);
  }