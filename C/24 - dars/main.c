#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void fillArray (int *arr, int n) {      // <-- 1, arrayni random qib chiqarish
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
        printf("%d ", arr[i]);
    }
}
void firstPart (int *arr, int n) {      // <-- 1, arrayni birinchi yarmini chiqarish
    for (int i  = 0; i < n / 2; i++) {
        printf("%d ", arr[i]);
    }
}
void secondPart (int *arr, int n) {
    for (int i = n / 2; i < n; i++) {
        printf("%d ", arr[i]);
    }
}



typedef struct Magazin {        // <-- 3. Struktura elementlari
    char nomi[20];
    char turi[20];
    char adresi[20];
    int mahsulot_soni;
}magazin;

magazin crMarket () {           // <-- 3 . Kiritish
    magazin market;
    printf("Nomi    : ");   scanf("%s", market.nomi);   getchar();
    printf("Turi    : ");   scanf("%s", market.turi);   getchar();
    printf("Adresi  : ");   scanf("%s", market.adresi); getchar();
    printf("Mahsulot soni   : ");   scanf("%d", &market.mahsulot_soni);  getchar();
    return market;
}

void prMarket (magazin *u) {    // <-- 3. ekranga chiqarish
    for (int i = 0; i < 3; i++) {
        if (u[i].nomi[0] == 'A' && u[i].mahsulot_soni > 1000) {
            printf("Nomi            : %s\n", u[i].nomi);
            printf("Turi            : %s\n", u[i].turi);
            printf("Adresi          : %s\n", u[i].adresi);
            printf("Mahsulot soni   : %d\n\n", u[i].mahsulot_soni);
        }
    }
}



int swapDigit (int a, int post1, int post2) {
    for (int i = 0; i < a; i++)
    {
        /* code */
    }
    
}



int main () {
    srand (time (0));
    // 1
    /*
    int n;  printf("N = "); scanf("%d", &n);
    int * arr = (int *) malloc (n * sizeof (int));
    printf("Array               : ");
    fillArray (arr, n);
    printf("\nBirinchi yarmi    : ");
    firstPart(arr, n);
    printf("\nIkkinchi yarmi    : ");
    secondPart(arr, n);
    */


    // 2
    /*
    char txt[20];   printf("Text    : ");   scanf("%s", txt);
    strncat (txt, txt, 3);    printf ("%s\n", txt);
    strcpy (txt, txt + 3);    printf("%s\n", txt);
    */


    // 3
    /*
    magazin *mar = (magazin *) malloc ( 3* sizeof (magazin));
    for (int i = 0; i < 3; i++) {
        printf("%d - magazin !\n", i + 1);
        mar[i] = crMarket();
        puts("");
    }
    printf("Market ma'lumoti !\n");
    prMarket(mar);
    */


    // 4
    
    int n;  printf("N = "); scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 10 + 1;
            printf("%-3d ", arr[i][j]);
        }
        puts("");
    }
    puts("");
    for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < n; j++ ) {
            if (j >= n - i - 1) {
                printf("*  ");
            }else {
                printf("%-3d", arr[i][j]);
            }
        }
        puts("");
    }
    


    // Problem 3
    // int a, pos1, pos2;  printf("Number = "); scanf("%d", &a);
    // printf("First num: ");   scanf("%d", &pos1); printf("Second num: "); scanf("%d", &pos2);
    // printf(swapDigit(a, pos1, pos2));







    return 0;
}