/*
Author: Alvin
Reg Number: BCS-05-0068/2026
Description: Program to manage supermarket products
Date: 11/11/2026
Version 1
*/

#include <stdio.h>
#include <string.h>

struct Product{
int productCode;
char name[20];
float unitPrice;
int quantity;
};

int main(){
    float totalValue;
    struct Product product1;

    product1.productCode = 00001;
    strcpy(product1.name, "Mug cake");
    product1.unitPrice = 80;
    product1.quantity = 20;

    totalValue = product1.unitPrice * product1.quantity;

    printf("Product code: %d\n", product1.productCode);
    printf("Product name: %s\n", product1.name);
    printf("Price per unit: %.2f\n", product1.unitPrice);
    printf("Quantity in stock: %d\n", product1.quantity);
    printf("Total value: %.2f\n", totalValue);
    return 0;
}
