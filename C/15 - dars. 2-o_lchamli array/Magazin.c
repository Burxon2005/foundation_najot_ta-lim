#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mahsulot () {
    int mahsulot, kl_mahs, mahs_kg, klient, sum_mahs = 0, kunlik = 100000;
    int kar, piy, sab, pom, bod, qay, sut, choy, cola, lip;
    printf("Skladga nechi kg kartoshka keldi: ");
    scanf("%d", &kar);
    printf("Piyoz: ");
    scanf("%d", &piy);
    printf("Sabzi: ");
    scanf("%d", &sab);
    printf("Pomidor: ");
    scanf("%d", &pom);
    printf("Bodring: ");
    scanf("%d", &bod);
    printf("Qaymoq: ");
    scanf("%d", &qay);
    printf("Sut: ");
    scanf("%d", &sut);
    printf("Choy: ");
    scanf("%d", &choy);
    printf("Cola: ");
    scanf("%d", &cola);
    printf("Lipton: ");
    scanf("%d", &lip);
    puts("");
    printf("Nechta mijoz navbatini kutmoqda: ");
    scanf("%d", &klient);
    for (int i = 1; i <= klient; ++i) {
        printf("*** %d - Mijoz olgan mahsulotlarni kiriting ***\n", i);
        printf("1: Kartoshka - %d kg | Narxi 1 kg = 6000\n2: Piyoz - %d kg | Narxi 1 kg = 6500\n3: Sabzi - %d kg | Narxi 1 kg = 7500\n4: Pomidor - %d kg | Narxi 1 kg = 5000\n5: Bodring - %d kg | Narxi 1 kg 4500\n", kar, piy, sab, pom, bod);
        printf("6: Qaymoq - %d ta | Narxi 13000\n7: Sut - %d ta | Narxi 8990\n8: Choy - %d ta | Narxi - 6000\n9: Coca-Cola - 1,5L  %d ta | Narxi 11000\n10: Lipton 0,5L  %d ta | Narxi = 6000\n", qay, sut, choy, cola, lip);
        printf("Nechta mahsulot sotib olmoqchi: ");
        scanf("%d", &kl_mahs);
        for (int j = 1; j <= kl_mahs; ++j) {
            printf("%d - mahsulot: ", j);
            scanf("%d", &mahsulot);
            if (mahsulot == 1) {
                if (kar != 0) {
                    kartoshka:
                    printf("Nechi kg kartoshka olmoqchisiz: ");
                    scanf("%d", &mahs_kg);
                    if (mahs_kg > kar) {
                        printf("Uzur! Mahsulotimiz %d kg gacham chegaralangan! Iltimos kamroq oling!\n", kar);
                        goto kartoshka;
                    } else {
                        printf("Siz %d kg kartoshkani %d ga oldingiz!\n", mahs_kg, mahs_kg * 6000);
                        kar -= mahs_kg;
                        sum_mahs += mahs_kg * 6000;
                    }
                }else {
                    printf("Uzur so'riymiz, Kartoshka maxsulotimiz qolmadi!\n");
                }
            }else if (mahsulot == 2) {
                if (piy != 0) {
                    piyoz:
                    printf("Nechi kg piyoz olmoqchisiz: ");
                    scanf("%d", &mahs_kg);
                    if (mahs_kg > piy) {
                        printf("Uzur! Mahsulotimiz %d kg gacham chegaralangan! Iltimos kamroq oling!\n", piy);
                        goto piyoz;
                    }else {
                        printf("Siz %d kg piyozni %d ga oldingiz!\n", mahs_kg, mahs_kg * 6500);
                        piy -= mahs_kg;
                        sum_mahs += mahs_kg * 6500;
                    }
                }else {
                    printf("Uzur so'riymiz, Piyoz maxsulotimiz qolmadi!\n");
                }
            }else if (mahsulot == 3) {
                if (sab != 0) {
                    sabzi:
                    printf("Nechi kg sabzi olmoqchisiz: ");
                    scanf("%d", &mahs_kg);
                    if (mahs_kg > sab) {
                        printf("Uzur! Mahsulotimiz %d kg gacham chegaralangan! Iltimos kamroq oling!\n", sab);
                        goto sabzi;
                    } else {
                        printf("Siz %d kg sabzini %d ga oldingiz!\n", mahs_kg, mahs_kg * 7500);
                        sab -= mahs_kg;
                        sum_mahs += mahs_kg * 7500;
                    }
                }else {
                    printf("Uzur so'riymiz, Sabzi maxsulotimiz qolmadi!\n");
                }
            }else if (mahsulot == 4) {
                if (pom != 0) {
                    pomidor:
                    printf("Nechi kg pomidor olmoqchisiz: ");
                    scanf("%d", &mahs_kg);
                    if (mahs_kg > pom) {
                        printf("Uzur! Mahsulotimiz %d kg gacham chegaralangan! Iltimos kamroq oling!", pom);
                        goto pomidor;
                    } else {
                        printf("Siz %d kg pomidorni %d ga oldingiz!\n", mahs_kg, mahs_kg * 5000);
                        pom -= mahs_kg;
                        sum_mahs += mahs_kg * 5000;
                    }
                }else {
                    printf("Uzur so'riymiz, Pomidor maxsulotimiz qolmadi!\n");
                }
            }else if (mahsulot == 5) {
                if (bod != 0) {
                    bodring:
                    printf("Nechi kg bodring olmoqchisiz: ");
                    scanf("%d", &mahs_kg);
                    if (mahs_kg > bod) {
                        printf("Uzur! Mahsulotimiz %d kg gacham chegaralangan! Iltimos kamroq oling!\n", bod);
                        goto bodring;
                    } else {
                        printf("Siz %d kg bodringni %d ga oldingiz!\n", mahs_kg, mahs_kg * 4500);
                        bod -= mahs_kg;
                        sum_mahs += mahs_kg * 4500;
                    }
                }else {
                    printf("Uzur so'riymiz, Bodring maxsulotimiz qolmadi!\n");
                }
            }else if (mahsulot == 6) {
                if (qay != 0) {
                    qaymoq:
                    printf("Nechta qaymoq olmoqchisiz: ");
                    scanf("%d", &mahs_kg);
                    if (mahs_kg > qay) {
                        printf("Uzur! Mahsulotimiz %d ta gacham chegaralangan! Iltimos kamroq oling!\n", qay);
                        goto qaymoq;
                    } else {
                        printf("Siz %d ta qaymoqni %d ga oldingiz!\n", mahs_kg, mahs_kg * 13000);
                        qay -= mahs_kg;
                        sum_mahs += mahs_kg * 13000;
                    }
                }else {
                    printf("Uzur so'riymiz, Qaymoq maxsulotimiz qolmadi!\n");
                }
            }else if (mahsulot == 7) {
                if (sut != 0) {
                    sut:
                    printf("Nechi ta sut olmoqchisiz: ");
                    scanf("%d", &mahs_kg);
                    if (mahs_kg > sut) {
                        printf("Uzur! Mahsulotimiz %d ta gacham chegaralangan! Iltimos kamroq oling!\n", sut);
                        goto sut;
                    } else {
                        printf("Siz %d ta sutni %d ga oldingiz!\n", mahs_kg, mahs_kg * 8990);
                        sut -= mahs_kg;
                        sum_mahs += mahs_kg * 8990;
                    }
                }else {
                    printf("Uzur so'riymiz, Sut maxsulotimiz qolmadi!\n");
                }
            } else if (mahsulot == 8) {
                if (choy != 0) {
                    choy:
                    printf("Nechta choy olmoqchisiz: ");
                    scanf("%d", &mahs_kg);
                    if (mahs_kg > choy) {
                        printf("Uzur! Mahsulotimiz %d ta gacham chegaralangan! Iltimos kamroq oling!\n", choy);
                        goto choy;
                    } else {
                        printf("Siz %d ta choyni %d ga oldingiz!\n", mahs_kg, mahs_kg * 6000);
                        choy -= mahs_kg;
                        sum_mahs += mahs_kg * 6000;
                    }
                }else {
                    printf("Uzur so'riymiz, Choy maxsulotimiz qolmadi!\n");
                }
            }else if (mahsulot == 9) {
                if (cola != 0) {
                    cola:
                    printf("Nechta Coca-Cola olmoqchisiz: ");
                    scanf("%d", &mahs_kg);
                    if (mahs_kg > cola) {
                        printf("Uzur! Mahsulotimiz %d ta gacham chegaralangan! Iltimos kamroq oling!\n", cola);
                        goto cola;
                    } else {
                        printf("Siz %d ta Coca-Cola ni %d ga oldingiz!\n", mahs_kg, mahs_kg * 11000);
                        cola -= mahs_kg;
                        sum_mahs += mahs_kg * 11000;
                    }
                }else {
                    printf("Uzur so'riymiz, Cola maxsulotimiz qolmadi!\n");
                }
            }else if (mahsulot == 10) {
                if (lip != 0) {
                    lipton:
                    printf("Nechta Lipton olmoqchisiz: ");
                    scanf("%d", &mahs_kg);
                    if (mahs_kg > lip) {
                        printf("Uzur! Mahsulotimiz %d ta gacham chegaralangan! Iltimos kamroq oling!\n", lip);
                        goto lipton;
                    } else {
                        printf("Siz %d ta Liptonni %d ga oldingiz!\n", mahs_kg, mahs_kg * 6000);
                        lip -= mahs_kg;
                        sum_mahs += mahs_kg * 6000;
                    }
                }else {
                    printf("Uzur so'riymiz, Lipton maxsulotimiz qolmadi!\n");
                }
            }else {
                printf("\nBizda unday mahsulot yoq!\n");
            }
        }
        sum_mahs = (sum_mahs / 100) * 15;
        kunlik += sum_mahs;
    }
    printf("Sizning kunlik maoshingiz - %d\n",kunlik);
}

int main () {
    int place, st_pl = 7, password;
    char *name[20];
    int parol[7] = {1111,2222,3333,4444,5555,6666,7777};
    printf("Iltimos ismingizni kiriting: ");
    scanf("%s", name);
    R:
    printf("Xurmatli %s, Iltimos joyingizni tanlang: ", name);
    scanf("%d", &place);
    if(place <= 7 && place != 0){
        printf("Iltimos parolingizni kiriting: ");
        scanf("%d", &password);
        for (int i = 0; i < st_pl; i++) {
            if (password == parol[i]) {
                printf("\nIshizi boshlashiz mumkun!\n");
                mahsulot();
                break;
            }else if (i == 6){
                printf("\nXato!!!\n");
            }else {
                continue;
            }
        }
    } else {
        printf("Bizda bunday ish o'rni yo'q!\n");
        goto R;
    }
    puts("");


    return 0;
}