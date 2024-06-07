#include <stdio.h>
int main()
{
int numero;
  int numero_valido = 0; 
  
while (numero_valido == 0){ 
printf("Entre com um numero de 1 a 10: ");
int deu_certo = scanf("%i", &numero);
  int numero_valido = numero >= 1 && numero <= 10;

  if (deu_certo && numero_valido)
  {
    printf("segue o jogo\n"); 
  }
else 
  {
    getchar();
    printf("numero invalido, tente de novo\n");
    
  }
}
  do
  { 
  printf("Entre com um numero de 1 a 10: ");
  int deu_certo = scanf("%i", &numero);
    int numero_valido = numero >= 1 && numero <= 10;

    if (deu_certo && numero_valido)
    {
      printf("segue o jogo\n"); 
    }
  else 
    {
      getchar();
      printf("numero invalido, tente de novo\n");

    }
} 
    while (numero_valido == 0);

  return 0;
}
