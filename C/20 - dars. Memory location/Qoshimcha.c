#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void qoshimcha_1(int arr[], int n) {    // <-- 1
    srand(time(0));
    int sum = 0;
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
        printf("%d ", arr[i]);
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    puts("");
    printf("Juftlar yigindisi   : %d\n", sum);   
}



void tub_2 (int arr[], int n) {         // <-- 2
    int count = 0, count_tub = 0, tub[n];
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
        printf("%d ", arr[i]);
    }
    puts("");
    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 2; j < arr[i]; j++) {
            if (arr[i] % j == 0) {
                count++;
                break;
            }
        }
        if (count == 0) {
            tub[count_tub++] = arr[i];
        }
        
    }
    printf("Tub : ");
    for (int i = 0; i < count_tub; i++) {
        printf("%d ", tub[i]);
    }
    puts("");
}




int main () {
    srand(time(0));
    // 1
    /*
    int n;  scanf("%d", &n);
    int arr[n];
    qoshimcha_1(arr, n);
    */


    // 2
    /*
    int n, count_tub = 0, count = 0;  scanf("%d", &n);
    int arr[n], tub[n];
    tub_2(arr, n);
    */


    // 3
    /*
    char txt[20], zero, first;
    scanf("%[^\n]s", txt);
    zero = txt[0];
    first = txt[1];
    txt[0] = txt[strlen(txt) - 1];
    txt[1] = txt[strlen(txt) - 2];
    txt[strlen(txt) - 1] = zero;
    txt[strlen(txt) - 2] = first;
    printf("%s\n", txt);
    */


    // 4
    int n;  scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 20 + 1;
            printf("%d ", arr[i][j]);
        }
        puts("");
    }
    puts("");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i % 2 == 0 && j % 2 == 0) {
                printf("%d ", arr[i][j]);
            }else {
                printf("* ");
            }
        }
        puts("");
    }
    

    
    
    






    return 0;
}