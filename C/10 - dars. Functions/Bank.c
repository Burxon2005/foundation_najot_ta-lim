#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


float six_month (float suma) {
    int foiz = 10;
    suma += suma / foiz;
    printf("6 - oyga mo'ljallangan kredit foizi %d - ga teng.\n", foiz);
    return suma / 6;
}

float one_year (float suma) {
    int foiz = 20;
    suma += suma / foiz;
    printf("1 - yilga mo'ljallangan kredit foizi %d - ga teng.\n", foiz);
    return suma / 12;
}

float two_year (float suma) {
    int foiz = 30;
    suma += suma / foiz;
    printf("2 - yilga mo'ljallangan kredit foizi %d - ga teng.\n", foiz);
    return suma / 24;
}


int main () {
    char name[20];
    float suma;
    int muddat;
    printf("Bankga xush kelibsiz!\nIsmingizni kiriting: ");
    scanf("%s", name);
    printf("Qancha kredit olmoqchisiz, Summani kiriting: ");
    scanf("%f", &suma);
    start:
    printf("Kreditni qancha muddatga olmoqchisiz ?\n");
    printf("1: 6 - oyga\n"
           "2: 1 - yilga\n"
           "3: 2 - yilga\n");
    scanf("%d", &muddat);
    switch (muddat) {
        case 1:
            printf("Kredit olindi !\n");
            printf("Endi siz oyiga toliydigan suma %.2f $\n", six_month(suma));
            break;
        case 2:
            printf("Kredit olindi !\n");
            printf("Endi siz oyiga toliydigan suma %.2f $\n", one_year(suma));
            break;
        case 3:
            printf("Kredit olindi !\n");
            printf("Endi siz oyiga toliydigan suma %.2f $\n", two_year(suma));
            break;
        default:
            printf("Notogri raqam kiritiz!\nQaytadan urinib korin: ");
            goto start;
    }


    return 0;
}