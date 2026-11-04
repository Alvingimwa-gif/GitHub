/*
Author: Alvin
Reg Number: BCS-05-0068/2026
Description: Program to read and calculate sales
Date: 28/10/2026
Version 1
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    int sumSales = 0;
    int sales;

    fp = fopen("C:\\Users\\HomePC\\Desktop\\sales.txt", "r");
    if(fp == NULL){
        printf("Error! Could not open file");
        exit(1);
    }

    while(fscanf(fp, "%d", &sales) != EOF){
        sumSales += sales;
    }

    fclose(fp);
    printf("Total sales: %d\n", sumSales);

    return 0;
}