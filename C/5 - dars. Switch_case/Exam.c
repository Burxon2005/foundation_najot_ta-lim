#include <stdio.h>

int main () {
    int summa = 0;
    start:
    printf("Menu: \n");
    printf("1 - Milliy taom\n");
    printf("2 - Xitoy taom\n");
    printf("2 - O'zbek taom\n");
    printf("4 - disert\n");
    printf("5 - napitka\n");
    printf("6 - Chek\n");

    int taom_menu;
    scanf("%d", &taom_menu);
    switch (taom_menu) {
        case 1:
            printf("1 - Osh - 15 000\n");
            printf("2 - Qozon kabob - 17 000\n");
            printf("3 - Norin - 20 000\n");
            int taom_menu_1;
            scanf("%d", &taom_menu_1);
            switch (taom_menu_1) {
                case 1: {
                    printf("Siz osh zakaz qildingiz, zakaziz tez orada keladi\n");
                    summa += 15000;
                    goto start;
                }
                case 2:
                    printf("Siz Qozon kabob zakaz qildingiz, zakaziz tez orada keladi\n");
                    summa += 17000;
                    goto start;
                case 3:
                    printf("Siz Norin zakaz qildingiz, zakaziz tez orada keladi\n");
                    summa += 20000;
                    goto start;
                default:
                    printf("Bunday taom menuda yo'q\n");
                    goto start;
            }
        case 2:
            printf("1 - Sakkiz oyoq - 37 000\n");
            printf("2 - Akulali shorva - 34 000\n");
            printf("3 - Qovurilgan Qisqichbaqa - 40 000\n");
            printf("4 - Qovurilgan kit kallasi - 70 000\n");
            int taom_menu_2;
            scanf("%d", &taom_menu_2);
            switch (taom_menu_2) {
                case 1: {
                    printf("Siz Sakkiz oyoq zakaz qildingiz, ajoyib tanlov, zakaziz tez orada keladi\n");
                    summa += 37000;
                    goto start;
                }
                case 2:
                    printf("Siz Akulali shorva zakaz qildingiz, ajoyib tanlov, zakaziz tez orada keladi\n");
                    summa += 34000;
                    goto start;
                case 3:
                    printf("Siz Qovurilgan Qisqichbaqa zakaz qildingiz, ajoyib tanlov, zakaziz tez orada keladi\n");
                    summa += 40000;
                    goto start;
                case 4:
                    printf("Siz Qovurilgan kit kallasini zakaz qildiz, daxshat tanlov, zakaz tez orada keladi\n");
                    summa += 70000;
                    goto start;
                default:
                    printf("Bunday taom menuda yo'q\n");
                    goto start;
            }
        case 3:
            printf("1 - Bishteks - 24 000\n");
            printf("2 - Lag'mon - 23 000\n");
            printf("3 - Makaron - 27 000\n");
            int taom_menu_3;
            scanf("%d", &taom_menu_3);
            switch (taom_menu_3) {
                case 1: {
                    printf("Siz Bishteks zakaz qildingiz, zakaziz tez orada keladi\n");
                    summa += 24000;
                    goto start;
                }
                case 2:
                    printf("Siz Lag'mon zakaz qildingiz, zakaziz tez orada keladi\n");
                    summa += 20000;
                    goto start;
                case 3:
                    printf("Siz Makaron zakaz qildingiz, zakaziz tez orada keladi\n");
                    summa += 17000;
                    goto start;
                default:
                    printf("Bunday taom menuda yo'q\n");
                    goto start;
            }
        case 4:
            printf("1 - Negr tort - 29 000\n");
            printf("2 - Napalyon - 28 000\n");
            printf("3 - Olmali pirog - 30 000\n");
            printf("4 - Pirojni - 41 000\n");
            int taom_menu_desert;
            scanf("%d", &taom_menu_desert);
            switch (taom_menu_desert) {
                case 1: {
                    printf("Siz Negr tort zakaz qildingiz, ajoyib tanlov, zakaziz tez orada keladi\n");
                    summa += 29000;
                    goto start;
                }
                case 2:
                    printf("Siz Napalyon zakaz qildingiz, ajoyib tanlov, zakaziz tez orada keladi\n");
                    summa += 28000;
                    goto start;
                case 3:
                    printf("Siz Olmali pirog zakaz qildingiz, ajoyib tanlov, zakaziz tez orada keladi\n");
                    summa += 28000;
                    goto start;
                case 4:
                    printf("Siz Pirojni zakaz qildiz, ajoyib tanlov, zakaz tez orada keladi\n");
                    summa += 41000;
                    goto start;
                default:
                    printf("Bunday taom menuda yo'q\n");
                    goto start;
            }
        case 5:
            printf("1 - Pepsi - 11 000\n");
            printf("2 - Cola - 10 000\n");
            printf("3 - Ice tea - 7 000\n");
            printf("4 - Oddiy choy - 5 000\n");
            int taom_menu_drink;
            scanf("%d", &taom_menu_drink);
            switch (taom_menu_drink) {
                case 1: {
                    printf("Siz Pepsi zakaz qildingiz, zakaziz tez orada keladi\n");
                    summa += 11000;
                    goto start;
                }
                case 2:
                    printf("Siz Cola zakaz qildingiz, zakaziz tez orada keladi\n");
                    summa += 10000;
                    goto start;
                case 3:
                    printf("Siz Ice tea zakaz qildingiz, zakaziz tez orada keladi\n");
                    summa += 7000;
                    goto start;
                case 4:
                    printf("Siz Choy zakaz qildingiz, zakaz tez orada keladi\n");
                    summa += 5000;
                    goto start;
                default:
                    printf("Bunday taom menuda yo'q\n");
                    goto start;
            }
        case 6:
            printf("Obshiy summa = %d", summa);
            break;
        default:
            printf("Notog'ri menu raqam kiritingiz\n");
            goto start;
    }

    return 0;
}