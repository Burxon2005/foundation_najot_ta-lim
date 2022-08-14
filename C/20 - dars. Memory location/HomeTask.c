#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Market {     // <-- N 1
    char nomi[20];
    int mahsulot_soni;
    int qavat_soni;
    char market_turi[20];
}market;


market create_market() {        // <-- N 1
    market newM;
    printf("Nomi    : ");
    fgets(newM.nomi, sizeof(newM.nomi), stdin);
    newM.nomi[strlen(newM.nomi) - 1] = '\0';
    printf("Mahsulot soni  : ");
    scanf("%d", &newM.mahsulot_soni);
    printf("Qavatlar soni  : ");
    scanf("%d", &newM.qavat_soni);
    getchar();
    printf("Market turi  : ");
    fgets(newM.market_turi, sizeof(newM.market_turi), stdin);
    newM.market_turi[strlen(newM.market_turi) - 1] = '\0';
    return newM;
}


void printMarket (market *arr, int n) {     // <-- N 1
    for (int i = 0; i < n; i++) {
        if(!strcmp(arr[i].market_turi, "Gipermarket") && arr[i].qavat_soni > 2) {
            printf("Nomi            : %s\n", arr[i].nomi);
            printf("Mahsulot soni   : %d\n", arr[i].mahsulot_soni);
            printf("Qavatlar soni   : %d\n", arr[i].qavat_soni);
            printf("Market turi     : %s\n", arr[i].market_turi);
            puts("");
        }
    }

}


typedef struct Talaba {     // <-- N 2
    char ism[20];
    int yosh;
    int kurs;
    float stipendiya;
}talaba;


talaba addTalaba() {         // <-- N 2
    talaba addT;
    printf("Ism     : ");
    fgets(addT.ism, sizeof(addT.ism), stdin);
    addT.ism[strlen(addT.ism) - 1] = '\0';
    printf("Yoshi   : ");
    scanf("%d", &addT.yosh);
    getchar();
    printf("Kursi   : ");
    scanf("%d", &addT.kurs);
    printf("Stipendiya : ");
    scanf("%f", &addT.stipendiya);
    getchar();
    return addT;
}


void printTalaba (talaba *arr, int n) {     // <-- N 2
    for (int i = 0; i < n; i++) {
        if (arr[i].ism[0] == 'A') {
            printf("Ismi        : %s\n", arr[i].ism);
            printf("Yoshi       : %d\n", arr[i].yosh);
            printf("Kursi       : %d\n", arr[i].kurs);
            printf("Stipendiya  : %.1f\n", arr[i].stipendiya);
        }
    }
}



typedef struct Talaba1 {     // <-- N 3
    char ism[20];
    int yosh;
    int kurs;
    float stipendiya;
}talaba1;


talaba1 addTalaba1() {         // <-- N 3
    talaba1 addT;
    printf("Ism     : ");
    fgets(addT.ism, sizeof(addT.ism), stdin);
    addT.ism[strlen(addT.ism) - 1] = '\0';
    printf("Yoshi   : ");
    scanf("%d", &addT.yosh);
    getchar();
    printf("Kursi   : ");
    scanf("%d", &addT.kurs);
    printf("Stipendiya : ");
    scanf("%f", &addT.stipendiya);
    getchar();
    return addT;
}


void printTalaba1 (talaba1 *arr, int n) {     // <-- N 3
    for (int i = 0; i < n; i++) {
        if (arr[i].ism[strlen(arr[i].ism) - 1] == 'a') {
            printf("Ismi        : %s\n", arr[i].ism);
            printf("Yoshi       : %d\n", arr[i].yosh);
            printf("Kursi       : %d\n", arr[i].kurs);
            printf("Stipendiya  : %.1f\n", arr[i].stipendiya);
        }
    }
}



typedef struct Talaba2 {        // <-- N 4
    char ism[20];
    int stipendiya;
    int kurs;
}talaba2;


talaba2 creat_t2() {        // <-- N 4
    talaba2 creatT2;
    printf("Ismi        : ");
    fgets(creatT2.ism, sizeof(creatT2.ism), stdin);
    creatT2.ism[strlen(creatT2.ism) - 1] = '\0';
    printf("Stipendiya  : ");
    scanf("%d", &creatT2.stipendiya);
    printf("Kursi       : ");
    scanf("%d", &creatT2.kurs);
    return creatT2;
}


