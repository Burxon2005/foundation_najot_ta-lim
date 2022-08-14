#include <stdio.h>

int main () {
    // d 1
    /*          Fibonacci son
    int n, a, fib_1 = 0, fib_2 = 1;
    int fib_3 = fib_1 + fib_2;
    printf("Son kiriting: ");
    scanf("%d", &n);
    for (int i = 3; i <= n; ++i) {
        a = fib_3;
        fib_1 = fib_2;
        fib_2 = fib_3;
        fib_3 = fib_1 + fib_2;
    }
    printf("%d\n", a);
    */

    // d 2
    /*
    int a , b;
    scanf("%d %d" , &a, &b);
    if (a < b) {
        for (a; a <= b; a++) {
            printf("%d\n", a);
        }
    }else if (a > b){
        for (b; b <= a ; ++b) {
            printf("%d\n", b);
        }
    }else {
        printf("Bu sonlar teng\n");
    }
    */

    // d 3
    /*
    for (int i = 45; i < 120; ++i) {
        if (i % 18 == 0) {
            printf("%d\n", i);
        }
    }
     */

    // d 4
    /*
    int a;
    scanf("%d", &a);
    for (int i = a; i <= a * 2; ++i) {
        printf("%d\n", i);
    }
     */

    // d 5
    /*
    int sum = 0;
    for (int i = 34; i <= 88; ++i) {
        if (i % 7 == 0 && i % 2 == 0) {
            sum += i;
        }
    }
    printf("%d\n", sum);
    */

    // d 6
    /*
    int n, max = 0;
    scanf("%d", &n);
    for (int i = 0; n > 0; n /= 10) {
        i = n % 10;
        if (max < i) {
            max = i;
        }
    }
    printf("%d\n", max);
     */

    // d 7
    /*
    int n, a, sum = 0;
    scanf("%d", &n);
    a = n;
    for (; n > 0; n /= 10) {
        sum += n % 10;
    }
    a %= sum;
    printf("%d\n", a);
    */

    // d 8
    /*
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("* ");
        }
        printf("\n");
    }
     */


    // d 9
    /*
    int n, zero = 0, one = 0, two = 0, three = 0, four = 0, fife = 0, six = 0, seven = 0, eight = 0, nine = 0;
    scanf("%d", &n);
    for (int i = 0; n > 0 ; n /= 10) {
        i = n % 10;
        if (i == 0) {
            zero++;
        }else if(i == 1) {
            one++;
        }else if(i == 2) {
            two++;
        } else if(i == 3) {
            three++;
        }else if (i == 4) {
            four++;
        }else if (i == 5) {
            fife++;
        }else if (i == 6) {
            six++;
        }else if (i == 7) {
            seven++;
        }else if (i == 8) {
            eight++;
        }else if (i == 9) {
            nine++;
        }
    }
    printf("Zero = %d\n", zero);
    printf("One = %d\n", one);
    printf("Two = %d\n", two);
    printf("Three = %d\n", three);
    printf("Four = %d\n", four);
    printf("Fife = %d\n", fife);
    printf("Six = %d\n", six);
    printf("Seven = %d\n", seven);
    printf("Eight = %d\n", eight);
    printf("Nine = %d\n", nine);
     */

    // d 10
    /*
    int n, rev = 0;
    scanf("%d", &n);
    for (; n > 0; n /= 10) {
        rev = rev * 10 + n % 10;
    }
    n = rev;
    for (int i = 0; n > 0; n /= 10) {
        i = n % 10;
        if (i == 0) {
            printf("Zero ");
        }else if(i == 1) {
            printf("One ");
        }else if(i == 2) {
            printf("Two ");
        } else if(i == 3) {
            printf("Three ");
        }else if (i == 4) {
            printf("Four ");
        }else if (i == 5) {
            printf("Fife ");
        }else if (i == 6) {
            printf("Six ");
        }else if (i == 7) {
            printf("Seven ");
        }else if (i == 8) {
            printf("Eight ");
        }else if (i == 9) {
            printf("Nine ");
        }
    }
     */

    // d 11     Boshidigi va oxirdigi sonlani teskari chiqazish
    /*
    int a , first , last, n = 1 , b ;
    printf("Sonni kiriting: ");
    scanf("%d", &a);
    b = a;
    last = a % 10;
    for(;a > 0;) {
        first = a % 10;
        if (a > 0 && a <= 9) {
            first = a;
        }
        a = a / 10;
        n = n * 10;
    }
    n = n / 10;
    b = (b - last);
    b = (b + first);
    b = b - (first * n);
    b = b + (last * n);
    printf("%d", b );
    */


    // d 12
    /*
    int n, l;
    printf("3 xonali son kiriting: ");
    scanf("%d", &n);
    l = n % 10;
    for (; n > 9; n /= 10) {
    }
    if (l == n) {
        printf("Palindrome\n");
    }else {
        printf("Not Palindrome\n");
    }
     */

    return 0;
}