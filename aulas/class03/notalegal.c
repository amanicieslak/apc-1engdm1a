#include <stdio.h>

int main()
{
printf("\x1b[35m---------------------------------\n");
printf("        N O T A  L E G A L       \n");
printf("-----------------------------------\x1b[0m\n");
printf("    ITEM        QTD      VALOR   \n");
printf("%-15s %03i %10.2f\n", "Banana nanica", 2,20.0);
printf("%-15s %03i %10.2f\n", "Uva globo", 1, 15.0);
printf("%-15s %03i %10.2f\n", "Laranja lima", 1, 18.00);
// printf("Banana Nanica    2          20.00\n");
// printf("Uva globo        1          15.00\n");
// printf("Laranja Lima     1          18.00\n");
// printf("---------------------------------\n");
printf("TOTAL:                   53.00\n");
  
return 0;
}
