#include <stdio.h>

void pointer (int n) {       // H 1
    int *ptr = &n;
    printf("%p\n", ptr);
}


int kvd (int n) {    // H 2
    int *pt = &n;
    *pt *= *pt;
    return *pt;
}


void replace (int a) {  // H 3
    int *pt = &a, on, bir;
    on = a / 10;
    bir = a % 10;
    *pt = bir * 10 + on;
    printf("%d\n", *pt);
}


void print (int *a, int n) {    // H 4
    int temp;
    for (int i = 0; i < 10; ++i) {
        for (int j = i + 1; j < 10; ++j) {
            if (*(a + i) > *(a + j)) {
                temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ", *(a + i));
    }
}






int main () {
    // H 1
    /*
    int n = 10;
    pointer(n);
     */


    // H 2
    /*
    int n;
    scanf("%d", &n);
    printf("%d\n", kvd(n));
     */


    // H 3
    /*
    int n;
    scanf("%d", &n);
    replace(n);
     */


    // H 4      // Array elementlarini osish tartibida qilish , pointer i funksiya orqali
    /*
    int num[] = {63, 41, 39, 83, 13, 34, 21, 94, 47, 65};
    int *ptr = num, temp;
    puts("");
    print(ptr, 10);
     */


    // H 5      // float tipdigi pointeri , butun qismini chiqarish, yani int
    /*
    float n;
    scanf("%f", &n);
    float *pt = &n;
    printf("%d\n", (int)*pt);
     */


    // H 6
    /*      // pointer orqali int seriani elementlari yigindisini topish
    int a[5] = {1, 2, 3, 4, 5};
    int *pt = a;
    for (int i = 0; i < 5; ++i) {
        *pt += *(pt + i);
    }
    printf("%d\n", *pt-1);      // oxirida 1 ga ayirib qoysam tori chidi, shunga qildim
     */


    // H 7      // birinchi bln oxirgi elementlarini almashtirish
    /*
    int a[5] = {1, 2, 3, 4, 5};
    int *pt = a;
    for (int i = 0; i < 5; ++i) {
        printf("%d ", *(pt + i));
    }
    puts("");
    for (int i = 0; i < 5; ++i) {
        if (i == 0) {
            printf("%d ", *(pt + (5-1)));
        }else if (i == 5 - 1) {
            printf("%d ", *(pt));
        }else {
            printf("%d ", *(pt + i));
        }
    }
     */


    // H 8      // arrayi eng kotta bln kichgina elementini almashtirish
    /*
    int a[5] = {3, 5, 2, 1, 4};
    int *pt = a, min = a[0], max = a[0];
    for (int i = 0; i < 5; ++i) {
        printf("%d ", *(pt + i));
    }
    puts("");
    for (int i = 0; i < 5; ++i) {
        if (min > a[i]) min = a[i];
        if (max < a[i]) max = a[i];
    }
    for (int i = 0; i < 5; ++i) {
        if (max == a[i]) printf("%d ", min);
        else if (min == a[i]) printf("%d ", max);
        else printf("%d ", a[i]);
    }
     */


    return 0;
}