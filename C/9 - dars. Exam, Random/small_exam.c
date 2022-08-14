#include <stdio.h>

int main() {
    // 1
    /*
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) {
        printf("%d eng kottasi\n", a);
    }else if (b > a && b > c) {
        printf("%d eng kottasi\n", b);
    }else {
        printf("%d eng kottasi\n", c);
    }
     */

    // 2
    /*
    int sum = 1;
    for (int i = 1; i < 10; ++i) {
        sum *= i;
    }
    printf("%d", sum);
     */

    // 3
    /*
    int n, a, min;
    scanf("%d", &n);
    min = n % 10;
    for (; n != 0 ; n /= 10) {
        a = n % 10;
        if (min > a) {
            min = a;
        }
    }
    printf("%d\n", min);
    */


    return 0;
}