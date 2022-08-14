#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    // J 1
    /*
    int n, sum = 0;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = rand() % 100 + 1;
            printf("%-4d", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += arr[i][j];
        }
    }
    printf("%d", sum);
     */

    // J 2
    /*
    int arr[3][4];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            arr[i][j] = rand() % 100 + 1;
            printf("%-4d", arr[i][j]);
        }
        printf("\n");
    }
    puts("");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (i % 2 != 0) {
                printf("%-4d", arr[i][j]);
            }
        }
        puts("");
    }
     */

    // J 3
    /*
    int arr[7][4];
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 4; ++j) {
            arr[i][j] = rand() % 100 + 1;
            printf("%-4d", arr[i][j]);
        }
        printf("\n");
    }
    puts("");
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (j % 2 != 0) {
                printf("%-4d", arr[i][j]);
            }
        }
        puts("");
    }
     */

    // J 4
    /*
    int n, m;
    printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 100 + 1;
            printf("%-4d", arr[i][j]);
        }
        printf("\n");
    }
    puts("");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%-4d", arr[j][i]);
        }
        printf("\n");
    }
     */
    
    // J 5
    /*
    int arr[3][4];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            arr[i][j] = rand() % 100 + 1;
            printf("%-4d", arr[i][j]);
        }
        printf("\n");
    }
    puts("");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%-4d", arr[0][j]);
        }
        break;
    }
     */

    // J 6
    /*
    int n, sum = 0;
    printf("n = ");
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = rand() % 10 + 1;
            printf("%-4d", arr[i][j]);
        }
        printf("\n");
    }
    puts("");
    for (int i = 0; i < n; ++i) {
        sum = 0;
        for (int j = 0; j < n; ++j) {
            sum += arr[i][j];
        }
        printf("%d - qator yigindisi = %d ", i, sum);
        puts("");
    }
     */


    // J 7
    /*
    int n, sum = 0;
    printf("n = ");
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = rand() % 10 + 1;
            printf("%-4d", arr[i][j]);
        }
        printf("\n");
    }
    puts("");
    for (int i = 0; i < n; ++i) {
        sum = 0;
        for (int j = 0; j < n; ++j) {
            sum += arr[j][i];
        }
        printf("%d - ustun yigindisi = %d ", i, sum);
        puts("");
    }
     */


    // J 8
    /*
    int n, max = 0;
    printf("n = ");
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = rand() % 100 + 1;
            printf("%-4d", arr[i][j]);
        }
        printf("\n");
    }
    puts("");
    for (int i = 0; i < n; ++i) {
        max = arr[i][0];
        for (int j = 0; j < n; ++j) {
            if (max < arr[i][j]) {
                max = arr[i][j];
            }
        }
        printf("%d - ustun kottasi = %d ", i, max);
        puts("");
    }
     */

    // J 9
    /*
    int n, max = 0;
    printf("n = ");
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = rand() % 100 + 1;
            printf("%-4d", arr[i][j]);
        }
        printf("\n");
    }
    puts("");
    for (int i = 0; i < n; ++i) {
        max = arr[0][i];
        for (int j = 0; j < n; ++j) {
            if (max < arr[j][i]) {
                max = arr[j][i];
            }
        }
        printf("%d - ustun kottasi = %d ", i, max);
        puts("");
    }
     */

    // J 10
    /*
    int n, qator, ustun, obshi;
    scanf("%d", &n);
    int arr[n][n];
    for(qator = 0; qator < n; qator++) {
        for(ustun = 0; ustun < n; ustun++) {
            arr[qator][ustun] = rand() % 10 + 1;
            printf("%-4d", arr[qator][ustun]);
        }
        printf("\n");
    }
    printf("\n");

        for(qator = 0; qator < n; qator++) {
            obshi = arr[qator][qator];
            arr[qator][qator] = arr[qator][n - qator - 1];
            arr[qator][n - qator - 1] = obshi;
        }
        puts("");
        for(qator = 0; qator < n; qator++) {
            for(ustun = 0; ustun < n; ustun++) {
                printf("%-4d", arr[qator][ustun]);
            }
            printf("\n");
        }
    }
    */


    return 0;
}