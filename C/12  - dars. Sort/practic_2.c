#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void funk(int oylik, int yil) {
    int kredit;
    if (yil == 1) {
        printf("Diqqat! 1-yilga moljallanga kreditlar eng kamida 1000 $ dan boshlanadi!\nKredit summasini kiriting: ");
        scanf("%d", &kredit);
        if (kredit >= 1000) {
            kredit += (kredit / 100) * 15;
            oylik = (oylik / 100) * 60;
            if (kredit > oylik) {
                printf("Tabriklaymiz! Kredit olindi\nEndi siz oyiga - %d $ dan toliysiz\n", kredit / (yil * 12));
            }else {
                printf("Uzur sizi oyligiz kredit olish uchun yetarli emas\n");
            }
        }else {
            printf("Biz 1000 $ dan kam kredit bermimiz!\n");
        }
    }else if (yil == 2) {
        printf("Diqqat! 2-yilga moljallanga kreditlar eng kamida 3000 $ dan boshlanadi!\nKredit summasini kiriting: ");
        scanf("%d", &kredit);
        if (kredit >= 3000) {
            kredit += kredit / 4;
            oylik = (oylik / 100) * 60;
            if (kredit > oylik) {
                printf("Tabriklaymiz! Kredit olindi\nEndi siz oyiga - %d $ dan toliysiz\n", kredit / (yil * 12));
            }else {
                printf("Uzur sizi oyligiz kredit olish uchun yetarli emas\n");
            }
        }else {
            printf("Biz 3000 $ dan kam kredit bermimiz!\n");
        }
    }else if (yil >= 3 && yil <= 5) {
        printf("Diqqat! 3-5-yilgacha moljallanga kreditlar eng kamida 5000 $ dan boshlanadi!\nKredit summasini kiriting: ");
        scanf("%d", &kredit);
        if (kredit >= 5000) {
            kredit += kredit / 2;
            oylik = (oylik / 100) * 60;
            if (kredit < oylik) {
                printf("Tabriklaymiz! Kredit olindi\nEndi siz oyiga - %d $ dan toliysiz\n", kredit / (yil * 12));
            }else {
                printf("Uzur sizi oyligiz kredit olish uchun yetarli emas\n");
            }
        }else {
            printf("Biz 5000 $ dan kam kredit bermimiz!\n");
        }
    }
}


int main () {
    int oylik, yil;
    printf("Oylik daromadizi kiriting: ");
    scanf("%d", &oylik);
    if (oylik >= 1000) {
        printf("\nBiz kreditlarni 1 yildan 5 yilgacha beramiz!\nNechi yilga olmoqchisiz: \n");
        scanf("%d", &yil);
        funk(oylik, yil);
    }else {
        printf("Uzur oyligiz kredit olishga yetmidi!");
        goto end;
    }

    end:
    return 0;
}