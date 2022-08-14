#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // index = 3, element = 111;     1, 2, 3, 111, 4, 5, 6;
    /*
    int arr[11] = {12, 13, 14, 15, 16, 17, 18, 19, 11, 20};
    int index, num;
    printf("Indexni kiriting: ");
    scanf("%d", &index);
    printf("Sonni kiriting: ");
    scanf("%d", &num);
    for (int i = 9; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = num;
    for (int i = 0; i <= 10; ++i) {
        printf("%d ", arr[i]);
    }
    puts("");
     */


    // Max sonini indexini topish
    /*
    srand(time(0));
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        arr[i] = rand() % 100 + 1;
        printf("%d ", arr[i]);
    }
    puts("");
    int num = arr[0], max_index = 0;
    for (int i = 0; i < 10; ++i) {
        if (num < arr[i]) {
            num = arr[i];
            max_index = i;
        }
    }
    printf("Eng kotta son: %d\nIndexi: %d\n",num, max_index);
     */

    // max dan keyin nechta son borligini topish
    /*
    srand(time(0));
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        arr[i] = rand() % 100 + 1;
        printf("%d ", arr[i]);
    }
    puts("");
    int max_index = 0, son = 0;
    for (int i = 0; i < 10; ++i) {
        if (arr[max_index] < arr[i]) {
            max_index = i;
        }
    }
    printf("Max dan keyin: %d\nMaxdan oldin: ", 9 - max_index, 9 - (9 - max_index));
     */


    // max dan min gacha nechta sonligini topish
    /*
    srand(time(0));
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        arr[i] = rand() % 100 + 1;
        printf("%d ", arr[i]);
    }
    puts("");
    int max_index = 0, min_index = 0, num = 0;
    for (int i = 0; i < 10; ++i) {
        if (arr[max_index] < arr[i]) {
            max_index = i;
        }
        if (arr[min_index] > arr[i]) {
            min_index = i;
        }
    }
    if (max_index < min_index) {
        printf("%d\n", min_index - max_index);
    }else {
        printf("%d\n", max_index - min_index);
    }
     */


    // 2 li sanoq sistemadan 10 li ga
    int num, qoldiq, kopayt = 1;
    int onlik = 0;
    scanf("%d", &num);
    printf("%d -> ", num);
    while (num > 0) {
        qoldiq = num % 10;
        onlik += qoldiq * kopayt;
        num /= 10;
        kopayt *= 2;
    }
    printf("%d\n", onlik);




    return 0;
}
