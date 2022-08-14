#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(0));

    // J 11
    /*
    int n;
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
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                printf("%-4d", arr[i][j]);
            }
        }
    }
     */

    // J 12
    /*
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for(int i = 0; i < n ; i++){
        for(int j = 0 ; j < n; j++){
            arr[i][j] = rand() % 10 + 1;
            printf("%2d ", arr[i][j]);
        }
        puts("");
    }
    puts("");
    for(int i = 0 ;i < n; i++){
        for(int j = 0 ; j < n ; j++){
            if (n - i - 1 == j ){
                printf("%d ", arr[i][j]);
            }
        }
    }
     */

    // J 13
    /*
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            arr[i][j] = rand() % 100 + 1;
            printf("%-4d", arr[i][j]);
        }
        printf("\n");
    }
    puts("");
    for (int i = 0; i < 3; ++i) {
        printf("%-4d", arr[i][0]);
    }
     */

    // J 14
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

    // J 15
    /*
    int n, m, sum = 0, l = 0;
    printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 20 - 10;
            printf("%-4d", arr[i][j]);
        }
        printf("\n");
    }
    puts("");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i][j] < 0) {
                l++;
                break;
            }
            sum += arr[i][j];
        }
        if (l != 0) {
            break;
        }
    }
    printf("%d \n", sum);
     */

    // J 16
    /*
    int n, m, sum = 0, l = 0;
    printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 20 - 10;
            printf("%-4d", arr[i][j]);
        }
        printf("\n");
    }
    puts("");
    for (int i = n - 1; i > 0; --i) {
        for (int j = n - 1; j > 0; --j) {
            if (arr[i][j] < 0) {
                l++;
                break;
            }
            sum += arr[i][j];
        }
        if (l != 0) {
            break;
        }
    }
    printf("%d \n", sum);
     */

    // J 17
    /*
    int n;
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
        for (int j = 0; j < n; ++j) {
            if (i == 0) {
                printf("%-4d", arr[j][i]);
            }else if (j == 0){
                printf("%-4d", arr[0][i]);
            }else {
                printf("%-4d", arr[i][j]);
            }
        }
        printf("\n");
    }
     */


    // J 18
    /*
    int n;
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
        for (int j = 0; j < n; ++j) {
            printf("%-4d", arr[j][i]);
        }
        printf("\n");
    }
     */

    // J 19
    /*
    int n, mus_c = 0, man_c = 0;
    printf("n = ");
    scanf("%d", &n);
    int arr[n][n], mus[n], man[n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = rand() % 40 - 20;
            printf("%-4d", arr[i][j]);
        }
        printf("\n");
    }
    puts("");
    printf("A = ");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] >= 0) {
                mus[mus_c] = arr[i][j];
                printf("%d ", mus[mus_c]);
                mus_c++;
            }else {
                man[man_c++] = arr[i][j];
            }
        }
    }
    puts("");
    printf("B = ");
    for (int j = 0; j < man_c; ++j) {
        printf("%-4d", man[j]);
    }
     */


    // J 20
    /*
    int n, k = 0;
    printf("n = ");
    scanf("%d", &n);
    int arr[n][n], new_arr[n * n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = rand() % 10 + 1;
            new_arr[k++] = arr[i][j];
            printf("%-4d", arr[i][j]);
        }
        printf("\n");
    }
    puts("");
    printf("Takrorlangan elementlar: ");
    for (int i = 0; i < k; ++i) {
        for (int j = i + 1; j < k; ++j) {
            if (new_arr[i] == new_arr[j]) {
                printf("%-3d", new_arr[j]);
            }
        }
    }
     */


    // J 21

    int n, count = 0;
    scanf("%d", &n);
    int arr[n][n], new_arr[n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = rand() % 10 + 1;
            printf("%-4d", arr[i][j]);
        }
        printf("\n");
    }
    puts("");
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (arr[i][j] != arr[i][k]) {
                    new_arr[count++] = arr[i][j];
                }
            }
        }
    }
    for (int i = 0; i < count; ++i) {
        printf("%d ", new_arr[i]);
    }



    return 0;
}