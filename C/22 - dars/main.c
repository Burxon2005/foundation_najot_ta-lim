#include <stdio.h>


int main () {

    // O 18
    /*
    char word[50];  int n, count = 0; printf("Line: ");    scanf("%d", &n);
    FILE *fp = fopen ("1.txt", "r"), *out  = fopen ("output.txt", "w");
        if (fp == NULL) {
            printf("Bunday file yo'q\n");
            return 1;
        }
        while (fgets(word, sizeof(word), fp)) {
            count++;
            if (count != n) {
                fprintf(out, "%s", word);
            }
        }
    fclose(fp);
    fclose(out);
    */


    // O 19
    /*
    char n[50];
    FILE *fp = fopen("1.txt", "r"), *out = fopen ("output.txt", "w");
        fscanf(fp, "%s", n);
        fprintf(out, "%s ", n);
        while(fscanf(fp, "%s", n) != EOF) {

        }
        fprintf(out, "%s ", n);
    fclose(fp);
    fclose(out);
    */


    // O 20
    /*
    int n, count = 0;
    float sum = 0;
    FILE *fp = fopen("1.txt", "r");
        while(fscanf(fp, "%d", &n) != EOF) {
            sum += n;
        }
        
    fclose(fp);
    printf("%.1f\n", sum / 10);
    */



    return 0;
}