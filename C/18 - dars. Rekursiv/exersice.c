#include <stdio.h>
#include <string.h>


int a = 0;     // L 1
int room(int n) {
     if (n != 0) {
          a++;
          room(n / 10);
     }
     return a;
}


void toq (int n) {   // L 2
     if (n > 0) {
          toq(n - 1);
          if (n % 2 != 0) {
               printf("%d ", n);
          }
     }
}

void juft (int n) {      // L 3
     if (n > 1) {
          if (n % 2 == 0) {
               printf("%d ", n);
          }
          juft(n - 1);
     }
}

int b = 0;     // L 4
int poW(int n, int m) {
     if (m < 1) {
          return 1;
     }
     return n * poW(n, m-1);
}



int main () {
     // L 1
     /*
     int n;    scanf("%d", &n);
     printf("%d\n",room(n));
     puts("");
     */


     // L 2
     /*
     int n; scanf("%d", &n);
     toq(--n);
     */

     
     // L 3
     /*
     int n; scanf("%d", &n);
     juft(n);
     */


     // L 4
     /*
     int n, m; scanf("%d %d", &n, &m);
     printf("%d\n", poW(n, m));
     */

    

     return 0;
}