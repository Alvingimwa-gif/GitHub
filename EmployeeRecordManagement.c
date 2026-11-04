/*
Author: Alvin
Reg Number: BCS-05-0068/2026
Description: Program to manage employee records
Date: 4/11/2026
Version 1
*/
#include <stdio.h>
#include <stdlib.h>

void writeEmployee();
void readEmployee();
void appendEmployee();

int main(){
    writeEmployee();
    readEmployee();
    appendEmployee();
    return 0;
}

void writeEmployee(){
    FILE *fp;
    int idNo;
    char name[100];
    char department[100];

    fp = fopen("C:\\Users\\HomePC\\Documents\\employees.txt", "w");
    if(fp==NULL){
        printf("Error! Could not open");
        exit(1);
    }

    printf("Enter: \n");
    printf("==========================================\n");
    
    printf("ID no: ");
    scanf("%d", &idNo);
    getchar();

    printf("Full Name: ");
    fgets(name, sizeof(name), stdin);
    fputs(name, fp);

    printf("Department: ");
    fgets(department, sizeof(department), stdin);
    fputs(department, fp);
    
}

void readEmployee(){
  FILE *fp;
    int idNo;
    char name[100];
    char department[100];
    int ch;

    fp = fopen("C:\\Users\\HomePC\\Documents\\employees.txt", "r");
    if(fp==NULL){
        printf("Error! Could not open");
        exit(1);
    }
    while((ch = getc(fp)) != EOF){
        putchar(ch);
    }    

    printf("File opened successfully");
}

void appendEmployee(){
 FILE *fp;
    int idNo;
    char name[100];
    char department[100];

    fp = fopen("C:\\Users\\HomePC\\Documents\\employees.txt", "a");
    if(fp==NULL){
        printf("Error! Could not open");
        exit(1);
    }

    printf("Enter: \n");
    printf("==========================================\n");
    
    printf("ID no: ");
    scanf("%d", &idNo);
    getchar();

    printf("Full Name: ");
    fgets(name, sizeof(name), stdin);
    fputs(name, fp);

    printf("Department: ");
    fgets(department, sizeof(department), stdin);
    fputs(department, fp);

}