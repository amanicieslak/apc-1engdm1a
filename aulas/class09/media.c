#include <stdio.h>
#include <stdlib.h>
int main (void)
{
int numeros[10];
numeros[0] = 1;
numeros[8] = 5;
int soma = 0;
for (int i=0; i<10; i++)
{
printf("Entre com o %io numero: ", i + 1);
int deu_certo = scanf("%i", &numeros[i]);
  soma = soma + numeros[i];
}

  float media = soma / 10.0f;
  printf("A media de ");
  for (int i=0; i<10; i++)
    {
    printf("%i +", numeros[i]);
      
    }
  printf(" é %f\n", media);
  return 0;
}