#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


bool isPrime (int n) {      // O 7 | tub sonni faylga yozish funksiyasi
    bool isprime = true;
    for (int i = 2; i < n / 2; i++) {
        if (n % i == 0) {
            isprime = false;
        }
    }
    return isprime;
} 



int main () {

    // O 2     <--
    /*
    char txt[50];
    FILE *fp = fopen("ex.txt", "r");
        fscanf(fp, "%s", txt);
    fclose(fp);
    printf("%s ", txt);
    printf("%s\n", txt);
    */



    // O 3     <--
    /*
    char txt[50];
    FILE * fp = fopen("ex.txt", "r");
    if (fp != NULL){
        while (fscanf(fp, "%s", txt) != EOF) {
            fprintf(fp, "%s", txt);
        }
    }
    fclose(fp);
    printf("%s ", txt);
    printf("%s\n", txt);
    */



    // O 4     <--
    /*
    char txt[50];
    int count = 1;
    FILE *fp = fopen("ex.txt", "r");
    if (fp != NULL) {
        fscanf(fp, "%s", txt);
        fscanf(fp, "%s", txt);
    }
    fclose(fp);
    printf("%s ", txt);
    printf("%s\n", txt);
    */



    // O 5     <--
    /*
    int arr[15];
    int i = 0, num;
    FILE *fp = fopen("ex.txt", "r");
    if (fp != NULL) {
        while(fscanf(fp, "%d", &num) != EOF) {
            arr[i++] = num;
        }
    }
    fclose(fp);
    for (int j=i; j > 0; j--) {
        if (arr[j] % 2 == 0) {
            printf("%d ", arr[j]);
        }
    }
    */

   

    // O 6     <--
    /*
    int n; scanf("%d", &n);
    FILE *fp = fopen ("ex.txt", "w");
        for (int i = 1; i <= n; i++) {
            fprintf(fp, "%d\n", i);
        }
    fclose(fp);
    */



    // O 7     <--
    /*
    int num, count = 0;
    FILE *home = fopen("inter.txt", "r"), *copy = fopen("ex.txt", "w");
        if (home != NULL) {
            while (fscanf(home, "%d", &num) != EOF) {
                if (isPrime(num) == true) {
                    fprintf(copy, "%d ", num);
                }
            }
        }else {
            printf("Bunday file topilmadi\n");
        }
    fclose(copy);
    fclose(home);
    */



    // O 8     <--
    /*
    int num, max = 0;
    FILE *fp = fopen("ex.txt", "r");
        if (fp != NULL) {
            while (fscanf(fp, "%d", &num) != EOF) {
                if (max < num) {
                    max = num;
                }
            }
        }else {
            printf("Bunday file topilmadi\n");
        }
    fclose(fp);
    printf("%d \n", max);
    */



    // O 9     <--
    /*
    srand(time(0));
    int n;  printf("N = ");  scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 101 - 50;
        printf("%d ", arr[i]);
    }
    FILE *mus = fopen ("musbat.txt", "w"), *man = fopen("manfiy.txt", "w");
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                fprintf(mus, "%d ", arr[i]);
            }else if (arr[i] < 0) {
                fprintf(man, "%d ", arr[i]);
            }
        }
    fclose(mus);
    fclose(man);
    */



    // O 10     <--
    /*
    char w[50];
    FILE *fp = fopen("text1.txt", "r"), *pf = fopen ("text2.txt", "a");
        while(fscanf(fp, "%s", w) != EOF) {
            fprintf(pf, "%s ", w);
        }
    fclose(fp);
    fclose(pf);
    */



    // O 11     <--
    /*
    char w[50]; int count = 0;
    FILE *fp = fopen("text1.txt", "r");
        if (fp != NULL) {
            while(fscanf(fp, "%s", w) != EOF) {
                count++;
            }
        }else {
            printf("Bunday file yo'q\n");
        }
    fclose(fp);
    printf("%d\n", count);
    */



    // O 12     <--
    /*
    char w[50]; int count = 0;
    FILE *fp = fopen("text1.txt", "r");
        if (fp != NULL) {
            while (fscanf(fp, "%s", w) != EOF) {
                if (!strcmp(w, "is")) {
                    count++;
                }
            }
        }else {
            printf("Bunday file yo'q\n");
        }
    fclose(fp);
    printf("%d\n", count);
    */



    // O 13     <--
    /*
    char matn[100];
    int count = 0;
    FILE *fr = fopen("text1.txt", "r");  
        while(fgets(matn, sizeof(matn), fr)){
            count++;
        }
    fclose(fr);
    printf("%d ta qator  bor.", count);
    */
    



    // O 14     <--
    /*
    char matn[100];
    int count = 0;
    FILE *fr = fopen("text1.txt", "r");  
        while(fscanf(fr, "%s", matn) != EOF){
            if(matn[0] == 'p') {
                printf("%s ", matn);
            }
        }
    fclose(fr);
    */



    // O 15     <--
    /*
    char matn[100], word[100];
    int max = 0;
    FILE *fr = fopen("text1.txt", "r");
        while (fscanf(fr, "%s", matn) != EOF) {
            if (strlen(matn) > max) {
                max = strlen(matn);
                strcpy(word, matn);
            }
        }
    fclose(fr);
    printf("%s\n", word);
    */
   


    // O 16     <--
    /*
    char matn[100];
    FILE *fr = fopen("text1.txt", "r");
        while (fscanf(fr, "%s", matn) != EOF) {
            if (strlen(matn) <= 5) {
                printf("%s ", matn);
            }
        }
    fclose(fr);
    */
    // O 17
    char us_word[50], word[50];
    int n, count = 0;  printf("Enter line: "); scanf("%d", &n);
    printf("Enter word: "); scanf("%s", us_word);
    FILE *fp = fopen("1.txt", "r"), *out = fopen("output.txt", "w");
        while(fscanf(fp, "%s", word) != EOF) {
            fprintf(out, "%s\n", word);
            count++;
            if (count == n - 1) {

                fprintf(out, "%s\n", us_word);
            }
        }
    fclose(fp);
    fclose(out);







    return 0;

}