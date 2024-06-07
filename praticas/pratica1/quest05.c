/*
Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
*/

#include <stdio.h> 
int main()  
{
float GB = 128.0f;
double bytes = pow(1024.0f, 3);

  const double GB_bytes = (GB * bytes);

  printf("O valor em bytes e %f\n", GB_bytes);

  return 0;
}