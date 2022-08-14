#include <stdio.h>
#include <stdlib.h>


typedef struct User{
    char fName[20];
    char lName[20];
    int age;
    char profile_education[200];
    char prg_languages[200];
    char work_experience[20];
    char voluntary_activities[200];

}user;


user creatUser () {
    user crUser;
    printf("Please enter the details !\n");
    printf("Name    : ");
    scanf("%s", crUser.fName);
    getchar();
    printf("SurName : ");
    scanf("%s", crUser.lName);
    getchar();
    printf("Age     : ");
    scanf("%d", &crUser.age);
    getchar();
    printf("Educations. Ex: University or the courses you have taken  : ");
    scanf("%[^\n]s", crUser.profile_education); // institut yoki universitet oqigan joylari kiritildai
    getchar();
    printf("Programming languages   : ");
    scanf("%[^\n]s", crUser.prg_languages); // dasturlash tillarini kiritadi
    getchar();
    printf("Work experience     : ");
    scanf("%[^\n]s", crUser.work_experience);   // tajribasini kiritadi
    getchar();
    printf("Enter the projects you have done    : ");
    scanf("%[^\n]s", crUser.voluntary_activities);  // Qigan proyektlari kiritadi
    getchar();
    return crUser;
}



int main () {
    int n;
    printf("How many forms do you want to enter?    : ");
    scanf("%d", &n);   // Nechta anketa toldirish kereligi kiritadi
    user *human = (user*) malloc (n* sizeof(user));
    for (int i = 0; i < n; i++) {
        human[i] = creatUser();
    }
    
    FILE *fp = fopen("Resume.txt", "w");
        for (int i = 0; i < n; i++) {
            fprintf(fp, "%d - person\n", i + 1);
            fprintf(fp, "Name       : %s\n", human[i].fName);
            fprintf(fp, "SurName    : %s\n", human[i].lName);
            fprintf(fp, "Age        : %d\n", human[i].age);
            fprintf(fp, "Educations     : %s\n", human[i].profile_education);
            fprintf(fp, "Programming languages  : %s\n", human[i].prg_languages);
            fprintf(fp, "Work Experience    : %s\n", human[i].work_experience);
            fprintf(fp, "Activity Projects  : %s\n\n", human[i].voluntary_activities);
        }
    fclose(fp);





    return 0;
}