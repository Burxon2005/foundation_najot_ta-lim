#include <stdio.h>

int main() {
    // Do While da qilingan uy ishilar
    // 7
    /*
    int a = 1;
    do {
        if (a % 2 == 0) {
            printf("%d\n", a);
        }
        a++;
    }while (a <= 140);
     */

    // 8
    /*
    int a = 100;
    do {
        if (a % 2 != 0) {
            printf("%d\n", a);
        }
        a++;
    } while (a <= 240);
    */

    // 9
    /*
    int a = 40;
    do {
        if (a % 7 == 0) {
            printf("%d\n", a);
        }
        a++;
    } while (a <= 180);
     */

    // 10
    /*
    int a = 50;
    do {
        if (a % 11 == 0) {
            printf("%d\n", a);
        }
        a++;
    } while (a <= 440);
     */

    // 10 - 2
    /*
    int a = 90;
    do {
        if (a % 25 == 0) {
            printf("%d\n", a);
        }
        a++;
    } while (a <= 210);
    */

    // 11
    /*
    int a = 25;
    do {
        if (a % 5 == 0 && a % 9 == 0) {
            printf("%d\n", a);
        }
        a++;
    } while (a <= 690);
     */

    // 12
    /*
    int a = 1;
    do {
        if (a % 11 == 0 && a % 3 == 0 && a % 9 == 0) {
            printf("%d\n", a);
        }
        a++;
    } while (a <= 4000);
    */

    //_____________________________________________

    // 13
    /*
    int a = 20;
    do {
        if (a % 5 == 0 && a % 10 != 0) {
            printf("%d\n", a);
        }
        a++;
    } while (a < 420);
    */

    // 14
    /*
    int n, i = 1;
    scanf("%d", &n);
    do {
        printf("%d\n", i * i);
        i++;
    } while (i <= n);
    */

    // 15
    /*
    int n, i = 1;
    scanf("%d", &n);
    do {
        if (i * i < n){
            printf("%d\n", i * i);
        }
        i++;
    } while (i < n);
    */

    // C 4
    /*
    int a, sum = 0;
    scanf("%d", &a);
    do {
        if (a != 0){
            a = a / 10;
            sum++;
        }
    } while (a != 0);
    printf("%d\n", sum);
     */

    // C 5
    /*
    int a, b, sum = 0;
    scanf("%d %d", &a, &b);
    do {
        sum += a;
        a++;
    } while (a <= b);
    printf("%d\n", sum);
    */


    return 0;
}