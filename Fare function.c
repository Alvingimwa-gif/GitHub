/*
Author: Alvin
Reg Number: BCS-05-0068/2026
Description: Program to calculate fare based on distance traveled
Date: 10/10/2026
Version 1
*/
#include <stdio.h>

int calculateFare(float distance){
    int fare;

    fare = distance * 50;

    return fare;
}

int main(){
    float distance;
    int fare;

    printf("Enter distance traveled in kilometers: ");
    scanf("%f", &distance);

    fare = calculateFare(distance);

    printf("The total fare is: Ksh %d\n", fare);

    return 0;
}