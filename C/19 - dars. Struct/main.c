#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct odam {       // E'lon qilish
     char name[32];
     int age;
     float height;
     bool gender;
     float weight;
}odam;


typedef struct kitob {
     char nomi[30];
     char muallifi[30];
     int bet;
     float narxi;
     char janr[20];
}kitob;
 

int main () {
     // Struct chiqarish
     /*
     struct odam sOdam = {"Burxon", 16, 177.3, true, 56.6};
     odam sinson = {"Abdullox", 18, 175.3, true, 61.6};
     printf("Name   : %s\n", sOdam.name);
     printf("Age    : %d\n", sOdam.age);
     printf("Height : %.1f\n", sOdam.height);
     printf("Gender : ");
     if (sOdam.gender) {
          printf("Male\n");
     }else {
          printf("Female");
     }
     printf("Weight : %.1f\n", sOdam.weight);
     */

     // ex 1
     /*
     kitob first;
     printf("Nomi  : ");
     fgets(first.nomi, sizeof(first.nomi), stdin);
     first.nomi[strlen(first.nomi) - 1] = '\0';
     printf("Muallifi  : ");
     fgets(first.muallifi, sizeof(first.muallifi), stdin);
     first.muallifi[strlen(first.muallifi) - 1] = '\0';
     printf("Bet  : ");
     scanf("%d", &first.bet);
     printf("Narxi  : ");
     scanf("%f", &first.narxi);
     printf("Janri  : ");
     scanf("%s", first.janr);
     
     printf("\nNomi      : %s\n", first.nomi);
     printf("Muallifi  : %s\n", first.muallifi);
     printf("Bet       : %d\n", first.bet);
     printf("Narxi     : %.2f\n", first.narxi);
     printf("Janri     : %s\n", first.janr);
     */




     return 0;
}