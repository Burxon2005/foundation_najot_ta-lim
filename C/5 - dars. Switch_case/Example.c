#include <stdio.h>

int main () {
    // if 11
    /*
    int a, b;
    scanf("%d %d", &a, &b);
    if (a != b) {
        if (a > b) {
            b = a;
        }else {
            a = b;
        }
    }else {
        a = 0;
        b = 0;
    }
    printf("A = %d,  B = %d\n", a, b);
    */

    // if 12
    /*
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && b < c) {
        printf("%d - soni kichik", b);
    }else if (a < b && a < c) {
        printf("%d - soni kichik", a);
    }else if (c < a && c < b) {
        printf("%d - soni kichik", c);
    }
     */

    // if 13
    /*
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a < b && b < c || a > b && b > c) {
        printf("O'rta qiymati - %d ga teng\n", b);
    }else if(b < a && a < c || a < b && a > c) {
        printf("O'rta qiymati - %d ga teng\n", a);
    }else {
        printf("O'rta qiymati - %d ga teng\n", c);
    }
     */

    // if 14
    /*
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c){
        if (b < c) {
            printf("%d - son kichik\n", b);
            printf("%d - son kottasi\n", a);
        }else {
            printf("%d - son kichik\n", c);
            printf("%d - son kottasi\n", a);
        }
    }else if (b > a && b > c) {
        if (a < c) {
            printf("%d - son kichik\n", a);
            printf("%d - son kottasi\n", b);
        }else {
            printf("%d - son kichik\n", c);
            printf("%d - son kottasi\n", b);
        }
    }else if (c > b && c > a) {
        if (a < b) {
            printf("%d - son kichik\n", a);
            printf("%d - son kottasi\n", c);
        }else {
            printf("%d - son kichik\n", b);
            printf("%d - son kottasi\n", c);
        }
    }
     */

    // if 15
    /*
    int a, b, c, d, f, g;
    scanf("%d %d %d", &a, &b, &c);
    d = a + b;
    f = b + c;
    g = a + c;
    if (d < f) {
        if (f > g) {
            printf("%d - ya'ni %d + %d = %d eng kotta yig'indi\n", f, b, c, f);
        }else if (d > g){
            printf("%d - ya'ni %d + %d = %d eng kotta yig'indi\n", d, a, b, d);
        }else {
            printf("%d - ya'ni %d + %d = %d eng kotta yig'indi\n", g, a, c, g);
        }
    }else {
        if (d > g) {
            printf("%d - ya'ni %d + %d = %d eng kotta yig'indi\n", d, a, b, d);
        }else if (f > g){
            printf("%d - ya'ni %d + %d = %d eng kotta yig'indi\n", f, b, c, f);
        }else {
            printf("%d - ya'ni %d + %d = %d eng kotta yig'indi\n", g, a, c, g);
        }
    }
     */

    // if 16
    /*
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if (a < b && b < c) {
        a *= 2, b *= 2, c *= 2;
    }else {
        a *= -1, b *= -1, c *= -1;
    }
    printf("A = %.2f, B = %.2f, C = %.2f\n", a, b, c);
    */

    // if 17
    /*
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if (a < b && b < c || a > b && b > c) {
        a *= 2, b *= 2, c *= 2;
    }else {
        a *= -1, b *= -1, c *= -1;
    }
    printf("A = %.2f, B = %.2f, C = %.2f\n", a, b, c);
    */

    // if 18
    /*
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b) {
        printf("3 - tartib raqamidegi son = %d\n", c);
    }else if (b == c) {
        printf("1 - tartib raqamidegi son = %d\n", a);
    }else if (a == c) {
        printf("2 - tartib raqamidigi son = %d\n", b);
    }
    */

    // if 19

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a == b) {
        if (b == c) {
            printf("4 - tartib raqamidegi son = %d\n", d);
        }else if (b == d) {
            printf("3 - tartib raqamidegi son = %d\n", c);
        }
    }else if (a == c) {
        if (a == d) {
            printf("2 - tartib raqamdigi son = %d\n", b);
        }else if (a == b) {
            printf("3 - tartib raqamdigi son = %d\n", c);
        }
    }else if (b == c) {
        if (c == d) {
            printf("1 - tartib raqamdigi son = %d\n", a);
        } else if (c == a) {
            printf("4 - tartib raqamdigi son = %d\n", d);
        }
    }


    return 0;
}