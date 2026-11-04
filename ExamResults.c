/*
Author: Alvin
Reg Number: BCS-05-0068/2026
Description: Program to read student records
Date: 4/11/2026
Version 1
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[50];
    char regNo[20];
    int marks;
};
int main(void){
    FILE *fpt;
    struct Student student;

    fpt = fopen("C:\\Users\\HomePC\\Desktop\\results.dat", "rb");
    if (fpt == NULL) {
        printf("Error opening file");
        exit(1);
    }

    printf("Student Results\n");
    printf("------------------------\n");
    
    while(fread(&student, sizeof(struct Student), 1, fpt) == 1) {
        printf("%s\n", student.name);
        printf("%d\n", student.marks);
    }   

    fclose(fpt);
}