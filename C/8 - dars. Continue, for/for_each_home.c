#include <stdio.h>

int main () {
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

    //__________________________________________________________

    // d 21
    /*
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == 0 || i == n || j == 0 || j == n) {
                printf("* ");
            }else {
                printf("  ");
            }
        }
        printf("\n");
    }
     */

    // d 22
    /*
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == 0 || i == n || j == 0 || j == n || i == j) {
                printf("* ");
            }else {
                printf("  ");
            }
        }
        printf("\n");
    }
    */

    // d 23
    /*
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == 0 || i == n || j == 0 || j == n || i + j == n) {
                printf("* ");
            }else {
                printf("  ");
            }
        }
        printf("\n");
    }
     */

    // d 24
    /*
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == 0 || i == n || j == 0 || j == n || i == j || j <= i) {
                printf("* ");
            }else {
                printf("  ");
            }
        }
        printf("\n");
    }
     */


    return 0;
}