void printT2 (talaba2 *u, int n){       // <-- N 4
    int sum_stipendiya = 0;
    for (int i = 0; i < n; i++) {
        if (u[i].kurs == 2){
            sum_stipendiya += u[i].stipendiya;
        }
    }
    printf("2 - kurs talabalari stipendiyasi    : %d", sum_stipendiya);    
}


typedef struct Talaba3{     // <-- N 5
    char ism[20];
    int stipendiya;
    int kurs;
}talaba3;


talaba3 creat_t3() {        // <-- N 5
    talaba3 newT3;
    printf("Ism     : ");
    fgets(newT3.ism, sizeof(newT3.ism), stdin);
    newT3.ism[strlen(newT3.ism) - 1] = '\0';
    printf("Stipendiya  : ");
    scanf("%d", &newT3.stipendiya);
    printf("Kurs    : ");
    scanf("%d", &newT3.kurs);
    return newT3;
}


void printT3 (talaba3 *u, int n) {  // <-- N 5
    for (int i = 0; i < n; i++) {
        if (strlen(u[i].ism) < 5) {
            printf("\nIsmi        : %s\n", u[i].ism);
            printf("Stipendiya  : %d\n", u[i].stipendiya);
            printf("Kurs        : %d\n", u[i].kurs);
        }
    }
}



typedef struct AEROPORT {       // <-- N 6
    char turi[20];
    int sanasi;
    char uchish_shahri[20];
    char qonish_shahri[20];
    int uchish_soati;
}aeroport;


aeroport crAeroport() {         // <-- N 6
    aeroport newReys;
    printf("Samaloyot turi  : ");
    fgets(newReys.turi, sizeof(newReys.turi), stdin);
    newReys.turi[strlen(newReys.turi) - 1] = '\0';
    printf("Uchish oyi   : ");
    scanf("%d", &newReys.sanasi);
    getchar();
    printf("Uchish shahri   : ");
    fgets(newReys.uchish_shahri, sizeof(newReys.uchish_shahri), stdin);
    newReys.uchish_shahri[strlen(newReys.uchish_shahri) - 1] = '\0';
    printf("Qonish shahri   : ");
    fgets(newReys.qonish_shahri, sizeof(newReys.qonish_shahri), stdin);
    newReys.qonish_shahri[strlen(newReys.qonish_shahri) - 1] = '\0';
    printf("Uchish soati    : ");
    scanf("%d", &newReys.uchish_soati);
    puts("");
    getchar();
    return newReys;
}


void printAeroport (aeroport *u, int n) {       // <-- N 6
    for (int i = 0; i < n; i++) {
        if (u[i].sanasi >= 6 && u[i].sanasi <= 8) {
            printf("Samalyot turi   : %s\n", u[i].turi);
            printf("Uchish oyi      : %d\n", u[i].sanasi);
            printf("Uchish shahri   : %s\n", u[i].uchish_shahri);
            printf("Qo'nish shahri  : %s\n", u[i].qonish_shahri);
            printf("Uchish soati    : %d\n", u[i].uchish_soati);
        }
    }
}



typedef struct AEROPORT1 {       // <-- N 7
    char turi[20];
    int sanasi;
    char uchish_shahri[20];
    char qonish_shahri[20];
    float uchish_soati;
}aeroport1;


aeroport1 crAeroport1() {         // <-- N 7
    aeroport1 newReys;
    printf("Samaloyot turi  : ");
    fgets(newReys.turi, sizeof(newReys.turi), stdin);
    newReys.turi[strlen(newReys.turi) - 1] = '\0';
    printf("Uchish oyi   : ");
    scanf("%d", &newReys.sanasi);
    getchar();
    printf("Uchish shahri   : ");
    fgets(newReys.uchish_shahri, sizeof(newReys.uchish_shahri), stdin);
    newReys.uchish_shahri[strlen(newReys.uchish_shahri) - 1] = '\0';
    printf("Qonish shahri   : ");
    fgets(newReys.qonish_shahri, sizeof(newReys.qonish_shahri), stdin);
    newReys.qonish_shahri[strlen(newReys.qonish_shahri) - 1] = '\0';
    printf("Uchish soati    : ");
    scanf("%f", &newReys.uchish_soati);
    puts("");
    getchar();
    return newReys;
}


