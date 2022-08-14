#include <stdio.h>

int main() {
    // continue
    // d 13
    /*
    for (int i = 78; i < 112; i++) {
        if (i % 5 == 0) {
            continue;
        }
        printf("%d ", i);
    }
     */

    // d 14
    /*
    for (int i = 42; i < 77; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            continue;
        }
        printf("%d ", i);
    }
    */

    // d 15
    /*
    int sum = 0;
    for (int i = 8; i <= 18; i++) {
        if (i % 4 == 0) {
            continue;
        }
        sum += i;
    }
    printf("%d\n", sum);
    */

    // d 16
    /*
    int n;
    scanf("%d", &n);
    for (int i = n; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    }
     */

    // d 17
    /*
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            printf("  ");
        }
        for (int k = 0; k <= i; k++) {
            printf(" *");
        }
        printf("\n");
    }
     */

    // d 18
    /*
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        for (int k = n; k > i; --k) {
            printf(" *");
        }
        printf("\n");
    }
     */

    // d 19
    /*
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            printf(" *");
        }
        printf("\n");
    }
     */

    // d 20
    /*
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf(" ");
        }
        for (int k = n - 1; k >= i; k--) {
            printf(" *");
        }
        printf("\n");
    }
    */



    return 0;
}
