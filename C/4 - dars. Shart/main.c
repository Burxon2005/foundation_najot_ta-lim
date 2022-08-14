#include <stdio.h>

int main () {   // Shart operatorlari , < > <= >= == != , && || !
    // 20 > 30 ==> 0
    // 20 < 30 ==> 1
    // 20 == 30 ==> 0
    // 20 >= 30 ==> 0
    // 20 <= 30 ==> 1
    // 20 != 30 ==> 1

    // 1 && 1 ==> 1     1 || 1 ==> 1    !1 ==> 0
    // 1 && 0 ==> 0     1 || 0 ==> 1    !0 ==> 1
    // 0 && 1 ==> 0     0 || 1 ==> 1
    // 0 && 0 ==> 0     0 || 0 ==> 0


//    int a = 20, b = 30;
//    printf("%d > %d ==> %d\n", a, b, a > b);
//    printf("%d < %d ==> %d\n", a, b, a < b);
//    printf("%d == %d ==> %d\n", a, b, a == b);
//    printf("%d >= %d ==> %d\n", a, b, a >= b);
//    printf("%d <= %d ==> %d\n", a, b, a <= b);
//    printf("%d != %d ==> %d\n", a, b, a != b);

    // Musbat yoki manfiy
//    int a;
//    scanf("%d", &a);
//    if (a > 0) {
//        printf("Musbat\n");
//    }else {
//        printf("Manfiy\n");
//    }

    // Son juft yoki toq ligini tekshirish
//    int a;
//    scanf("%d", &a);
//    if (a % 2 == 0) {
//        printf("Juft\n");
//    }else {
//        printf("Toq\n");
//    }

//    int a;
//    scanf("%d", &a);
//    if (a % 2) {
//        printf("Toq\n");
//    }else {
//        printf("Juft\n");
//    }
//    if (a > 0) {
//        printf("Musbat\n");
//    }else if (a == 0) {
//        printf("Nol\n");
//    }else {
//        printf("Manfiy\n");
//    }

    //Fizz Buzz
//    int a;
//    scanf("%d", &a);
//    if (a % 15 == 0) {
//        printf("FizzBuzz\n");
//    }else if (a % 5 == 0) {
//        printf("Fizz\n");
//    }else if (a % 3 == 0) {
//        printf("Buzz\n");
//    }

//    int a;
//    scanf("%d", &a);
//    if (a % 3 == 0) {
//        printf("Fizz\n");
//    }else if (a % 5 == 0) {
//        printf("Buzz\n");
//    }

//    int a;
//    scanf("%d", &a);
//    if (a % 3 == 0 && a % 5 == 0) {
//        printf("FizzBuzz\n");
//    } else if (a % 3 == 0) {
//        printf("Fizz\n");
//    }else if (a % 5 == 0) {
//        printf("Buzz\n");
//    }


    // Xafta kuni chiqarish
//    int a;
//    scanf("%d", &a);
//    if (a == 1) {
//        printf("Dushanba\n");
//    }else if (a == 2) {
//        printf("Seshanba\n");
//    }else if (a == 3) {
//        printf("Chorshanba\n");
//    }else if (a == 4) {
//        printf("Payshanba\n");
//    }else if (a == 5) {
//        printf("Juma\n");
//    }else if (a == 6) {
//        printf("Shanba\n");
//    }else if (a == 7) {
//        printf("Yakshanba\n");
//    }else {
//        printf("Bunday hafta kuni yo'q\n");
//    }


//    char harf;
//    scanf("%c", &harf);
//    if ('A' <= harf && harf <= 'Z') {
//        printf("Katta harf\n");
//    }else if ('a' <= harf && harf <= 'z') {
//        printf("Kichik harf\n");
//    } else {
//        printf("Bunday harf yo'q\n");
//    }

    char harf;
    scanf("%c", &harf);
    if (65 <= harf && harf <= 90) {
        printf("Katta harf\n");
    }else if (97 <= harf && harf <= 122) {
        printf("Kichik harf\n");
    }else if (48 <= harf && harf <= 57) {
        printf("Raqam\n");
    } else {
        printf("Boshqa belgi\n");
    }

    return 0;
}