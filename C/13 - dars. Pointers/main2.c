#include <stdio.h>

void pointer (int n) {       // 1
    int *ptr = &n;
    printf("%p\n", ptr);
}

int kvd (int n) {    // 2
    int *pt = &n;
    *pt *= *pt;
    return *pt;
}

int main () {
    // 1
    
    int n = 10;
    pointer(n);
    

    // 2
    /*
    int n;
    scanf("%d", &n);
    printf("%d\n", kvd(n));
    */

    return 0;
}