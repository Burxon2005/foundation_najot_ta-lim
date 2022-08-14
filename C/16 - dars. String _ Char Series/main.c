#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
     // Stringda unli harflani chiqarish
     /*
     char text[50] = "Assalomu alekum, Najot ta'limga xush kelibsiz!";
     for (int i = 0; i < 50; ++i) {
          if (text[i] == 97 || text[i] == 'e' || text[i] == 105 || text[i] == 111 || text[i] == 117) {
               printf("%c ", text[i]);
          }
     }
     */

     // K 1  ???


     // K 2
     /*
     char txt[50];
     scanf("%s", txt);
     int undosh = 0;
     for (int i = 0; txt[i] != '\0'; ++i) {
          if ((txt[i] >= 66 && txt[i] <= 68) || (txt[i] >= 70 && txt[i] <= 72) || (txt[i] >= 74 && txt[i] <= 78) || (txt[i] >= 80 && txt[i] <= 84) || (txt[i] >= 86 && txt[i] <= 90) || (txt[i] >= 98 && txt[i] <= 100) || (txt[i] >= 102 && txt[i] <= 104) || (txt[i] >= 106 && txt[i] <= 110) || (txt[i] >= 112 && txt[i] <= 116) || (txt[i] >= 118 && txt[i] <= 122)) {
               undosh++;
          }
     }
     printf("%d\n", undosh);
     */


     // K 3
     /*
     char txt[50] = "Salom";
     for (int i = 0; i < 50; ++i) {
          if (isalpha(txt[i]) && txt[i] == 'a' || txt[i] == 'e' || txt[i] == 'u' || txt[i] == 'i' || txt[i] == 'o') {
               printf("%c%c", txt[i], txt[i]);
          }else {
               printf("%c", txt[i]);
          }
     }
     puts("");
     */


     // K 4
     /*
     char txt[20], *ar;
     scanf("%s", txt);
     for (int i = 0; i < strlen(txt); i++) {
          if (txt[i] == txt[strlen(txt) - i - 1]) {
               ar = "URA";
          }else {
               ar = "KUKU";
          }
     }
     printf("%s\n", ar);
     */


     // K 5
     /*
     char txt[50];
     scanf("%s", txt);
     int let = 0;
     for (int i = 0; txt[i] != '\0'; i++) {
          if (isalpha(txt[i])) {
               let++;
          }
     }
     printf("%d\n", let);
     */


     // K 6
     /*
     char txt[50];
     scanf("%s", txt);
     int num = 0;
     for (int i = 0; txt[i] != '\0'; i++) {
          if(isdigit(txt[i])) {
               num++;
          }
     }
     printf("%d\n", num);
     */


     // K 7
     /*
     char txt[50];
     fgets(txt, 50, stdin);
     int probel = 0;
     for (int i = 0; txt[i] != '\n'; i++) {
          if(isspace(txt[i])) {
               probel++;
          }
     }
     printf("%d\n", probel);
     */
     // K 8
     /*
     char txt[50];
     scanf("%s", txt);
     int num = 0;
     for (int i = 0; txt[i] != '\0'; i++) {
          if(isdigit(txt[i]) || isalpha(txt[i])) {
               num++;
          }
     }
     printf("%d\n", num);
     */


     // K 9
     /*
     char txt[50];
     fgets(txt, 50, stdin);
     int let = 0;
     for (int i = 0; txt[i] != '\0'; i++) {
          if(isupper(txt[i])) {
               let++;
          }
     }
     printf("%d\n", let);
     */


     // K 10
     /*
     char txt[50];
     fgets(txt, 50, stdin);
     int let = 0;
     for (int i = 0; txt[i] != '\0'; i++) {
          if(islower(txt[i])) {
               let++;
          }
     }
     printf("%d\n", let);
     */


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


     // K 16
     /*
     char txt[50], count = 0;
     fgets(txt, 50, stdin);
     int a = 0, b = 0;
     for (int i = 0; txt[i] != '\n'; i++) {
          if (txt[i] == '0' || txt[i] == '1' || txt[i] == '2' || txt[i] == '3' || txt[i] == '4' || txt[i] == '5' || txt[i] == '6' || txt[i] == '7' || txt[i] == '8' || txt[i] == '9') {
               break;
          }
          a++;
     }
     for (int i = 0; txt[i] != '\n'; i++) {
          if (txt[i] == '0' || txt[i] == '1' || txt[i] == '2' || txt[i] == '3' || txt[i] == '4' || txt[i] == '5' || txt[i] == '6' || txt[i] == '7' || txt[i] == '8' || txt[i] == '9') {
               b = txt[i];
          }
     }
     for (int i = a + 1; txt[i] != '\n' ; i++) {
          if (txt[i] == b) {
               break;
          }
          printf("%c", txt[i]);
     }
     puts("");
     */


     // K 17
     /*
     char txt[50], count = 0;
     fgets(txt, 50, stdin);
     int a = 0, b = 0;
     for (int i = 0; txt[i] != '\n'; i++) {
          if (txt[i] >= 'A' && txt[i] <= 'Z') {
               break;
          }
          a++;
     }
     for (int i = 0; txt[i] != '\n'; i++) {
          if (txt[i] >= 'A' && txt[i] <= 'Z') {
               b = txt[i];
          }
     }
     for (int i = a + 1; txt[i] != '\n' ; i++) {
          if (txt[i] == b) {
               break;
          }
          printf("%c", txt[i]);
     }
     puts("");
     */


     // K 18
     /*
     char txt[50], count = 0;
     fgets(txt, 50, stdin);
     int a = 0, b = 0;
     for (int i = 0; txt[i] != '\n'; i++) {
          if (txt[i] >= 'a' && txt[i] <= 'z') {
               break;
          }
          a++;
     }
     for (int i = 0; txt[i] != '\n'; i++) {
          if (txt[i] >= 'a' && txt[i] <= 'z') {
               b = txt[i];
          }
     }
     for (int i = a + 1; txt[i] != '\n' ; i++) {
          if (txt[i] == b) {
               break;
          }
          printf("%c", txt[i]);
     }
     puts("");
     */


     // K 19
     /*
     char txt[50], count = 0;
     fgets(txt, 50, stdin);
     int a = 0, b = 0;
     for (int i = 0; txt[i] != '\0'; i++) {
          if (isupper(txt[i])) {
               break;
          }
          a++;
     }
     for (int i = 0; txt[i] != '\0'; i++) {
          if (islower(txt[i])) {
               b = txt[i];
               break;
          }
          
     }
     for (int i = a + 1; txt[i] != '\0' ; i++) {
          if (txt[i] == b) {
               break;
          }
          printf("%c", txt[i]);
     }
     puts("");
     */


     // K 20
     /*
     char txt[50], count = 0;
     fgets(txt, 50, stdin);
     int a = 0, b = 0;
     for (int i = 0; txt[i] != '\0'; i++) {
          if (isalnum(txt[i])) {
               break;
          }
          a++;
     }
     for (int i = 0; txt[i] != '\0'; i++) {
          if (islower(txt[i])) {
               b = txt[i];
               break;
          }
          
     }
     for (int i = a + 1; txt[i] != '\0' ; i++) {
          if (txt[i] == b) {
               break;
          }
          printf("%c", txt[i]);
     }
     puts("");
     */


     // K 21
     /*
     char txt[50], count = 0;
     fgets(txt, 50, stdin);
     int a = 0, b = 0;
     for (int i = 0; txt[i] != '\0'; i++) {
          if (isalnum(txt[i])) {
               break;
          }
          a++;
     }
     for (int i = 0; txt[i] != '\0'; i++) {
          if (isupper(txt[i])) {
               b = txt[i];
               break;
          }
          
     }
     for (int i = a + 1; txt[i] != '\0' ; i++) {
          if (txt[i] == b) {
               break;
          }
          printf("%c", txt[i]);
     }
     puts("");
     */


     // K 22
     /*
     char txt[50], count = 0;
     fgets(txt, 50, stdin);
     int a = 0, b = 0;
     for (int i = 0; txt[i] != '\n'; i++) {
          if (isalnum(txt[i])) {
               break;
          }
          a++;
     }
     for (int i = 0; txt[i] != '\n'; i++) {
          if (isspace(txt[i])) {
               b = txt[i];
               break;
          }
          
     }
     for (int i = a + 1; txt[i] != '\n' ; i++) {
          if (txt[i] == b) {
               break;
          }
          printf("%c", txt[i]);
     }
     puts("");
     */


     // K 23
     /*
     char txt[50], count = 0;
     fgets(txt, 50, stdin);
     int a = 0, b = 0;
     for (int i = 0; txt[i] != '\0'; i++) {
          if (isupper(txt[i])) {
               break;
          }
          a++;
     }
     for (int i = 0; txt[i] != '\0'; i++) {
          if (islower(txt[i])) {
               b = txt[i];
          }
          
     }
     for (int i = a + 1; txt[i] != '\0' ; i++) {
          if (txt[i] == b) {
               break;
          }
          printf("%c", txt[i]);
     }
     puts("");
     */
    


     return 0;
}