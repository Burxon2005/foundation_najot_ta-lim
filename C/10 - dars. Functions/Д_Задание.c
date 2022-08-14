#include <stdio.h>
#include <stdbool.h>

void F_20 (int a, int b) {      // F 20
    if (a > b) {
        for (;a > b;a--) {
            printf("%d ", a);
        }
    }else {
        for (;a <= b; b--) {
            printf("%d ", b);
        }
    }
}


int F_21 (int a, int b, int c) {    // F 21
    if (a > b && b > c || b > a && b < c) {
        return b;
    }else if (a < b && a > c || a > b && a < c) {
        return a;
    }else if (a > c && b < c || c > a && c < b) {
        return c;
    }
}

bool F_22 (int num, char a[]) {    // F 22     Bunda char seriani har bita harfi bilan tekshirilgan, ya'ni indexi bilan
    if (num == 10 && a[0] == 'o' && a[1] == 'n') {
        return true;
    }else if (num == 20 && a[0] == 'y' && a[1] == 'i' && a[2] == 'g' && a[3] == 'i' && a[4] == 'r' && a[5] == 'm' && a[6] == 'a'){
        return true;
    }else if (num == 30 && a[0] == 'o' && a[1] == 't' && a[2] == 't' && a[3] == 'i' && a[4] == 'z'){
        return true;
    }else if (num == 40 && a[0] == 'q' && a[1] == 'i' && a[2] == 'r' && a[3] == 'q'){
        return true;
    }else if (num == 50 && a[0] == 'e' && a[1] == 'l' && a[2] == 'l' && a[3] == 'i' && a[4] == 'k'){
        return true;
    }else if (num == 60 && a[0] == 'o' && a[1] == 'l' && a[2] == 't' && a[3] == 'm' && a[4] == 'u' && a[5] == 's' && a[6] == 'h'){
        return true;
    }else if (num == 70 && a[0] == 'y' && a[1] == 'e' && a[2] == 't' && a[3] == 'm' && a[4] == 'u' && a[5] == 's' && a[6] == 'h'){
        return true;
    }else if (num == 80 && a[0] == 's' && a[1] == 'a' && a[2] == 'k' && a[3] == 's' && a[4] == 'o' && a[5] == 'n'){
        return true;
    }else if (num == 90 && a[0] == 't' && a[1] == 'o' && a[2] == 'q' && a[3] == 's' && a[4] == 'o' && a[5] == 'n'){
        return true;
    }else {
        return false;
    }
}


bool F_23 (int a) {     // f 23
    int sum = 0;
    for (;a > 0;a /= 10) {
        sum += a % 10;
    }
    if (sum % 2 == 0) {
        return true;
    }else {
        return false;
    }
}

float F_24 (float a, int b) {   // F 24
    float n = a;
    for (int i = 1; i < b; ++i) {
        n *= a;
    }
    return n;
}


void F_25 (int a) {     // F 25
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= 10; ++j) {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
}


int main () {
    // F 20
    /*
    int a, b;
    scanf("%d %d", &a, &b);
    F_20(a, b);
     */


    // F 21
    /*
    int a, b, c;
    scanf("%d %d %d", &a , &b, &c);
    printf("%d\n", F_21(a, b, c));
     */


    // F 22   agar tori bosa - 1. Xato bosa - 0;
    /*
    int num;
    char a[20];
    scanf("%d", &num);
    scanf("%s", a);
    printf("%d\n", F_22(num, a));
     */


    // F 23
    /*
    int a;
    scanf("%d", &a);
    if (F_23(a) == 1) {
        printf("True\n");
    }else {
        printf("False\n");
    }
     */


    // F 24
    /*
    float a; int b;
    scanf("%f %d", &a, &b);
    printf("%f\n", F_24(a, b));
     */


    // F 25
    /*
    int n;
    scanf("%d", &n);
    F_25(n);
     */


    return 0;
}