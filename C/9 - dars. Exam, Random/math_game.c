#include <stdio.h>       // matematik o'yin
#include <stdlib.h>
#include <time.h>

int main () {
    printf("Welcome !\n");
    int a,try = 2, question_e = 1, question_m = 1, f_rand, sc_rand, p = 5, q = 5, true_e = 0, false_e = 0, true_m = 0, false_m = 0;
    while (try > 0) {
        start_game:
        printf("Select a level \n");
        printf("1 - Easy\n");
        printf("2 - Medium\n");
        scanf("%d", &a);
        switch (a) {
            case 1:
                while (p > 0) {
                    srand(time(0));
                    f_rand = rand() % 10 ;
                    sc_rand = rand() % 10;
                    printf("%d - question: ", question_e);
                    printf("%d + %d = ", f_rand, sc_rand);
                    int answer;
                    scanf("%d", &answer);
                    if (answer == f_rand + sc_rand) {
                        printf("True\n");
                        true_e++;
                    } else if (answer != f_rand + sc_rand){
                        printf("False\n");
                        false_e++;
                    }
                    question_e++;
                    p--;
                }
                printf("%d - right, %d - wrong\n", true_e, false_e);
                goto start_game;
            case 2:
                while (q > 0) {
                    srand(time(0));
                    f_rand = rand() % 100;
                    sc_rand = rand() % 100;
                    printf("%d - question: ", question_m);
                    printf("%d + %d = ", f_rand, sc_rand);
                    int answer;
                    scanf("%d", &answer);
                    if (answer == f_rand + sc_rand) {
                        printf("True\n");
                        true_m++;
                    } else if (answer != f_rand + sc_rand){
                        printf("False\n");
                        false_m++;
                    }
                    question_m++;
                    q--;
                }
                printf("%d right, %d wrong\n", true_m, false_m);
        }
        try--;
    }


    return 0;
}