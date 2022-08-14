#include <stdio.h>
#include <stdlib.h>


int main () {
    system ("cls");
    int length = 22;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            usleep(100000);
            if (i == 0 || j == 0 || i == length - 1 || j == length - 1 || i + j == length - 1) {
                printf("\033[0;3%dm", rand() % 7 + 1);
                printf("* ");
            }else {
                printf("  ");
            }
        }
        printf("\n");
        
    }
    printf("\033[0;37m");

    
}