//// Project made by Zohid,Burxon,Muhammad Mirzo,Abdurahmon and Sojida.
#include<stdio.h>

void mahsulot () {
    int mahsulot, kl_mahs, mahs_kg, klient, sum_mahs = 0, kunlik = 100000;
    int kar, piy, sab, pom, bod, qay, sut, choy, cola, lip;
    printf("\nSkladga nechi kg kartoshka keldi: ");
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
        printf("Nechta mahsulot sotib olmoqchisiz: ");
        scanf("%d", &kl_mahs);
        for (int j = 1; j <= kl_mahs; ++j) {
            printf("%d - mahsulot: ", j);
            scanf("%d", &mahsulot);
            if (mahsulot == 1) {
                kartoshka:
                printf("Nechi kg kartoshka olmoqchisiz: ");
                scanf("%d", &mahs_kg);
                if (mahs_kg > 10) {
                    printf("Uzur! Mahsulotimiz 10 kg gacham chegaralangan! Iltimos kamroq oling!\n");
                    goto kartoshka;
                }else {
                    printf("Siz %d kg kartoshkani %d ga oldingiz!\n", mahs_kg, mahs_kg * 6000);
                    sum_mahs += mahs_kg * 6000;
                }
            }
            if (mahsulot == 2) {
                piyoz:
                printf("Nechi kg piyoz olmoqchisiz: ");
                scanf("%d", &mahs_kg);
                if (mahs_kg > 10) {
                    printf("Uzur! Mahsulotimiz 10 kg gacham chegaralangan! Iltimos kamroq oling!\n");
                    goto piyoz;
                }else {
                    printf("Siz %d kg piyozni %d ga oldingiz!\n", mahs_kg, mahs_kg * 6500);
                    sum_mahs += mahs_kg * 6500;
                }
            }
            if (mahsulot == 3) {
                sabzi:
                printf("Nechi kg sabzi olmoqchisiz: ");
                scanf("%d", &mahs_kg);
                if (mahs_kg > 15) {
                    printf("Uzur! Mahsulotimiz 15 kg gacham chegaralangan! Iltimos kamroq oling!\n");
                    goto sabzi;
                }else {
                    printf("Siz %d kg sabzini %d ga oldingiz!\n", mahs_kg, mahs_kg * 7500);
                    sum_mahs += mahs_kg * 7500;
                }
            }
            if (mahsulot == 4) {
                pomidor:
                printf("Nechi kg pomidor olmoqchisiz: ");
                scanf("%d", &mahs_kg);
                if (mahs_kg > 13) {
                    printf("Uzur! Mahsulotimiz 13 kg gacham chegaralangan! Iltimos kamroq oling!");
                    goto pomidor;
                }else {
                    printf("Siz %d kg pomidorni %d ga oldingiz!\n", mahs_kg, mahs_kg * 5000);
                    sum_mahs += mahs_kg * 5000;
                }
            }
                if (mahsulot == 5) {
                bodring:
                printf("Nechi kg bodring olmoqchisiz: ");
                scanf("%d", &mahs_kg);
                if (mahs_kg > 13) {
                    printf("Uzur! Mahsulotimiz 13 kg gacham chegaralangan! Iltimos kamroq oling!\n");
                    goto bodring;
                }else {
                    printf("Siz %d kg bodringni %d ga oldingiz!\n", mahs_kg, mahs_kg * 4500);
                    sum_mahs += mahs_kg * 4500;
                }
            }
            if (mahsulot == 6) {
                qaymoq:
                printf("Nechta qaymoq olmoqchisiz: ");
            scanf("%d", &mahs_kg);
                if (mahs_kg > 10) {
                      printf("Uzur! Mahsulotimiz 10 ta gacham chegaralangan! Iltimos kamroq oling!\n");
                    goto qaymoq;
                }else {
                    printf("Siz %d ta qaymoqni %d ga oldingiz!\n", mahs_kg, mahs_kg * 13000);
                    sum_mahs += mahs_kg * 13000;
                }
            }
            if (mahsulot == 7) {
                sut:
                printf("Nechi ta sut olmoqchisiz: ");
                scanf("%d", &mahs_kg);
                if (mahs_kg > 20) {
                    printf("Uzur! Mahsulotimiz 20 ta gacham chegaralangan! Iltimos kamroq oling!\n");
                    goto sut;
            }else {
                    printf("Siz %d ta sutni %d ga oldingiz!\n", mahs_kg, mahs_kg * 8990);
                    sum_mahs += mahs_kg * 8990;
                }
            }
            if (mahsulot == 8) {
                choy:
                printf("Nechta choy olmoqchisiz: ");
                scanf("%d", &mahs_kg);
                if (mahs_kg > 25) {
                    printf("Uzur! Mahsulotimiz 25 ta gacham chegaralangan! Iltimos kamroq oling!\n");
                    goto choy;
                }else {
                    printf("Siz %d ta choyni %d ga oldingiz!\n", mahs_kg, mahs_kg * 6000);
                    sum_mahs += mahs_kg * 6000;
                }
            }
            if (mahsulot == 9) {
                cola:
                printf("Nechta Coca-Cola olmoqchisiz: ");
                scanf("%d", &mahs_kg);
                if (mahs_kg > 40) {
                    printf("Uzur! Mahsulotimiz 40 ta gacham chegaralangan! Iltimos kamroq oling!\n");
                    goto cola;
                }else {
                    printf("Siz %d ta Coca-Cola ni %d ga oldingiz!\n", mahs_kg, mahs_kg * 11000);
                    sum_mahs += mahs_kg * 11000;
                }
            }
            if (mahsulot == 10) {
                lipton:
                printf("Nechta Lipton olmoqchisiz: ");
                scanf("%d", &mahs_kg);
                if (mahs_kg > 30) {
                    printf("Uzur! Mahsulotimiz 30 ta gacham chegaralangan! Iltimos kamroq oling!\n");
                    goto lipton;
                }else {
                    printf("Siz %d ta Liptonni %d ga oldingiz!\n", mahs_kg, mahs_kg * 6000);
                    sum_mahs += mahs_kg * 6000;
                }
            }
        }
        sum_mahs = (sum_mahs / 100) * 15;
        kunlik += sum_mahs;
    }
    printf("Sizning kunlik maoshingiz - %d\n",kunlik);
}


    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////// MAIN FUNCTION ///////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



int main(){

    int place,i = 7,password;
    int parol[7] = {1111,2222,3333,4444,5555,6666,7777};
    printf("\n\t\t\t\t\t\t\t===================* Assalomu Alaykum Xurmatli Sotuvchi *===================");
    R:
    printf("\n\t\t\tIltimos joyni tanlang: ");
    scanf("%d", &place);
    if(place <= 7 && place != 0){
        while(place <= i){
            if(place == i){
                r:
                printf("\n\t\t\tParol kiriting: ");
                scanf("%d", &password);
                if(password == parol[place - 1]){
                    printf("\n\t\t\tIshingizni boshlang.\n");
                } else {
                    printf("\n\t\t\tSiz noto'gir parol kiritingiz!\n");
                    goto r;
                }
            }
        i--;
        }
    } else {
        printf("\n\t\t\tBizda bunday ish o'rni yo'q!\n");
        goto R;
    }
    mahsulot();
    


    return 0;
}