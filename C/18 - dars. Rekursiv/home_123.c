#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main () {
     // 1
     /*
     int n, toq = 0, juft = 0;
     scanf("%d", &n);
     for (int i = 0; i <= n; i++) {
          if (i % 2 == 0) {
               juft++;
          }else {
               toq++;
          }
     }
     printf("Juft: %d\nToq: %d\n", juft, toq);
     */


     // 2
     /*
     int a, b;
     scanf("%d %d", &a, &b);
     int juft[b - a], c = 0;
     for (; a < b; a++) {
          if (a % 2 == 0) {
               juft[c++] = a;
          }
     }
     for (int i = c - 3; i < c; i++) {
          printf("%d ", juft[i]);
     }
     */

    
     // 3
     /*
     int a, b;
     scanf("%d %d", &a, &b);
     int toq[b - a], c = 0;
     for (; a < b; a++) {
          if (a % 2 != 0) {
               toq[c++] = a;
          }
     }
     for (int i = 0; i < 3; i++) {
          printf("%d ", toq[i]);
     }
     */


     // 4
     /*
     int a, count = 0;
     scanf("%d", &a);
     for (int i = 2; i <= a / 2; i++) {
          if (a % i == 0) {
               count++;
          }
     }
     if (count > 0) {
          printf("Tub emas\n");
     }else {
          printf("Tub son\n");
     }
     */


     return 0;
}