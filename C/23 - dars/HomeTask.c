#include <stdio.h>


int main () {
    float num;  float  sum = 0;
    for (int i = 0; i < 3; i++) {
        printf("%d - son: ", i + 1);
        scanf("%f", &num);
        sum+=num-(int)num;
    }
    printf("%d", sum);
    




    return 0;
}