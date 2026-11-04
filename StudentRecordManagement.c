/*
Author: Alvin
Reg Number: BCS-05-0068/2026
Description: Program to manage student records
Date: 4/11/2026
Version 1
*/
#include <stdio.h>
#include <stdlib.h>
void saveStudent();
void displayStudents();
void addStudent();

int main(){
  saveStudent();
  displayStudents();
  addStudent();
  displayStudents();
    return 0;
}

void saveStudent(){
    FILE *fpt;
    char admNO[100];
    char name[100];
    char course[100];

    fpt = fopen("C:\\Users\\HomePC\\Documents\\students.txt", "w");
    if(fpt == NULL){
        printf("Error! Couldn't open file");
        exit(1);
    }
    printf("Enter: \n");
    printf("--------------------------\n");
    
    printf("Admission No: ");
    fgets(admNO, sizeof(admNO), stdin);
    fputs(admNO, fpt);
    
    printf("Full Name: ");
    fgets(name, sizeof(name), stdin);
    fputs(name, fpt);

    printf("Course Name: ");
    fgets(course, sizeof(course), stdin);
    fputs(course, fpt);

}

void displayStudents(){
     FILE *fpt;
    char admNO[100];
    char name[100];
    char course[100];
    int ch;

    fpt = fopen("C:\\Users\\HomePC\\Documents\\students.txt", "r");
    if(fpt == NULL){
        printf("Error! Couldn't open file");
        exit(1);
    }
     while((ch = getc(fpt)) != EOF){
     putchar(ch);
     }
    
     printf("File opened successfully\n");

}

void addStudent(){
      FILE *fpt;
    char admNO[100];
    char name[100];
    char course[100];

    fpt = fopen("C:\\Users\\HomePC\\Documents\\students.txt", "a");
    if(fpt == NULL){
        printf("Error! Couldn't open file");
        exit(1);
    }
    printf("Enter: \n");
    printf("--------------------------\n");
    
    printf("Admission No: ");
    fgets(admNO, sizeof(admNO), stdin);
    fputs(admNO, fpt);
    
    printf("Full Name: ");
    fgets(name, sizeof(name), stdin);
    fputs(name, fpt);

    printf("Course Name: ");
    fgets(course, sizeof(course), stdin);
    fputs(course, fpt);

}