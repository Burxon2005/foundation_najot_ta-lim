#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    // G 10
    /*
    int a[10], toq = 0, juft = 0;
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
        if (i % 2 == 0) {
            juft += a[i];
        }else {
            toq += a[i];
        }
    }
    toq -= juft;
    printf("%d\n", toq);
     */

    // G 11
    /*
    srand(time(0));
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        a[i] = rand() % 38 + (-12);
        printf("%d ", a[i]);
        if (a[i] > 0) {
            a[i] = 1;
        }else {
            a[i] = 0;
        }
    }
    puts("");
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
     */


    // G 12
    /*
    srand(time(0));
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        a[i] = rand() % 21 + 14;
        printf("%d ", a[i]);
        if (a[i] % 2 == 0) {
            a[i] = (char)'+';
        }
    }
    puts("");
    for (int i = 0; i < n; ++i) {
        if (a[i] == 43) {
            printf("%c ", a[i]);
        }else {
            printf("%d ", a[i]);
        }
    }
     */


    // G 13
    /*
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        a[i] = rand() % 46 - 41;
        printf("%d ", a[i]);
        if (a[i] % 2 != 0) {
            a[i] = (char)' ';
        }
    }
    puts("");
    for (int i = 0; i < n; ++i) {
        if (a[i] == ' ') {
            printf("%c ", a[i]);
        }else {
            printf("%d ", a[i]);
        }
    }
     */


    // G 14
    /*
    int n;
    scanf("%d", &n);
    int a[n], musbat, nol, manfiy;
    for (int i = 0; i < n; ++i) {
        a[i] = rand() % 47 - 23;
        printf("%d ", a[i]);
    }
    printf("\nMusbat: ");   // qisqaro korinish uchun yonma yon qigandim, lekin tori ishlavoti
    for (int i = 0; i < n; ++i) if (a[i] > 0) printf("%d ", a[i]);
    printf("\nManfiy: ");
    for (int i = 0; i < n; ++i) if (a[i] < 0) printf("%d ", a[i]);
    printf("\nNol: ");
    for (int i = 0; i < n; ++i) if (a[i] == 0) printf("%d ", a[i]);
     */


    // G 15
    /*
    srand(time(0));
    int n;
    scanf("%d", &n);
    int a[n], temp;
    for (int i = 0; i < n; ++i) {
        a[i] = rand() % 30 - 5;
        printf("%d ", a[i]);
    }
    temp = a[0];
    for (int i = 0; i < n - 1 ; i++) {
        a[i] = a[i + 1];
    }
    a[n - 1] = temp;
    puts("");
    for(int i = 0; i < n ; i++) {
        printf("%d ", a[i]);
    }
     */


    return 0;
}