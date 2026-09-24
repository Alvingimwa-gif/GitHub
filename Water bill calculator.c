/*
    Author: Alvin
    Reg Number: BCS-05-0068/2026
    Description: Program to calculate water bill
    Date: 24/9/2026
    Version 1
*/
#include <stdio.h>
//0-30 = 20 KES
//31-60 = 25 KES
//Above 60 = 30 KES
int main() {
    int units;
    float bill;

    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    if (units <= 30) {
        int unitRate = 20;
        bill = units * unitRate;
        printf("Water bill: %.2f KES\n", bill);
   
    } else if (units <= 60) {
        int unitRate = 25;
        bill = units * unitRate;
        printf("Water bill: %.2f KES\n", bill);

    } else {
        int unitRate = 30;
        bill = units * unitRate;
        printf("Water bill: %.2f KES\n", bill);
    }


    return 0;
}