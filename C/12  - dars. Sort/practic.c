#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void find_num(int num[], char name[], char sur[], int age[], int n) {
    for (int i = 0; i < 4; ++i) {
        if (n == num[i]) {
            printf("Ismi: %c\nFamiliya: %c\nYoshi: %d\n", name[i], sur[i], age[i]);
            break;
        }
        if (i == 3) {
            printf("Bunday son yo'q\n");
        }
    }
}


int main () {
    int num[4] = {333444459, 337676635, 938108406,  931153336};
    char name[4] = {'M', 'A', 'I', 'Z'};
    char sur[4] = {'N', 'B', 'R', 'S'};
    int age[4] = {22, 23, 16, 17};
    int n;
    scanf("%d", &n);
    find_num(num, name, sur, age, n);


    return 0;
}