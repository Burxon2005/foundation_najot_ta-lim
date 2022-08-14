#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void avia (int reys) {
    int soat, obshi_soat, in_kun, in_oy, oy[12] = {1, 2, 3, 4, 5, 6, 7,8, 9,10, 11, 12}, kun[30] = {1, 2, 3, 4, 5, 6, 7,8, 9,10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    if (reys == 1) {
        int p_soat = 3;
        printf("Siz Toshkent - Parij yo'nalishini tanladiz!\nSizni reysiz 5 soat uchadi!\nOyni kiriting: ");
        scanf("%d", &in_oy);
        for (int i = 0; i < 12; ++i) {
            if (in_oy == oy[i]) {
                printf("Kunini kiriting: ");
                scanf("%d", &in_kun);
                for (int j = 0; j < 30; ++j) {
                    if (in_kun == kun[j]) {
                        printf("Soatni kiriting: ");
                        scanf("%d", &soat);
                        if (soat + 5 - p_soat > 24) {
                            obshi_soat = (soat + 5 - p_soat) - 24;
                            kun[i]++;
                            if (kun[j] > 30) {
                                kun[j] -= 31;
                                oy[i]++;
                            }
                        } else {
                            obshi_soat = 5 + (soat - p_soat);
                        }
                        printf("Siz Moskvaga %d - oyini %d - sanasida, Moskva soati bilan %d : 00 ga yetib borasiz\n", oy[i], kun[j], obshi_soat);
                    }
                }
            }
        }
    }else if (reys == 2) {
        int s_soat = 4;
        printf("Siz Toshkent - Seul yo'nalishini tanladiz!\nSizni reysiz 4 soat uchadi!\nOyni kiriting: ");
        scanf("%d", &in_oy);
        for (int i = 0; i < 12; ++i) {
            if (in_oy == oy[i]) {
                printf("Kunini kiriting: ");
                scanf("%d", &in_kun);
                for (int j = 0; j < 30; ++j) {
                    if (in_kun == kun[j]) {
                        printf("Soatni kiriting: ");
                        scanf("%d", &soat);
                        if (soat + 4 - s_soat > 24) {
                            obshi_soat = (soat + 4 - s_soat) - 24;
                            kun[j]++;
                            if (kun[j] > 30) {
                                kun[j] -= 31;
                                oy[i]++;
                            }
                        } else {
                            obshi_soat = 4 + (soat - s_soat);
                        }
                        printf("Siz Seulga %d - oyini %d - sanasida, Seul soati bilan %d : 00 ga yetib borasiz\n", oy[i], kun[j], obshi_soat);
                    }
                }
            }
        }
    } else if (reys == 3) {
        int sh_soat = 3;
        printf("Siz Toshkent - Moskva - Shvetsiya yo'nalishini tanladiz!\nSizni reysiz Moskvagacha 3 soat, u yerda 2 soat dam olib, keyin Shvetsiyagacha 3 soat uchadi\nOyni kiriting: ");
        scanf("%d", &in_oy);
        for (int i = 0; i < 12; ++i) {
            if (in_oy == oy[i]) {
                printf("Kunini kiriting: ");
                scanf("%d", &in_kun);
                for (int j = 0; j < 30; ++j) {
                    if (in_kun == kun[j]) {
                        printf("Soatni kiriting: ");
                        scanf("%d", &soat);
                        if (soat + 8 - sh_soat > 24) {
                            obshi_soat = (soat + 8 - sh_soat) - 24;
                            kun[i]++;
                            if (kun[j] > 30) {
                                kun[j] -= 31;
                                oy[i]++;
                            }
                        } else {
                            obshi_soat = 8 + (soat - sh_soat);
                        }
                        printf("Siz Shvetsiyaga %d - oyini %d - sanasida, Shvetsiyaga soati bilan %d : 00 ga yetib borasiz\n", oy[i], kun[j], obshi_soat);
                    }
                }
            }
        }
    }
}


int main () {
    int reys;
    printf("Reyslar!\n1: Toshkent - Parij | Narxi: 750 $\n2: Toshkent - Seul | Narxi: 500 $\n3: Toshkent - Moskva - Shvetsiya | Narxi: 900 $\n");
    scanf("%d", &reys);
    avia(reys);





    return 0;
}