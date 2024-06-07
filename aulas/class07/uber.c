#include <stdio.h>
int main()
{
  int avaliacao;
  printf("Entre com uma avaliacao de 1 a 5: ");
  int deu_certo = scanf("%i", &avaliacao);

  // if (avaliacao == 1) {
  //   printf("Motorista ganhou: *\n")
  // } else if (avaliacao == 2) {
  //   printf("Motorista ganhou: **\n")
  // } else if (avaliacao == 3) {
  //   printf("Motorista ganhou: ***\n")
  // } else if (avaliacao == 4) {
  //   Pintf("Motorista ganhou: ****\n")
  // } else if (avaliacao == 5) {
  //   printf("Motorista ganhou: *****\n")
  // } else {
  //   printf("Avaliacao invalida\n")
  // }

switch (avaliacao){
  case 1: printf("Motorista ganhou: *\n");
    break;
  case 2: printf("Motorista ganhou: **\n");
    break;
  case 3: printf("Motorista ganhou: ***\n");
   break;
  case 4: printf("Motorista ganhou: ****\n");
    break;
  case 5:  printf("Motorista ganhou: *****\n");
    break;
  default: printf("Avaliacao invalida\n");
}
  return 0;
}