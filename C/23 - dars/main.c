#include <stdio.h>


int main () {
    char car;
    FILE *fp = fopen("output.txt", "r+");
        while((car = fgetc(fp)) != EOF) {
            fseek(fp , -1, SEEK_CUR);
            fputc(car + 2, fp);
        }
    fclose(fp);





    return 0;
}