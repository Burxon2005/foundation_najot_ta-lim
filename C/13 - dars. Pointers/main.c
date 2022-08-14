#include <stdio.h>

int main() {
//    int a = 10;
//    int *ptr = &a;
//    printf("a ni adresi = %p\na ni qiymati = %d\n", &a, a);
//    printf("ptr ni adresi = %p\nptr ni qiymati = %p\nptr ni qiymatini ichidagi qiymati = %d\n", &ptr, ptr, *ptr);
//
//    a = 100;
//    puts("\n");
//    printf("a ni adresi = %p\na ni qiymati = %d\n", &a, a);
//    printf("ptr ni adresi = %p\nptr ni qiymati = %p\nptr ni qiymatini ichidagi qiymati = %d\n", &ptr, ptr, *ptr);
//
//    *ptr = -100;
//    puts("\n");
//    printf("a ni adresi = %p\na ni qiymati = %d\n", &a, a);
//    printf("ptr ni adresi = %p\nptr ni qiymati = %p\nptr ni qiymatini ichidagi qiymati = %d\n", &ptr, ptr, *ptr);


    int a = 10, b = 20;
    printf("a = %d, b = %d\n", a, b);
    int *p = &a;
    *p--;
    *p = a;
    a = b;
    b = *p;
    printf("a = %d, b = %d\n", a, b);



    return 0;
}
