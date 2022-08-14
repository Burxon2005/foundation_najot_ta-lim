#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main () {
     // 1
     /*
     srand(time(0));
     int n;    scanf("%d", &n);
     int arr[n];
     printf("Array = ");
     for (int i = 0; i < n; i++) {
          arr[i] = rand() % 38 - 12;
          printf("%d ", arr[i]);
     }
     puts("");
     for (int i = 0; i < n; i++) {
          if (arr[i] > 0) {
               printf("%d ", 1);
          }else {
               printf("%d ", 0);
          }
     }
     puts("");
     */


     // 2
     /*
     srand(time(0));
     int n;    scanf("%d", &n);
     int arr[n];
     printf("Array = ");
     for (int i = 0; i < n; i++) {
          arr[i] = rand() % 21 + 14;
          printf("%d ", arr[i]);
     }
     puts("");
     for (int i = 0; i < n; i++) {
          if (arr[i] % 2 == 0) {
               printf("%c ", '+');
          }else {
               printf("%d ", arr[i]);
          }
     }
     puts("");
     */


     // 3
     /*
     srand(time(0));
     int n;    scanf("%d", &n);
     int arr[n];
     printf("Array = ");
     for (int i = 0; i < n; i++) {
          arr[i] = rand() % 51 - 46;
          printf("%d ", arr[i]);
     }
     puts("");
     for (int i = 0; i < n; i++) {
          if (arr[i] % 2 != 0) {
               printf("%c ", ' ');
          }else {
               printf("%d ", arr[i]);
          }
     }
     puts("");
     */


     // 4
     /*
     srand(time(0));
     int n;    scanf("%d", &n);
     int arr[n], mus[n], man[n], nol[n], musC = 0, manC = 0, nolC = 0;
     printf("Array = ");
     for (int i = 0; i < n; i++) {
          arr[i] = rand() % 57 - 23;
          printf("%d ", arr[i]);
     }
     for (int i = 0; i < n; i++) {
          if (arr[i] > 0) {
               mus[musC++] = arr[i];
          }else if (arr[i] < 0) {
               man[manC++] = arr[i];
          }else {
               nol[nolC++] = arr[i];
          }
     }
     printf("\nMusbat: ");
     for (int i = 0; i < musC; i++) {
          printf("%d ", mus[i]);
     }
     
     printf("\t\tManfiy: ");
     for (int i = 0; i < manC; i++) {
          printf("%d ", man[i]);
     }
     printf("\t\tNol: ");
     for (int i = 0; i < nolC; i++) {
          printf("%d ", nol[i]);
     }
     puts("");
     */


     // 5
     /*
     srand(time(0));
     int n;    scanf("%d", &n);
     int arr[n], a;
     printf("Array = ");
     for (int i = 0; i < n; i++) {
          arr[i] = rand() % 57 - 23;
          printf("%d ", arr[i]);
     }
     a = arr[0];
     for (int i = 0; i < n; i++) {
          arr[i] = arr[i + 1];
     }
     puts("");
     arr[n - 1] = a;
     for (int i = 0; i < n; i++) {
          printf("%d ", arr[i]);
     }
     puts("");
     */


     return 0;
}