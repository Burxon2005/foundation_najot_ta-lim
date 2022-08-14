#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(0));
    int n, count_m = 0, count_n = 0;
    printf("Sonni kiriting: ");
    scanf("%d", &n);
    int arr[n], musArr[n], manArr[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 200 - 100;
        printf("%d ", arr[i]);
    }
    puts("");
    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0) {
            musArr[count_m++] = arr[i];
        }else {
            manArr[count_n++] = arr[i];
        }
    }
    for (int i = 0; i < count_m; ++i) {
        printf("%d ", musArr[i]);
    }
    for (int i = 0; i < count_n; ++i) {
        printf("%d ", manArr[i]);
    }
    puts("");
    printf("Musbat elementlar soni: %d\n", count_m);
    
    
    
    return 0;
}