#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void new(int a[], int divide[], int n) {    // 3 ili 6 ga bo'linadiga, 1- usul
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] % 3 == 0 || a[i] % 6 == 0) {
            divide[count++] = a[i];
        }
    }
    puts("");
    for (int i = 0; i < count; ++i) {
        printf("%d ", divide[i]);
    }
}


bool new1(int a[], int n) {
    bool divide = false;
    for (int i = 0; i < n; ++i) {
        if (a[i] % 3 == 0 || a[i] % 6 == 0) {
            divide = true;
        }
    }
    return divide;
}


int main() {
    // 1 usul , 3 ili 6 ga bo'linadigan
    /*
    srand(time(0));
    int n;
    scanf("%d", &n);
    int arr[n], divide[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 100 + 1;
        printf("%d ", arr[i]);
    }
    new(arr, divide, n);
     */

    // 2 usul
    srand(time(0));
    int n, count = 0;
    scanf("%d", &n);
    int arr[n], divide[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 100 + 1;
        printf("%d ", arr[i]);
        if (arr[i] % 3 == 0 || arr[i] % 6 == 0) {
            divide[count++] = arr[i];
        }
    }
    puts("");
    for (int i = 0; i < count; ++i) {
        if (new1(divide, n) == true){
            printf("%d ", divide[i]);
        }
    }



    return 0;
}