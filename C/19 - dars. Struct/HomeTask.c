#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct user {    // M 1
     char name[20], login[20], password[10];
     int age;
     char country[20];
     char gender[10];
     float height, weight;
     int birth_year;
     char email[20];
     int years_of_experience;
     int children;
}user;


typedef struct Odam {    // M 2
     char fName[20];
     char lName[20];
     int age;
     char jinsi[20];
     char kasbi[20];
     char shahri[20];
     bool oila;
     char millati[20];
     int pas_seriyasi;
     int number;
}human;


human creat_inson() {    // M 2
     human user;
     int t;
     printf("Ism    : ");
     fgets(user.fName, sizeof(user.fName), stdin);
     user.fName[strlen(user.fName) - 1] = '\0';
     printf("Familiya  : ");
     fgets(user.lName, sizeof(user.lName), stdin);
     user.lName[strlen(user.lName) - 1] = '\0';
     printf("Yoshi  : ");
     scanf("%d", &user.age);
     printf("Jinsi  : ");
     scanf("%s", user.jinsi);
     getchar();
     printf("Kasbi  : ");
     fgets(user.kasbi, sizeof(user.kasbi), stdin);
     user.kasbi[strlen(user.kasbi) - 1] = '\0';
     printf("Shahri : ");
     fgets(user.shahri, sizeof(user.shahri), stdin);
     user.shahri[strlen(user.shahri) - 1] = '\0';
     printf("Oilalikmi  | 1: Ha.    2: Yo'q: ");
     scanf("%i", &t);
     user.oila = t;
     printf("Millati  : ");
     scanf("%s", user.millati);
     printf("Passport seria  : ");
     scanf("%d", &user.pas_seriyasi);
     printf("Tel nomer   : ");
     scanf("%d", &user.number);
     return user;
}


void printInfo(human *in) {   // M 2
     printf("Ismi     : %s\n", in->fName);
     printf("Familiya : %s\n", in->lName);
     printf("Yoshi    : %d\n", in->age);
     printf("Jinsi    : %s\n", in->jinsi);
     printf("Kasbi    : %s\n", in->kasbi);
     printf("Shahri   : %s\n", in->shahri);
     if (in->oila) {
     scanf("%s", first.country);
     printf("Gender  : ");;
     }else {
          printf("Oila     : Yo'q\n");
     }
     printf("Millati  : %s\n", HomeTaskin->millati);
     printf("Pas Seria: %d\n", in->pas_seriyasi);
     printf("Tel nomer: %d\n", in->number);
     
}


typedef struct country {      // M 3
     char name[20];
     char language[20];
     char religion[20];
     int population;
     int num_of_cities;
     float area;
     char capital[20];
     char money[20];
     char president[20];
     char continent[20];
}country;


country creat_city() {
     country cit;
     printf("Name  : ");
     scanf("%s", cit.name);



}





int main () {
     // M 1
     /*
     user first;
     printf("Name  : ");
     fgets(first.name, sizeof(first.name), stdin);
     first.name[strlen(first.name) - 1] = '\0';
     printf("Login  : ");
     fgets(first.login, sizeof(first.login), stdin);
     first.login[strlen(first.login) - 1] = '\0';
     printf("Password  : ");
     fgets(first.password, sizeof(first.password), stdin);
     first.password[strlen(first.password) - 1] = '\0';
     printf("Age  : ");
     scanf("%d", &first.age);
     printf("Country  : ");HomeTask
     scanf("%s", first.country);
     printf("Gender  : ");
     scanf("%s", first.gender);
     printf("Height  : ");
     scanf("%f", &first.height);
     printf("Weight  : ");
     scanf("%f", &first.weight);
     printf("Birth year  : ");
     scanf("%d", &first.birth_year);
     printf("Email  : ");
     scanf("%s", first.email);
     printf("Year of Experience  : ");
     scanf("%d", &first.years_of_experience);
     printf("Children  : ");
     scanf("%d", &first.children);

     printf("\nName        : %s\n", first.name);
     printf("Login       : %s\n", first.login);
     printf("Password    : %s\n", first.password);
     printf("Age         : %d\n", first.age);
     printf("Country     : %s\n", first.country);
     printf("Gender      : %s\n", first.gender);
     printf("Height      : %.1f\n", first.height);
     printf("Weight      : %.1f\n", first.weight);
     printf("Birth year  : %d\n", first.birth_year);
     printf("Email       : %s\n", first.email);
     printf("Experience  : %d\n", first.years_of_experience);
     printf("Children    : %d\n", first.children);
     */


     // M 2
     /*
     printf("\nBirinchi shaxs !\n");
     human inson = creat_inson();
     printf("\nIkkinchi shaxs !\n");
     human inson1 = creat_inson();
     printf("\n\n1 - shaxs ma'lumotlari !\n");
     printInfo(&inson);
     printf("\n\n2 - shaxs ma'lumotlari !\n");
     printInfo(&inson1);
     */


     // M 3
     country city = creat_city();






     return 0;
}