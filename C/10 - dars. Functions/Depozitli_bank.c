#include <stdio.h>
#include <stdlib.h>

float year (int suma, int years) {
    float foiz = 200;
    for (int i = 1; i <= (12 * years); ++i) {
        suma += suma / foiz;
    }
    return suma;
}



int main () {
    char f_name[20], l_name[20];
    float suma; int muddat;
    printf("Bank xush kelibsiz\n");
    printf("Ismingizni kiriting: ");
    scanf("%s", f_name);
    printf("Familyangizni kiriting: ");
    scanf("%s", l_name);
    printf("Summani kiriting, eng kamida 1000 $ bo'lishi shart: ");
    scanf("%f", &suma);
    if (suma < 1000) {
        printf("Xayr\n");
        goto end;
    }
    printf("1-yildan 10-yilgacha Muddatni kiriting: ");
    scanf("%d", &muddat);
    if (muddat < 1) {
        printf("Xayr\n");
        goto end;
    }
    printf("%s %s\nSiz oyiga %.2f $ dan %d yil mobaynida to'liysiz\n", f_name, l_name, year(suma, muddat), muddat);





    end:
    return 0;
}