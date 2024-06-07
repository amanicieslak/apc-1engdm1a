#include <stdio.h>
int manin()
{
int numero;

    printf("Digite um número entre 1 e 10: ");
  int leu_certo = scanf("%i", &numero);
  printf("A tabuada de %i\n", numero);
  if (leu_certo && numero < 0 && numero < 11);
    for (int i=1; i<=10; i++){
      printf("i% x %i = %i\n", i, numero, i * numero);
  }
  // printf("A tabuada de %i é:\n", numero);
  //   printf("1 x %i = %i\n", numero, 1 * numero")
  //        printf("2 x %i = %i\n", numero, 2 * numero")
  //        printf("3 x %i = %i\n", numero, 3 * numero")
  //        printf("4 x %i = %i\n", numero, 4 * numero")
  //        printf("5 x %i = %i\n", numero, 5 * numero")
  //        printf("6 x %i = %i\n", numero, 6 * numero")
  //        printf("7 x %i = %i\n", numero, 7 * numero")
  //     printf("8 x %i = %i\n", numero, 8 * numero")
  //   printf("9 x %i = %i\n", numero, 9 * numero")
  // printf("10 x %i = %i\n", numero, 10 * numero")
  

  return 0;
}