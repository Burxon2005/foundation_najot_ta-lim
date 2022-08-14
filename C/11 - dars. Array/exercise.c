#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    // G 1
    /*
    int a[7] = {2, -8, 90, -4, -8, 32, 44, 21};
    printf("%d\n", a[5]);
     */

    // G 2
    /*
    int a[9] = {5, 8, 4, 7, 2, 3, 9, 0, 0};
    printf("%d\n", a[1]);
     */

    // G 3
    /*
    int a[13] = {4, -7, 5, -8, 6, -9, 0, 6, 0, -3, 0, 0, 0};
    for (int i = 0; i < 13; ++i) {
        if (a[i] != 0) {
            printf("%d ", a[i]);
        }
    }
     */

    // G 4
    /*
    int sum = 0, a[8] = {5, -4, 34, 60, 54, -77, 80, -92};
    for (int i = 0; i < 8; ++i) {
        sum += a[i];
    }
    printf("%d\n", sum);
    */

    //____________________________________________________________

    // G 5
    /*
    int a[10], b = 0;
    for (int i = 1; i <= 10; ++i) {
        printf("%d - son: ", i);
        scanf("%d", &a[i]);
    }
    puts("");
    for (int i = 0; i < 10; ++i) {
        if (5 == a[i]) {
            b = i - 1;
            break;
        }
    }
    if (b > 0) {
        printf("%d indexda turibdi\n", b);
    }else {
        printf("Topilmadi\n");
    }
     */

    // G 6
    /*
    srand(time(0));
    int a[10], sum_musbat = 0, sum_manfiy = 0;
    for (int i = 0; i < 10; ++i) {
        a[i] = rand()% 100 + (-50);
        printf("%d ", a[i]);
        if (a[i] > 0) {
            sum_musbat += a[i];
        }else {
            sum_manfiy += a[i];
        }
    }
    puts("");
    sum_musbat -= sum_manfiy;
    printf("%d\n", sum_musbat);
     */

    // G 7
    /*
    int max, a[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }
    puts("");
    max = a[0];
    for (int i = 0; i < 10; ++i) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    printf("%d\n", max);
     */

    // G 8
    /*
    int juft = 0, toq = 0, a[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0) {
            juft += a[i];
        }else {
            toq += a[i];
        }
    }
    printf("%d\n", juft * 2);
    printf("%d\n", toq - 2);
     */

    // G 9
    /*
    int a[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 9; i >= 0; --i) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
        }
    }
     */

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


    return 0;
}