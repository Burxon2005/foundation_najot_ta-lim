#include<stdio.h>
#include<string.h>

int main() {
     // K 31
     /*
     char string[100], max_word[30];
     int count = 0, max = 0,j,index=0;
     printf("Gap kiriting : ");
     scanf("%[^\n]s", string);
     index = 0;
     for(int i = 0 ; i < strlen(string) ; i++) {
          if(string[i] != ' ') {
               count++;
          }
          else {
               if(count > max) {
                    max = count;
                    index = i - max;
               }
               count = 0;
          }
     }
     if(count > max){
          max = count;
          index = strlen(string) - max;
     }
     j=0;
     for(int i = index; i < index + max; i++){
          max_word[j] = string[i];
          j++;
     }
     max_word[j] = '\0';
     printf("%s\n", max_word);
     */


     // K 32
     /*
     char user_text[100], short_text[30];
     int count = 0, min, j,index=0,length;
     printf("Gap kiriting : ");
     scanf("%[^\n]s", user_text);
     length = strlen(user_text);
     index=0;
     min = 100; 
     for (int i = 0 ; i < length ; i++) {
          if(user_text[i] != ' ') {
          count++;
          } else {
          if(count < min) {
          min = count;
          index = i - min;
          }
          count = 0;
          }
     }
     if (count < min) {
          min = count;
          index = length - min;
     }
     j = 0;
     for(int i = index; i < index + min ; i++) {
          short_text[j] = user_text[i];
          j++;
     }
     printf("%s\n", short_text);
     */


     // K 33
     /*
     char name[20], lName[20], y_nam[20] = {};
     printf("Ismni kiriting: ");
     scanf("%s", name);
     printf("Familyani kiriting: ");
     scanf("%s", lName);
     int count_n = 0;
     for (int i = 0; i < strlen(name) / 2 ; i++) {
          y_nam[count_n++] = name[i];
     }
     strcpy(lName + (strlen(lName)/2), y_nam);
     printf("Familiya: %s\n", lName);
     */


     // K 34
     /*
     char name[20], lName[20], y_nam[20] = {};
     printf("Ismni kiriting: ");
     scanf("%s", name);
     printf("Familyani kiriting: ");
     scanf("%s", lName);
     int count_n = 0;
     for (int i = strlen(name) / 2; i <= strlen(name); i++) {
          y_nam[count_n++] = name[i];
     }
     for (int i = 0; i < strlen(lName) / 2; i++) {
          lName[i] = y_nam[i];
     }
     printf("Familiya: %s\n", lName);
     */


     // K 35
     /*
     char t[1000] = {};
     char t1[1000];
     int f = 0;

     while( strcmp(t1, "stop")){
          scanf(" %s" ,t1);
          strcat(t, t1);
          strcat(t, " ");
          f++;
          if ( f % 5 == 0)  {
               strcat(t, ". ");
          }
     }
     printf("%s \n" , t);
     */


     return 0;
}