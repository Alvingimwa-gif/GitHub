/*
    Author: Alvin
    Reg Number: BCS-05-0068/2026
    Description: Program to purchase data bundles
    Date: 30/9/2026
    Version 1
*/
#include <stdio.h>

int main(){
    int i;
    printf("***************************************\n");
    printf("Data bundles offered:\n");
    printf("***************************************\n");
    printf("1. 100 MB= 50 KES\n");
    printf("2. 500 MB= 200 KES\n");  
    printf("3. 1 GB= 350 KES\n");
    printf("4. 2 GB= 600 KES\n");
    printf("==========================================\n");
    printf("Enter your selection (1-4): ");
    scanf("%d", &i);
    
    switch(i){
        case 1:
            printf("1. 100 MB= 50 KES\n");
            break;
        case 2:
            printf("2. 500 MB= 200 KES\n");
            break;
        case 3:
            printf("3. 1 GB= 350 KES\n");
            break;
        case 4:
            printf("4. 2 GB= 600 KES\n");
            break;
        default:
            printf("Invalid selection\n");
            break;
    }



    return 0;
}