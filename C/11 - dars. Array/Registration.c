#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void regis() {
    int x;
    printf("Nechta odam kiritmoqchisiz: ");
    scanf("%d", &x);
    int daromad[x], yili[x], farzandi[x], y, far;
    for (int i = 1; i <= x; ++i) {
        printf("%d - odam\n", i);
        printf("Daromadiz: ");
        scanf("%d", &daromad[i]);
        printf("Yiliz: ");
        scanf("%d", &yili[i]);
        printf("Farzandiz bomi!\n1 - Ha\n2 - yoq");
        scanf("%d", &far);
        switch (far) {
            case 1:
                printf("Nechta: ");
                scanf("%d", &farzandi[i]);
            default:
                goto middle;
        }
        middle:
        printf("Malumot uchun rahmat!\n");
    }
    puts("");
    printf("Nechinchi odami qidirmoqchisiz: ");
    scanf("%d",&y);
    for (int i = 1; i <= x; ++i) {
        if (y == i) {
            printf("\nDaromadi: %d", daromad[i]);
            printf("\nYili: %d", yili[i]);
            printf("\nFarzandi: %d", farzandi[i]);
        }else {
            printf("Bunaqa odam yo\n");
        }
    }
}


int main () {
    regis();

    return 0;
}