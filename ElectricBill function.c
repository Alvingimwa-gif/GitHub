/*
Author: Alvin
Reg number: BCS-05-0068/2026
Description: Program to calculate the electric bill based on units consumed
Date: 10/10/2026
Version 1
*/
#include <stdio.h>

int calculateElectricBill(int units){
//first 100 units = Ksh 10 per unit
//next 100 units = Ksh 15 per unit
//above 200 units = Ksh 20 per unit
    int bill = 0;

    if( units <= 100) {
        bill = units * 10;
    } else if( units >100 && units <= 200){
        bill = units * 15;
    } else {
        bill = units * 20;

        return bill;
    }
}

void main(){
    int units;
    int bill;
    
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    bill = calculateElectricBill(units);
    printf( "Your total bill is: Ksh %d\n", bill);
}