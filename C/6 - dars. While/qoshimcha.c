#include <stdio.h>

int main () {
    // C 6
        /*
    int n, i = 1;
    scanf("%d", &n);
    while (i <= 10) {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }
    */

    // C 7
    /*
    int n, first_num, last_num;
    scanf("%d", &n);
    last_num = n % 10;
    while (n > 9) {
        n = n / 10;
    }
    first_num = n;
    if (first_num > last_num) {
        printf("%d\n", first_num);
    }else {
        printf("%d\n", last_num);
    }
    */

    // C 8
    /*
    char letter = 97;
    while (letter <= 122) {
        printf("%c\n", letter);
        letter++;
    }
     */

    // C 9
    /*
    int a, sum, summa = 0;
    scanf("%d", &a);
    while (a != 0) {
        sum = a % 10;
        summa += sum;
        a = a / 10;
    }
    printf("%d\n", summa);
    */

    // C 10
    /*
    int a , b, plus, minus;
    scanf("%d %d", &a, &b);
    plus = a + b;
    minus = a - b;
    while (a > minus) {
        a--;
    }
    while (a <= plus) {
        printf("%d ", a);
        a++;
    }
     */

    // C 11
    /*
    int a, i = 1, sum = 1;
    scanf("%d", &a);
    while (i <= a) {
        sum *= i;
        i++;
    }
    printf("%d\n", sum);
    */

    // C 12
    /*
    int a, b, i = 1;
    scanf("%d %d", &a, &b);
    int sum = a;
    while (i < b) {
        sum *= a;
        i++;
    }
    printf("%d\n", sum);
     */

    return 0;
}