void printAeroport1 (aeroport1 *u, int n) {       // <-- N 7
    for (int i = 0; i < n; i++) {
        if (u[i].uchish_soati >= 2 && u[i].uchish_soati <= 3 && !strcmp(u[i].qonish_shahri, "Toshkent")) {
            printf("Samalyot turi   : %s\n", u[i].turi);
            printf("Uchish oyi      : %d\n", u[i].sanasi);
            printf("Uchish shahri   : %s\n", u[i].uchish_shahri);
            printf("Qo'nish shahri  : %s\n", u[i].qonish_shahri);
            printf("Uchish soati    : %.1f\n", u[i].uchish_soati);
        }
    }
}





int main () {
    // N 1
    /*
    int n;
    market *new_market;
    printf("Nechta market kiritmoqchisiz : ");  scanf("%d", &n);
    getchar();
    new_market = (market *) malloc(n * sizeof(market));
    for (int i = 0; i < n; i++){
        printf("\n%d - market !\n", i + 1);
        new_market[i] = create_market();
        puts("");
    }
    printf("Market ma'lumoti !\n");
    printMarket(new_market, n);
    */


    // N 2
    /*
    int n;
    talaba *newTal;
    printf("Nechta talaba kiritimoqchisiz : ");     scanf("%d", &n);
    getchar();
    newTal = (talaba *) malloc (n * sizeof(talaba));
    for (size_t i = 0; i < n; i++) {
        printf("%d - talaba !\n", i + 1);
        newTal[i] = addTalaba();
        puts("");
    }
    printf("Talaba ma'lumoti !\n");
    printTalaba(newTal, n);
    */


    //  N 3
    /*
    int n;
    talaba1 *newTal;
    printf("Nechta talaba kiritimoqchisiz : ");     scanf("%d", &n);
    getchar();
    newTal = (talaba1 *) malloc (n * sizeof(talaba1));
    for (size_t i = 0; i < n; i++) {
        printf("%d - talaba !\n", i + 1);
        newTal[i] = addTalaba1();
        puts("");
    }
    printf("Talaba ma'lumoti !\n");
    printTalaba1(newTal, n);
    */


    // N 4
    /*
    int n;
    printf("N = ");     scanf("%d", &n);
    talaba2 *newT2;
    newT2 = (talaba2*) malloc (n * sizeof(talaba2));
    for (int i = 0; i < n; i++){
        printf("%d - talaba !\n", i + 1);
        getchar();
        newT2[i] = creat_t2();
        puts("");
    }
    printT2(newT2, n);
    */
    

    // N 5
    /*
    int n;
    printf("N = ");     scanf("%d", &n);
    talaba3 *newT3;
    newT3 = (talaba3*) malloc (n * sizeof(talaba3));
    for (int i = 0; i < n; i++) {
        printf("%d - talaba !\n", i + 1);
        getchar();
        newT3[i] = creat_t3();
        puts("");
    }
    printT3(newT3, n);
    */


    // N 6
    /*
    int n;
    printf("N = ");     scanf("%d", &n);
    getchar();
    aeroport *newar;
    newar = malloc (n * sizeof(aeroport));
    for (int i = 0; i < n; i++) {
        printf("%d - reys !\n", i + 1);
        newar[i] = crAeroport();
        puts("");
    }
    puts("");
    printf("Reys ma'lumoti !\n");
    printAeroport(newar, n);
    */


    // N 7
    int n;
    printf("N = ");     scanf("%d", &n);
    getchar();
    aeroport1 *newar;
    newar = malloc (n * sizeof(aeroport1));
    for (int i = 0; i < n; i++) {
        printf("%d - reys !\n", i + 1);
        newar[i] = crAeroport1();
        puts("");
    }
    puts("");
    printf("Reys ma'lumoti !\n");
    printAeroport1(newar, n);










    return 0;
}