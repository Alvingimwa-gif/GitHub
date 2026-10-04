/*
Author: Alvin
Reg Number: BCS-05-0068/2026
Description: Program to check password using do-while loop
Date: 4/10/2026
Version 1
*/
#include <stdio.h>

int main() {
    int password;
    int correct_password = 1234;

    do {
        printf("Enter password: ");
        scanf("%d", &password);
        

        if (password != correct_password) {
            printf("Access Denied.\n");
        } else {
            printf("Access Granted.\n");
        }
    } while (password != correct_password);



    return 0;
}
