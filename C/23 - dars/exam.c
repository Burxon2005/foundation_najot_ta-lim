#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int SUMMA (int n) {
    int sum = 0, a, b;
    a = 2 * n + 2;
    b = n / 2;
    for(; a > b; a--) {
        sum += a;
    }
    return sum;
}


typedef struct Avtomobil {
    char nomi[20];
    char mamlakati[20];
    float narxi;
    int pozitsiyasi;
}avtomobil;


avtomobil avtoInfo() {
    avtomobil info;
    printf("Nomi        : ");   scanf("%[^\n]s", info.nomi);
    getchar();
    printf("Mamlakati   : ");   scanf("%[^\n]s", info.mamlakati);
    getchar();
    printf("Narxi       : ");   scanf("%f", &info.narxi);
    getchar();
    printf("Pozitsiyasi : ");   scanf("%d", info.pozitsiyasi);
    getchar();
    return info;
}


void printAvto (avtomobil *avto) {
    for (int i = 0; i < 10; i++) {
        if (avto->narxi < 40000 && avto->pozitsiyasi == 4) {
            printf("Nomi        : %s\n", avto->nomi);
            printf("Mamlakati   : %s\n", avto->mamlakati);
            printf("Narxi       : %.1f\n", avto->narxi);
            printf("Pozitsiya   : %d\n", avto->pozitsiyasi);
        }
    }
}



int main () {
    // Exam variant 3
    // 1
    /*
    int n;  printf("N = "); scanf("%d", &n);
    printf("Yigindisi   : %d\n", SUMMA(n));
    */


    // 2
    /*
    srand(time(0));
    int n;  printf("N = "); scanf("%d", &n);
    int arr[n], toq[n], count = 0;
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 50 + 1;
        printf("%d ", arr[i]);
    }
    puts("");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            toq[count++] = arr[i];
        }
    }
    puts("");
    for (int i = 0; i < count; i++) {
        printf("%d ", toq[i]);
    }
    */
    

    // 3
    /*
    char word[30];
    printf("Text    : ");    scanf("%s", word);
    for (int i = 0; i < strlen(word); i++) {
        if (strlen(word) - 2 == i) {
            printf("%c", '5');
        }else {
            printf("%c", word[i]);
        }
    }
    */


    // 4
    /*
    srand(time(0));
    int n;  printf("N = "); scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 20 + 1;
            printf("%-3d ", arr[i][j]);
        }
        printf("\n");
    }
    puts("");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {\
            if (i == j || (i + j == n - 1)) {
                printf("* ");
            }else {
                printf("%-3d", arr[i][j]);
            }
        }
        printf("\n");
    }
    */


    // 5
    /*
    int num, man[20], count = 0;
    FILE *fp = fopen ("text.txt", "r"), *in = fopen ("text1.txt", "w"), *manfiy = fopen ("text2.txt", "w");
        while(fscanf(fp, "%d", &num) != EOF) {
            if (num > 0) {
                fprintf(in, "%d ", num);
            }else if (num < 0){
                man[count++] = num;
            }
        }
        for (int i = count - 1; i >= 0; i--) {
            fprintf(manfiy, "%d ", man[i]);
        }
        
    fclose(fp); 
    fclose(in); 
    fclose(manfiy);
    */


    // 6
    avtomobil *avto = (avtomobil*) malloc (10 * sizeof(avtomobil));
    for (int i = 0; i < 10; i++) {
        printf("%d - avtomobil!\n", i + 1);
        avto[i] = avtoInfo();
        puts("");
    }
    puts("");
    printf("Avtomobil ma'lumoti !\n");
    printAvto(avto);
    

    




    return 0;
}