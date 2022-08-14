#include <stdio.h>
#include <stdbool.h>

int max (int a, int b) {        // f 1 = kottasini topish
    if (a > b) {
        return a;
    } else {
        return b;
    }
}


int num_digit (int a) {     // f 2
    int sum = 0;
    for (;a > 0; a /= 10) {
        sum++;
    }
    return sum;
}


int num_44 () {     // f 3
    int a = 44;
    return a;
}


float two_num () {      // f 4
    int a = 4;  float b = 5.6;
    return a + b;
}


int qoldiq_8 (int a) {      // f 5
    return a % 8;
}


int two_num_qoldiq (int a, int b) {     // f 6
    if (a > b) {
        return a % b;
    }else {
        return b % a;
    }
}


bool bool_two_num (int a, int b) {  // f 7
    if (a > b) {
        return true;
    }else {
        return false;
    }
}


int main () {
    // Oddiy funksiya elon qilish
    /*
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, plus(a, b));
    printf("%d - %d = %d\n", a, b, minus(a, b));
    printf("%d * %d = %d\n", a, b, kopay(a, b));
    printf("%d / %d = %d\n", a, b, boluv(a, b));
     */

    // f 1
    /*
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", max(a,b));
     */

    // f 2
    /*
    int a;
    scanf("%d", &a);
    printf("%d\n", num_digit(a));
    */

    // f 3
    /*
    printf("%d\n", num_44());
     */

    // f 4
    /*
    printf("%.2f\n", two_num());
    */

    // f 5
    /*
    int a;
    scanf("%d", &a);
    printf("%d\n", qoldiq_8(a));
     */

    // f 6
    /*
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", two_num_qoldiq(a, b));
     */

    // f 7
    int a, b;
    scanf("%d %d", &a, &b);
    if (bool_two_num(a, b) == 1) {
        printf("True\n");
    }else {
        printf("False\n");
    }


    return 0;
}