#include <stdio.h>

int main () {
    // 2    nechta tub son borligini topish
    /*
    int n, a, tub = 0;
    scanf("%d", &n);
    for ( ; n != 0 ; n /= 10) {
        a = n % 10;
        if (a % 2 != 0) {
            tub++;
        }
    }
    printf("%d\n", tub);
    */

    // 3
    /*
    int n, a, sum = 0;
    scanf("%d", &n);
    a = n;
    for (; n != 0; n /= 10) {
        sum += n % 10;
    }
    a %= sum;
    printf("%d", a);
     */

    // 4
    /*
    int n, a, m, sum_toq = 0, sum_juft = 0;
    scanf("%d", &n);
    for (;n != 0; n /= 10) {
        a = n % 10;
        if (a % 2 == 0) {
            sum_juft += a;
        }else {
            sum_toq += a;
        }
    }
    if (sum_juft > sum_toq) {
        m = sum_juft - sum_toq;
    }else {
        m = sum_toq - sum_juft;
    }
    printf("%d", m);
     */

    // 5
    /*
    int n, copy_n, a, sum_toq = 0, sum_n = 0;
    scanf("%d", &n);
    copy_n = n;
    for (; n != 0 ; n /= 10) {
        a = n % 10;
        sum_n += a;
        if (a % 2 != 0) {
            sum_toq += a;
        }
    }
    if (sum_toq % 2 == 1) {
        copy_n /= sum_toq;
    }else {
        copy_n /= sum_n;
    }
    printf("%d\n", copy_n);
     */




    return 0;
}