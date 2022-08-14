#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main () {
     // 1
     /*
     srand(time(0));
     int n;    scanf("%d", &n);
     int arr[n], a;
     printf("Array = ");
     for (int i = 0; i < n; i++) {
          arr[i] = rand() % 30 - 5;
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


     // 2
     /*
     srand(time(0));
     int n;    scanf("%d", &n);
     int arr[n], a;
     printf("Array = ");
     for (int i = 0; i < n; i++) {
          arr[i] = rand() % 23 - 15;
          printf("%d ", arr[i]);
     }
     a = arr[n - 1];
     for (int i = n; i > 0; i--) {
          arr[i] = arr[i - 1];
     }
     puts("");
     arr[0] = a;
     for (int i = 0; i < n; i++) {
          printf("%d ", arr[i]);
     }
     puts("");
     */

     
     // 3
     /*
     srand(time(0));
     int n;    scanf("%d", &n);
     int arr[n], a, k;
     printf("Array = ");
     for (int i = 0; i < n; i++) {
          arr[i] = rand() % 29 + 8;
          printf("%d ", arr[i]);
     }
     printf("\nNechta surmoqchisiz: ");
     scanf("%d", &k);
     while (k) {
          a = arr[0];
          for (int i = 0; i < n - 1; i++) {
               arr[i] = arr[i + 1];
          }
          arr[n - 1] = a;
          k--;
     }
     for (int i = 0; i < n; i++) {
          printf("%d ", arr[i]);
     }
     puts("");
     */


     // 4
     /*
     srand(time(0));
     int n;    scanf("%d", &n);
     int arr[n], a, k;
     printf("Array = ");
     for (int i = 0; i < n; i++) {
          arr[i] = rand() % 81 - 11;
          printf("%d ", arr[i]);
     }
     printf("\nNechta surmoqchisiz: ");
     scanf("%d", &k);
     while (k) {
          a = arr[n - 1];
          for (int i = n - 1; i > 0; i--) {
               arr[i] = arr[i - 1];
          }
          arr[0] = a;
          k--;
     }
     for (int i = 0; i < n; i++) {
          printf("%d ", arr[i]);
     }
     puts("");
     */


     // 5
     /*
     srand(time(0));
     int n, m;
     scanf("%d %d", &n, &m);
     int arr[n][m];
     for (int i = 0; i < n; i++) {
          for (int j = 0; j < m; j++) {
               arr[i][j] = rand() % 10 + 1;
               printf("%-4d ", arr[i][j]);
          }
          printf("\n");
     }
     puts("");
     for (int i = 0; i < n; i++) {
          for (int j = 0; j < m; j++) {
               if (n - i - 1 == j) {
                    printf("%d ", arr[i][j]);
               }
          }
     }
     puts("");
     */


     // 6
     /*
     srand(time(0));
     int n, m;
     scanf("%d %d", &n, &m);
     int arr[n][m];
     for (int i = 0; i < n; i++) {
          for (int j = 0; j < m; j++) {
               arr[i][j] = rand() % 10 + 1;
               printf("%-4d ", arr[i][j]);
          }
          printf("\n");
     }
     puts("");
     for (int i = 1; i <= n; i++) {
          int sum = 0;
          for (int j = 0; j < m; j++) {
               sum += arr[i - 1][j];
          }
          printf("%d - qatorda: %d\n", i, sum);
     }
     */


     // 7
     /*
     srand(time(0));
     int n, m;
     scanf("%d %d", &n, &m);
     int arr[n][m];
     for (int i = 0; i < n; i++) {
          for (int j = 0; j < m; j++) {
               arr[i][j] = rand() % 10 + 1;
               printf("%-4d ", arr[i][j]);
          }
          printf("\n");
     }
     puts("");
     for (int i = 1; i <= n; i++) {
          int sum = 0;
          for (int j = 0; j < m; j++) {
               sum += arr[j][i - 1];
          }
          printf("%d - ustunda: %d\n", i, sum);
     }
     */


     // 8
     /*
     int n, m, max = 0;
     scanf("%d %d", &n, &m);
     int arr[n][m];
     for (int i = 0; i < n; ++i) {
          for (int j = 0; j < m; ++j) {
               arr[i][j] = rand() % 10 + 1;
               printf("%-4d", arr[i][j]);
          }
          printf("\n");
     }
     puts("");
     for (int i = 1; i <= n; ++i) {
          max = arr[i - 1][0];
          for (int j = 0; j < m; ++j) {
               if (max < arr[i - 1][j]) {
                    max = arr[i - 1][j];
               }
          }
          printf("%d - qator kottasi = %d ", i, max);
          puts("");
     }
     */


     // 9
     /*
     int n, m, max = 0;
     scanf("%d %d", &n, &m);
     int arr[n][m];
     for (int i = 0; i < n; ++i) {
          for (int j = 0; j < m; ++j) {
               arr[i][j] = rand() % 10 + 1;
               printf("%-4d", arr[i][j]);
          }
          printf("\n");
     }
     puts("");
     for (int i = 1; i <= n; ++i) {
          max = arr[0][i - 1];
          for (int j = 0; j < m; ++j) {
               if (max < arr[j][i - 1]) {
                    max = arr[j][i - 1];
               }
          }
          printf("%d - ustun kottasi = %d ", i, max);
          puts("");
     }
     */


     // 10
     /*
     srand(time(0));
     int n, qator, ustun, obshi;
     scanf("%d", &n);
     int arr[n][n];
     for(qator = 0; qator < n; qator++) {
          for(ustun = 0; ustun < n; ustun++) {
               arr[qator][ustun] = rand() % 10 + 1;
               printf("%-4d", arr[qator][ustun]);
          }
          printf("\n");
     }
     printf("\n");
     for(qator = 0; qator < n; qator++) {
          obshi = arr[qator][qator];
          arr[qator][qator] = arr[qator][n - qator - 1];
          arr[qator][n - qator - 1] = obshi;
     }
     puts("");
     for(qator = 0; qator < n; qator++) {
          for(ustun = 0; ustun < n; ustun++) {
               printf("%-4d", arr[qator][ustun]);
          }
          printf("\n");
     }
     */
    

     return 0;
}