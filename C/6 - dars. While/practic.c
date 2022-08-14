#include <stdio.h>

int main (){
    int a;
    start:
    printf("Tomonni kiriting: \n");
    scanf("%d", &a);
    while (a) {
        switch (a) {
            case 1:
                printf("Sharq\n");
                goto start;
            case 2:
                printf("G'arb\n");
                goto start;
            case 3:
                printf("Shimol\n");
                goto start;
            case 4:
                printf("Janub\n");
                goto start;
            case 0:

            default: {
                printf("Bunday tomon yo'q\n");
            }
        }
    }


    return 0;
}