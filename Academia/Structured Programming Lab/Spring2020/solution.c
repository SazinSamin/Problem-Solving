#include<stdio.h>

struct student {
        int id;
        char name[30];
        float cgpa;
        double tution;
};


void collectStudentInfo(struct student students[], int numbers) {
        for(int i=0; i < numbers; i++) {
                printf("Enter student info %d \n", i + 1);
                printf("Enter id: ");
                scanf("%d", &students[i].id);
                printf("Enter name: ");
                scanf("%s", students[i].name);
                printf("Enter cgpa: ");
                scanf("%f", &students[i].cgpa);
                printf("Enter tution: ");
                scanf("%lf", &students[i].tution);
                printf("\n");
        }

}

void printStudentInfo(struct student students[], int numbers) {
        printf("\nStudent info: ");
        for(int i=0; i < numbers; i++) {
                printf("\n\nStudent: %d: \nId: %d\nname: %s\ncgpa: %.2f\ntution: %.2lf", 
                                                i + 1, students[i].id, students[i].name, students[i].cgpa, students[i].tution);
        }
}



int main() {
        int numbers = 10;
        struct student students[numbers];
        collectStudentInfo(students, numbers);
        printStudentInfo(students, numbers);
}
