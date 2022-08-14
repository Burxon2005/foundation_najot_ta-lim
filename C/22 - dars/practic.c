#include <stdio.h>
#include <stdlib.h>


typedef struct Avia{
    char samalyot_turi[50];
    int joy;
    char joy_turi[20];
    int uchish_soat;
    float yuk_kg;
}avia;

avia printAvia(){
    avia a;
    printf("Samalyot turi: ");
    scanf("%[^\n]s", a.samalyot_turi);
    getchar();
    printf("Joy raqami: ");
    scanf("%d", &a.joy);
    getchar();
    printf("Joy turini tanlen!\nBiznes yoki Ekonom: ");
    scanf("%[^\n]s", a.joy_turi);
    getchar();
    printf("Qancha voht uchmoqchisiz: ");
    scanf("%d", &a.uchish_soat);
    getchar();
    printf("Nechi kg yuk olmoqchisiz: ");
    scanf("%f", &a.yuk_kg);
    getchar();
    return a;
}


int main(){
    int a ,b;
    printf("Uchishi kerek bolgan samalyotlar: ");
    scanf("%d", &a);
    printf("Nechta davlatga uchishi kerek: ");
    scanf("%d", &b);
    getchar();
    avia *u;
    u = malloc(a * sizeof(avia));
    for(int i = 0 ;i < a ; i++){
        printf("%d - yo'lvchi ma'lumoti :\n", i + 1);
        u[i] = printAvia();
    }

    FILE *fp = fopen("avia.txt", "w");
    for(int i = 0;i < a; i++){
        fprintf(fp, "%d-yo'lovchi haqida ma'lumot:\n", i+1);
        fprintf(fp,"Samalyot turi   : %s\n", u[i].samalyot_turi);
        fprintf(fp,"O'rindiq no'meri: %d\n", u[i].joy);
        fprintf(fp,"Joy turi        : %s\n", u[i].joy_turi);
        fprintf(fp,"Ucha olish vaqti: %d\n", u[i].uchish_soat);
        fprintf(fp,"Yuk miqdori     : %.2f\n", u[i].yuk_kg);
    }
    fclose(fp);


    return 0;
}