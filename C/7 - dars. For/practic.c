#include <stdio.h>

int main ( ) {
    // soat minut sekund topish
    /*
    int n, soat, minut, sekund;
    scanf("%d", &n);
    soat = n / 3600;
    minut = (n / 3600) % 60;
    sekund = (n % 60) % 60;
    printf("%d soat, %d minut, %d sekund\n", soat, minut, sekund);
    */


    int n, soat = 5, minut = 20, sekund = 30;
    for (int i = 0; i < 3; ++i) {
        printf("1 - soat\n");
        printf("2 - minut\n");
        printf("3 - sekund\n");
        scanf("%d", &n);
        switch (n) {
            case 1:
                printf("Soatni kiriting: ");
                int s_plus;
                scanf("%d", &s_plus);
                soat += s_plus;
                if (soat == 24) {
                    soat = 0;
                }else if (soat > 24){
                    soat %= 24;
                }
                printf("%d : %d : %d\n", soat, minut, sekund);
                break;
            case 2:
                printf("Minutni kiriting: ");
                int m_plus;
                scanf("%d", &m_plus);
                minut += m_plus;
                if (minut == 60) {
                    minut = 0;
                    soat++;
                }else if (minut > 60){
                    soat = minut / 60;
                    minut %= 60;
                    if (soat == 24) {
                        soat = 0;
                    }else if (soat > 24) {
                        soat %= 24;
                    }
                }
                printf("%d : %d : %d\n", soat, minut, sekund);
                break;
            case 3:
                printf("Sekundni kiriting: ");
                int c_plus;
                scanf("%d", &c_plus);
                sekund += c_plus;
                if (sekund == 60) {
                    sekund = 0;
                    minut++;
                }else if (sekund > 60){
                    minut = sekund / 60;
                    sekund %= 60;
                    if (minut == 60) {
                        minut = 0;
                        soat++;
                    }else if (minut >= 60) {
                        soat = minut / 60;
                        minut %= 60;
                        if (soat == 24) {
                            soat = 0;
                        }else if (soat >= 24) {
                            soat %= 24;
                        }
                    }
                }
                printf("%d : %d : %d\n", soat, minut, sekund);
        }
    }


    return 0;
}