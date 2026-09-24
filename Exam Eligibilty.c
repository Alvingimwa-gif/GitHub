/*
    Author: Alvin
    Reg Number: BCS-05-0068/2026
    Description: Program to check exam eligibility
    Date: 23/9/2026
    Version 1
*/
#include <stdio.h>
//Attedance >= 75%
//Average marks >= 40
//Print Not elligible
int main(){
    float attendance;
    float average_marks;

    printf("Enter Attendance: ");
    scanf("%f", &attendance );

    printf("Enter Average marks: ");
    scanf("%f", &average_marks);

    if(attendance >= 75 && average_marks >= 40){
        printf("Eligible for exam\n");
    }
    else{
        printf("Not eligible for exam\n");
    }

    return 0;
}