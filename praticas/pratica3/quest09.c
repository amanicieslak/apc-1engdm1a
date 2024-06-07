/*
9. Faça um programa em C que leia números inteiros até ler zero, e imprima o maior e o menor entre eles.
*/
#include <stdio.h>
int main (void)
{
int numero = 1;
int maior = 0;
int menor = 0;
  
  while (numero != 0)
    {
      printf("Entre com um numero: ");
      int deu_certo = scanf("%i", &numero);
    
  if(!deu_certo) 
  {
    getchar();
    printf("numero invalido, tente novamente\n");
  }
  if (numero > maior) 
  {
    maior = numero;
  }
  if (numero < menor)
  {
  menor = numero;
  }
    }
  printf("o maior e o menor numero são: %i %i\n", maior, menor);
}
