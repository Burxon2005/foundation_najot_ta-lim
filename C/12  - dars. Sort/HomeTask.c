#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

int pickMissNumber(int *arr1, int ar_size)
{
    int i, sum = 0, n = ar_size + 1;
    for(i = 0; i < ar_size; i++)
    {
        sum = sum + arr1[i];
    }

    return (n*(n+1))/2 - sum;
}

int main () {
    srand(time(0));

    // G 16
    /*
    int n, temp;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        a[i] = rand() % 24 - 15;
        printf("%d ", a[i]);
    }
    puts("");
    temp = a[n - 1];
    for (int i = n; i > 0; --i) {
        a[i] = a[i-1];
    }
    a[0] = temp;
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
     */


    // G 17
    /*
    int n, k, temp;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        a[i] = rand() % 13 + 8;
        printf("%d ", a[i]);
    }
    puts("");
    printf("k - ni kiriting: ");
    scanf("%d", &k);
    while (k) {
        temp = a[0];
        for (int i = 0; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        a[n - 1] = temp;
        k--;
    }
    puts("");
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
     */


    // G 18
    /*
    int n, k, temp;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        a[i] = rand() % 81 - 11;
        printf("%d ", a[i]);
    }
    puts("");
    printf("k - ni kiriting: ");
    scanf("%d", &k);
    while (k) {
        temp = a[n - 1];
        for (int i = n - 1; i > 0; i--) {
            a[i] = a[i - 1];
        }
        a[0] = temp;
        k--;
    }
    puts("");
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
     */
    
    
    // 19
/*
    int n, count = 0;
    scanf("%d", &n);
    int a[n], arr[n];
    for (int i = 0; i < n; ++i) {
        a[i] = rand() % 10 + 1;
        printf("%d ", a[i]);
    }
    puts("");
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i] == a[j]) {
                arr[count++] = a[i];
            }
        }
    }
    for (int i = 0; i < count; ++i) {
        printf("%d ", arr[i]);
    }

*/

    // G 20
    /*
    int n;
    scanf("%d", &n);
    int a[n], count = 0;
    for(int i = 0 ; i < n ; i++) {
        a[i] = rand() % 10 + 1;
        printf("%d ", a[i]);
    }
    puts("");
    for(int i = 0; i < n; i++) {
        count = 0;
        for(int j = 0 ; j < n + 1; j++) {
            if (i != j) {
                if (a[i] == a[j]) {
                    count++;
                }
            }
        }
        if (count == 0 ) {
            printf("%d ",a[i]);
        }
    }
     */



    // G 21     1 - 100 gacha sonlani orasida tushib qoganini topish
    /*
    int a[] = {88, 85, 96, 81, 39, 12, 4, 56, 2, 13, 31, 51, 54, 21, 5, 48, 28, 57, 40, 44, 55, 74, 80, 94, 17, 61, 47, 1, 10, 27, 83, 42, 36, 75, 3, 65, 45, 24, 15, 25, 14, 30, 41, 53, 34, 11, 93, 86, 32, 26, 97, 7, 98, 50, 38, 68, 59, 64, 63, 76, 91, 52, 71, 43, 35, 18, 79, 87, 29, 58, 78, 22, 95, 49, 90, 67, 89, 69, 62, 9, 33, 99, 6, 82, 8, 70, 84, 77, 37, 72, 46, 16, 23, 73, 92, 60, 66, 100, 20};
    int n, ctr = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i < ctr; i++) {
        printf("%d  ", a[i]);
    }
    printf("\nSonni kiriting: ");
    scanf("%d", &n);
    printf("\n");
    if (n == pickMissNumber(a, ctr)) {
        printf("Togri topdiz, tushib qogan son %d - ga teng edi!\n", pickMissNumber(a, ctr));
    }else {
        printf("Notori, tushib qogan son %d - edi\n", pickMissNumber(a, ctr));
    }
     */


    return 0;
}