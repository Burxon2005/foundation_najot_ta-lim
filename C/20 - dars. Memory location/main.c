#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void toldiribBer (int *arr, int n) {    // realloc Ex 1
    for (int i = 0; i < n; i++) {
        printf("%d - son : ", i + 1);
        scanf("%d", &arr[i]);
    }
}


void chiqar (int *arr, int n) {         // realloc Ex 1
    puts("");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}


void qoshimcha (int *arr, int n, int son) {     // Qoshimcha ex 1
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
        printf("%d ", arr[i]);
    }
    puts("");
    printf("Son : ");   scanf("%d", &son);
    for (int i = 0; i < n; i++) {
        if (son == arr[i]) {
            printf("True\n");
            break;
        }else if (i == n - 1) {
            printf("False\n");
            break;
        }
    }
}



int main () {
    // Malloc, Calloc
    // Ex 1     | array kottasini chiqarish
    /*
    srand(time(0));
    int n;  scanf("%d", &n);
    int *arr , max = 0;
    arr = (int *) malloc (n * sizeof (int));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
        printf("%d ", arr[i]);
    }
    puts("");
    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    printf("%d \n", max);
    */


    // realloc()
    /*
    printf("1 - arr : ");
    int n, n1;      scanf("%d", &n);
    int *arr;
    arr = (int *) malloc (n * sizeof(int));
    toldiribBer(arr, n);
    chiqar(arr, n);
    puts("");
    printf("2 - arr : ");
    scanf("%d", &n1);
    arr = realloc(arr, n1*sizeof(int));
    toldiribBer(arr, n1);
    chiqar(arr, n1);
    */


    // Qoshimcha ex 1
    /*
    srand(time(0));
    int n, son, *arr;
    printf("N = ");    scanf("%d", &n);
    arr = (int *) malloc (n * sizeof(int));
    qoshimcha(arr, n, son);
    */



    
    
    



    return 0;
}