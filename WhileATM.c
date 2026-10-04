/*
Author: Alvin
Reg Number: BCS-05-0068/2026
Description: Program to display balance of ATM until it reaches zero
Date: 4/10/2026
Version 1
*/
#include <stdio.h>

int main(){
    int balance = 2500;//intial balance
    int withdraw;

    while(balance > 0){
        printf("Enter amount to withdraw: ");
        scanf("%d", &withdraw);

        if(withdraw > balance){
            printf("Insufficient balance\n Your current balance is: %d\n", balance);

        } else {
         balance -= withdraw;
         printf("Withdrawal successful\n. Your current balance is: %d\n", balance);
         }
    }

    return 0;
}