#include <stdio.h>

int main () {
    // d 25
    /*
    int a, b,c, d = 0, f = 0;
    scanf("%d %d", &a, &b);
    c = a;
    for (int i = 0; i < a % b; ++i) {
        d++;
    }
    for (;c > b; c -= b) {
        f++;
    }
    printf("%d joylashtirish mumkun, %d bosh qismi\n", f, d);
    */

    // d 26
    /*
    int n, a;
    scanf("%d", &n);
    for (;n > 0;n -= 4) {
    }
    if (n == 0) {
        printf("4 ni darajasi\n");
    }else {
        printf("4 ni darajasi emas\n");
    }
     */

    // d 27
    /*
    int n, a = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        a = a * i;
    }
    printf("%d\n", a);
     */

    // d 28
    /*
    int n, k;
    scanf("%d", &n);
    for (k = 0; k * k <= n; k++) {

    }
    printf("%d\n", k);
     */

    // d 29     Xatoyam bo'lishi mumkun ?
    /*
    int n, k, b = 0;
    scanf("%d", &n);

    for (k = 3; k < n; k *= 3) {
    }
    for (;k > 3;k /= 3) {
        b++;
    }
    printf("%d\n", b);
    */

    // d 30     Xatoyam bolishi mumkun
    /*
    int n, k, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n; ++i) {
        sum += i;
        if (i <= n) {
            k = i;
        }
    }
    printf("%d = k, %d yigindi\n",k, sum);
     */

    // d 31     Xato???
    /*
    int n, a, b, c;
    scanf("%d", &n);
    a = (n / 2) - 1;
    b = (n / 2) + 2;
    a += b;
    c = b + a;
    printf("%d %d", b, c);
     */


    return 0;
}