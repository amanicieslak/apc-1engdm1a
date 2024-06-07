#include <stdio.h>
int main ()
{
  int opcao = 0;
  do
  { 
  int leu_certo = system ("clear");
printf("MEU JOGO\n");
printf("1 Iniciar\n");
printf("2 Resultado\n");
printf("3 Ajuda\n");
printf("4 Sair\n");
printf("Escolha uma opção: ");
 leu_certo = scanf("%i", &opcao);
    if (!leu_certo) opcao = 0;
  while(getchar() != '\n'); //limpar buffer
    
   switch(opcao) 
     {
       case 1: {
         leu_certo = system("clear");
        char nome[31];
         printf("Entre com o nome do jogador: ");
         leu_certo = scanf("%30[^\n]", nome);
         while (getchar() != '\n');
         printf("Ola %s\n", nome);
         printf("Pressione ENTER para continuar...");
         getchar();
         break;
       }
       case 2:
         {
            leu_certo = system("clear");
           printf("Resultado\n");
           printf("1º LUGAR - Amani   - 10 pontos\n");
           printf("2º LUGAR - Nycloas - 08 pontos\n");
           printf("3º LUGAR - Ana     - 07 pontos\n");
           printf("Pressione ENTER p/ voltar");
           getchar();
          break;
         }
       case 3: break;
       case 4: break;
       default:
         opcao = 0;
       printf("Opcao invalida! Pressione ENTER p/ continuar\n");
       getchar();
     }
} while (opcao != 4);
return 0;
}