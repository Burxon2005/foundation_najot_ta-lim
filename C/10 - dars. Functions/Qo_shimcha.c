#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool is_big_leter (char let) {      // F 8
    if (let >= 65 && let <= 90) {
        return true;
    }else {
        return false;
    }
}


bool is_small_leter (char let) {      // F 9
    if (let >= 97 && let <= 122) {
        return true;
    }else {
        return false;
    }
}


char big_let (char let) {       // F 10
    if (let >= 97 && let <= 122) {
        return let - 32;
    }
}


int tub (int b) {       // F 11
    int a = 2, c = 0;
    do {
        if (a%2!=0 && a%3!=0 && a%5!=0 && a%7!=0 || a==2 || a==3 || a==5 || a==7){
            c=a;
        }
        a++;
    } while (c < b);
    return c;
}


void F_12 () {      // F 12
    printf("-I hate programming");
}

void F_13 (int a) {     // F 13
    printf("Siz kiritgan son - %d", a);
}


void F_14 (int a) {     // F 14
    if (a % 2 == 0) {
        printf("Musbat son kiritiz\n");
    }else {
        printf("Manfiy son kiritiz\n");
    }
}


    // F 15



void F_16 (int n) {     // F 16
    for (int i = 1; i < n; ++i) {
        printf("%d ", i);
    }
}


void F_17 (int n) {     // F 17
    for (;n >= 1;n--) {
        printf("%d ", n);
    }
}


void F_18 (int n) {     // F 18
    for (int i = 1; i < n; ++i) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    for (;n > 0;n--) {
        if (n % 2 != 0) {
            printf("%d ", n);
        }
    }
}


void F_19 (int b) {   // F 19     // biza kiritgan songacha bogan tublani chiqaradi
    int a = 2, flag, temp;
    scanf("%d", &b);
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    while (a < b) {
        flag = 0;
        if (a <= 1) {
            ++a;
            continue;
        }
        for (int i = 2; i <= a / 2; ++i) {
            if (a % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", a);
        ++a;
    }
}


int main () {
    // F 8
    /*
    char let;
    scanf("%c", &let);
    if (is_big_leter(let) == 1) {
        printf("True\n");
    }else {
        printf("False\n");
    }
     */

    // F 9
    /*
    char let;
    scanf("%c", &let);
    if (is_small_leter(let) == 1) {
        printf("True\n");
    }else {
        printf("False\n");
    }
     */

    // F 10
    /*
    char let;
    scanf("%c", &let);
    printf("%c", big_let(let));
     */

    // F 11
    /*
    int a;
    scanf("%d", &a);
    printf("%d\n", tub(a));
     */


    // F 12
    /*
    F_12();
     */

    // F 13
    /*
    int a;
    scanf("%d", &a);
    F_13(a);
     */

    // F 14
    /*
    int a;
    scanf("%d", &a);
    F_14(a);
     */

    // F 15


    // F 16
    /*
    int n;
    scanf("%d", &n);
    F_16(n);
     */

    // F 17
    /*
    int n;
    scanf("%d", &n);
    F_17(n);
     */

    // F 18

    int n;
    scanf("%d", &n);
    F_18(n);


    // F 19
    /*
    int b;
    F_19(b);
     */


    return 0;
}