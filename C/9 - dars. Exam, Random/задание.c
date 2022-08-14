#include <stdio.h>

int main () {
    // d 29         внимание плиз!   // 3 ni nechinchi darajasi n dan kichkinaligini chiqarb beradi
    /*              // Если вы введете число выше 81, вы получите 4, потому что уровень 3^4 равен 81.  3^4 <= 81
    int n, k, b = 0;
    scanf("%d", &n);
    for (k = 3; k <= n; k *= 3) {
    }
    for (;k > 3;k /= 3) {
        b++;
    }
    printf("%d\n", b);
     */


    // d 30
    /*
    int a, k = 1, sum = 0;
    scanf("%d", &a);
    for (;a >= k * k; ++k) {
        sum += k;
    }
    printf("%d - kichigi\n", k);
    printf("%d - yigindisi\n", sum);
     */


    // d 31
    /*
    int n, a = 0, b = 1, c, i;
    scanf("%d", &n);
    for (;a < n;) {
        if ( a == n ) {
            break;
        }
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d\n", b - a);
    printf("%d\n", b);
     */

    // d 32
    /*
    int n, temp, bol = 0, num = 0, last_n, nol = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n; ++i) {
        temp = i;
        while (temp > 0) {
            last_n = temp % 10;
            if (last_n == 0) {
                nol = 1;
                break;
            }
            if (i % last_n == 0) {
                bol++;
            }
            temp /= 10;
            num++;
        }
    }
    */

    // d 33         // A dan B gacha bogan tub sonlani chiqarish
    /*
    int a, b, flag, temp;
    printf("2 ta son kiriting: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    printf("%d va %d son orasidegi tub sonlar: ", a, b);
    while (a < b) {
        flag = 0;
        if (a <= 1) {
            ++a;
            continue;
        }
        for (int i = 2; i <= a / 2; ++i) {
            if (a % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", a);
        ++a;
    }
     */

    // d 34     // sonda yonma-yon 2 ta bir xil son bor ili yoqligini aniqlidi
    /*
    int n, a, b, bor = 0;
    scanf("%d", &n);
    for (;n > 0; n /= 10) {
        a = n % 10;
        b = (n / 10) % 10;
        if (a == b) {
            bor++;
        }
    }
    if (bor > 0) {
        printf("Bor\n");
    }else {
        printf("Yoq\n");
    }
     */


    return 0;
}