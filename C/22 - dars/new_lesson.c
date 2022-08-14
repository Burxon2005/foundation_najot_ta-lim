#include <stdio.h>
#include <stdlib.h>


int main () {
    /*
    FILE *in = fopen("seek.txt", "w");
    fprintf(in , "0123456789\n");
    fprintf(in , "abcdef\n");
    fseek(in, 5, SEEK_END);
    fprintf(in, "xyz");
    fseek(in, -6, 1);
    fprintf(in, "987");
    */


    /*
    FILE *in = fopen("seek.txt", "r"), *undosh = fopen ("undosh.txt", "w"), *unli = fopen("unli.txt", "w");
        char c;
        while ((c = fgetc(in)) != EOF) {
            if (c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i') {
                fprintf(unli, "%c ", c);
            }else if (c > 'a' && c <= 'z') {
                fprintf(undosh, "%c ", c);
            }
        }
    fclose(in);
    fclose(undosh);
    fclose(unli);
    */



    int n, sum = 0;  scanf("%d", &n);
    for (; n != 0; n /= 10) {
        printf("%d", n % 10);
    }
    






    return 0;
}