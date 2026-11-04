/*
Author: Alvin
Reg Number: BCS-05-0068/2026
Description: Program to keep track of book titles boorowed each day
Date: 4/11/2026
Version 1
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char bookTitle[300];

    fp = fopen("C:\\Users\\HomePC\\Desktop\\borrowed_books.txt", "a");
    if(fp == NULL){
        printf("Error! Could not open file");
        exit(1);
    }


    printf("Enter book title: ");
    fgets(bookTitle, sizeof(bookTitle), stdin);

    fprintf(fp, "%s", bookTitle);
    fclose(fp);
    printf("File written successfully");

    return 0;
}

