/*
4. Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).
*/

#include <stdio.h>
int main()  
{
float base = 150.0f;
  float altura = 95.0f;
  float area = (base * altura); 
  float hectare = (area / 10000);
  
printf("A area e %f\n", hectare);


  return 0;
}