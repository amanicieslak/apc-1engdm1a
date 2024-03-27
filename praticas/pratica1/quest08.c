/*
Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos)
*/

#include <stdio.h>
int main()
{

  int segundos;

  printf("Digite os segundos: ");
  int deu_certo = scanf("%i", &segundos);

  float horas = 1.0f * segundos / 3600;
  float minutos = segundos / 60;
  printf("O tempo em horas é %f\n", horas);
  printf("O tempo em minutos é %f\n", minutos);
  printf("O tempo em segundos é %i\n", segundos);


  return 0; 
}