#include <stdio.h>
#include <string.h>

void show (int n) {
     /*   1 2 3 4 5
     if (n > 1) {
          show(n - 1);
     }
     printf("%d ", n);
     */

     /*   5 4 3 2 1
     printf("%d ", n);
     if (n > 1) {
          show(n - 1);
     }
     */

     /*   10 9 8 7 6 5
     if (n < 10) {
          show(n + 1);
     }
     printf("%d ", n);
     */
}

int sum (int n) {
     if (n == 1) {
          return 1;
     }
     return n + sum(n - 1); // 5 + 4 + 3 + 2 + 1
}

int fact (int n) {
     if (n == 1) {
          return 1;
     }
     return n * fact(n - 1); // 5 * 4 * 3 * 2 * 1
}

int print(int n) {
     if (n > 1) {
          print(n % 10);
     }
     return n;
     
}



int a = 0;     // L 1
int room(int n) {
     if (n != 0) {
          a++;
          room(n / 10);
     }
     return a;
     
}


int main () {
     // show(5);
     // printf("1-5 qo'shilmasi: %d\n", sum(5));
     // printf("1-5 Faktoriali: %d\n", fact(5));

     int n;    scanf("%d", &n);
     // print(n);
     printf("%d\n",room(n));
     puts("");




     return 0;
}