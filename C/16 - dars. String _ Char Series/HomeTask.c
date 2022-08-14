#include <stdio.h>
#include <string.h>

int main () {
     // K 11
     /*
     char txt[50];
     fgets(txt, 50, stdin);
     for (int i = 0; txt[i] != '\n'; i++) {
          if (isupper(txt[i])) {
               txt[i] = tolower(txt[i]);
          }
     }
     printf("%s\n", txt);
     */


     // K 12
     /*
     char txt[50];
     fgets(txt, 50, stdin);
     for (int i = 0; txt[i] != '\n'; i++) {
          if(islower(txt[i])) {
               txt[i] = toupper(txt[i]);
          }
     }
     printf("%s\n", txt);
     */
     

     // K 13
     /*
     char txt[50];
     fgets(txt, 50, stdin);
     for (int i = 0; txt[i] != '\n'; i++) {
          if(islower(txt[i])) {
               txt[i] = toupper(txt[i]);
          }else if (isupper(txt[i])) {
               txt[i] = tolower(txt[i]);
          }
     }
     printf("%s\n", txt);
     */


     // K 14
     /*
     char txt[50];
     fgets(txt, 50, stdin);
     for (int i = 0; txt[i] != '\n'; i++) {
          if (isupper(txt[i])) {
               printf("*");
          }else {
               printf("%c", txt[i]);
          }
     }
     */


     // K 15
     /*
     char txt[50];
     fgets(txt, 50, stdin);
     for (int i = 0; txt[i] != '\n'; i++) {
          if (islower(txt[i])) {
               printf("*");
          }else {
               printf("%c", txt[i]);
          }
     }
     */



     return 0;
}