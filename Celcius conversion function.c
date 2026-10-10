/*
Author: Alvin
Reg Number: BCS-05-0068/2026
Description: Program to convert temperature from Fahrenheit to Celsius
Date: 10/10/2026
Version 1
*/
#include <stdio.h>

float convertToCelsius(float F){
    float C;

    C= (F-32)*5/9;

    return C;
}

int main(void){
    float F, C;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);

    C = convertToCelsius(F);

    printf("The temperature in Celsius is: %.2f\n", C);
}