#include <stdio.h>
int main()
{
  float nota1;
  float nota2;

printf("Entre com a primeira nota: ");
  int deu_certo = scanf("%f", &nota1);

  int nota1_eh_valida = nota1 >= 0.0f && nota1 <= 10.0f;
  
  if (nota1_eh_valida) {

    printf("Entre com a segunda nota: ");
    deu_certo = scanf("%f", &nota2);
    
  }
    else{

printf("Nota inválida, informe um valor entre 0.0 e 10.0\n");
      
    }

  int nota2_eh_valida = nota2 >= 0.0f && nota2 <= 10.0f;
  if (nota2_eh_valida) {
 float media = 0.4 * nota1 + 0.6 * nota2;

    printf("A média IESB é %.1f\n", media);
  }
  else {
    printf("Nota inválida, informe um valor entre 0.0 e 10.0\n");
  }
  
    return 0;
}