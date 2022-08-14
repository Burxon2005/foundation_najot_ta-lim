#include <stdio.h>
#include <stdlib.h>


int main(){
    // O 21
    /*
    int n;
    printf("N =  ");
    scanf("%d", &n);
    char c;
    char text[50], copy[100];
    FILE *fr = fopen("1.txt", "r");
    FILE *fw = fopen("output.txt", "w");
        for (int i = 0; i < n; i++) {
            for (int i = 0; fgetc(fr) != EOF; i++) {
                fseek(fr, i, SEEK_SET);
                c = fgetc(fr);
                for (int i = 0; i < n; i++) {
                    fprintf(fw, "%c", c);
                }
                
            }  

            fseek(fr, 0, SEEK_SET);
            fprintf(fw, "\n"); 
        }
    fclose(fr);
    fclose(fw);
    */


    // O 22
    int num, arr[10], temp = 0;
    FILE *fp = fopen ("1.txt", "r");
        for (int i = 0; fscanf(fp, "%d", &arr[i]) != EOF; i++){}
    fclose(fp);

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            temp = arr[i];
            if (arr[i] > arr[j]) {
                arr[i] = arr[j];
                arr[j] = temp;
            }
        } 
    }
    FILE *pf = fopen ("output.txt", "w");
        for (int i = 0; i < 10 ; i++) {
            fprintf(pf, "%d ", arr[i]);
        }
        
    fclose(pf);
    



    return 0;
}