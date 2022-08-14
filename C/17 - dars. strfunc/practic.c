#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main () {
     // 1
     /*
     char txt[100];
     scanf("%[^\n]s", txt);
     for (int i = strlen(txt) - 1; i >= 0; i--) {
          if (isspace(txt[i])) {
               txt[i] = '\0';
               printf("%s ", &(txt[i]) + 1);
          }
     }
     printf("%s ", txt);
     puts(" ");
     */


     // 2      // Xatooooo
     char soat[10], minut[10], *ptr, f_s[10];
     int isoat = 0, iminut = 0;
     printf("Toshkendan -> Xorazmgacha\nNechi soatda yetib boradi: ");
     scanf("%s", f_s);
     printf("Nechi minutda yetib boradi: ");
     scanf("%s", minut);
     isoat = strtol(soat, &ptr, strlen(soat));
     
     printf("%d\n", isoat);
     


    

     return 0;
}