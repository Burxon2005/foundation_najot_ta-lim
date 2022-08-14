#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int user_n, staff, rand_n;
    printf("Soni kiriting: ");
    scanf("%d", &user_n);
    printf("Staffkani kiriting: ");
    scanf("%d", &staff);
    srand(time(0));
    for (int i = 1; i <=3; ++i) {
        printf("%d - o'yin\n", i);
        rand_n = rand()%5;
        if (rand_n % 2 == 0) {
            if (user_n == rand_n) {
                if (i == 1) {
                    staff += staff;
                    printf("%d - Qizil. Yutdizzzzz OMG, va 1 imkoniyatda yutganingiz uchun stafkaga 100 foiz qo'shildi\n", rand_n);
                } else if (i == 2) {
                    staff += staff / 2;
                    printf("%d - Qizil. Yutdizzzzz OMG, va 2 imkoniyatda yutganingiz uchun stafkaga 50 foiz qo'shildi\n", rand_n);
                } else if (i == 3) {
                    staff += staff / 4;
                    printf("%d - Qizil. Yutdizzzzz OMG, va 3 imkoniyatda yutganingiz uchun stafkaga 25 foiz qo'shildi\n", rand_n);
                }
                break;
            }else {
                printf("%d - Qizil, Topomadiz\n", rand_n);
            }
        }else {
            if (user_n == rand_n) {
                if (i == 1) {
                    staff += staff;
                    printf("%d - Qora. Yutdizzzzz OMG, va 1 imkoniyatda yutganingiz uchun stafkaga 100 foiz qo'shildi\n", rand_n);
                } else if (i == 2) {
                    staff += staff / 2;
                    printf("%d - Qora. Yutdizzzzz OMG, va 2 imkoniyatda yutganingiz uchun stafkaga 50 foiz qo'shildi\n", rand_n);
                } else if (i == 3) {
                    staff += staff / 4;
                    printf("%d - Qora. Yutdizzzzz OMG, va 3 imkoniyatda yutganingiz uchun stafkaga 25 foiz qo'shildi\n", rand_n);
                }
                break;
            }else {
                printf("%d - Qora, Topomadiz\n", rand_n);
            }
        }
    }
    printf("Oxirgi stafkadagi pulingiz - %d", staff);



    return 0;
}