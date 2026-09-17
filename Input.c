 /*
    Author: Alvin
    Reg Number: BCS-05-0068/2026
    Description:Program to input and display user values using C
    Date: 12/9/2026
    Version 1
    */
#include <stdio.h>

int main() {
    float Height;
    double Bank_balance;
    char Phone_number[15];
    printf("Enter Height in Metres: ");
    scanf("%f", &Height);
    printf("Enter Bank balance in Kenyan Shillings: ");
    scanf("%lf", &Bank_balance);
    printf("Enter Phone number: ");
    scanf("%14s", Phone_number);
    printf("You entered: %f\n", Height);
    printf("You entered: %lf\n", Bank_balance);
    printf("You entered: %s\n", Phone_number);
    return 0;
}