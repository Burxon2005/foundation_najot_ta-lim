#include <stdio.h>

int main() {
    // for
//    for (int i = 1; i < 10; i++) {
//        printf("%d ", i);
//    }

    // C - 1
    // 1
    /*
    for (int i = 1; i < 800; ++i) {
        printf("%d\n", i);
    }
     */

    // 2
    /*
    for (int i = 1000; i >= 1 ; --i) {
        printf("%d\n", i);
    }
    */

    // 3
    /*
    for (int i = 400; i < 500; ++i) {
        printf("%d\n", i);
    }
    */

    // 4
    /*
    for (int i = 300; i >= 150 ; --i) {
        printf("%d\n", i);
    }
    */

    // 5
    /*
    for (int i = -400; i < 250; ++i) {
        printf("%d\n", i);
    }
     */

    // 6
    /*
    for (int i = 200; i > -500; --i) {
        printf("%d\n", i);
    }
     */

    //___________________________________________________

    // C 2
    // 7
    /*
    for (int i = 1; i < 140; ++i) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
     */

    // 8
    /*
    for (int i = 100; i < 240; ++i) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
     */

    // 9
    /*
    for (int i = 40; i < 180; ++i) {
        if (i % 7 == 0) {
            printf("%d\n", i);
        }
    }
     */

    // 10
    /*
    for (int i = 50; i < 440; ++i) {
        if (i % 11 == 0) {
            printf("%d\n", i);
        }
    }
     */

    // 10 - 2
    /*
    for (int i = 90; i < 210; ++i) {
        if (i % 25 == 0) {
            printf("%d\n", i);
        }
    }
     */

    // 11
    /*
    for (int i = 25; i < 690; ++i) {
        if (i % 5 == 0 && i % 9 == 0) {
            printf("%d\n", i);
        }
    }
     */

    // 12
    /*
    for (int i = 1; i < 4000; ++i) {
        if (i % 11 == 0 && i % 3 == 0 && i % 9 == 0) {
            printf("%d\n", i);
        }
    }
     */

    // _______________________________________________

    // Tub son          XATOOOOO!!!!!!!!
    /*
    int a;
    scanf("%d", &a);
    for (int i = 2; i < a; ++i) {
        if (a % i == 0) {
            printf("Tub son emas");
            break;
        }else {
            printf("tub son");
            break;
        }
    }
    */


    // toq teskari
    /*
    int n, rev = 0;
    scanf("%d", &n);
    for (; n > 0; n /= 10) {
        rev = rev * 10 + n % 10;
    }
    n = rev;
    for (; n > 0; n /= 10) {
        rev =  n % 10;
        if (rev % 2) {
            printf("%d ", rev);
        }
    }
     */

    // C 10 , yaxshi variant
    /*
    int a,b,c,v;
    printf("Son kiriting :");
    scanf("%d", &a);
    printf("Yana Son kiriting :");
    scanf("%d", &b);
    c=a-b;
    v=a+b;
    while(c<=v  ){
        printf("%d\n", c);
        c++;
    }
     */

    //_______________________________________
    // 123 - 321
    /*
    int n, rev = 0;
    scanf("%d", &n);
    for (; n > 0; n /= 10) {
        rev = n % 10 + rev * 10;
    }
    n = rev;
    printf("%d\n", n);
    */

    // toq sonini chiqazish
    /*
    int n;
    scanf("%d", &n);
    for (; n > 0; n /= 10) {
        if (n % 10 % 2) {
            printf("%d\n", n % 10);
        }
    }
     */

    /*
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {       // ***
            printf("*");                    // ***
        }                                   // ***
        printf("\n");
    }
    */

    /*
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j <= i; ++j) {      // *
            printf("*");                    // **
        }                                   // ***
        printf("\n");
    }
     */

    // Tub son
    /*
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 2; i * i < n; ++i) {
        if (n % i == 0) {
            count++;
            break;
        }
    }
    if (count > 0 || n == 1) {
        printf("Son tub emas\n");
    }else {
        printf("Son tub\n");
    }
     */


    return 0;
}
