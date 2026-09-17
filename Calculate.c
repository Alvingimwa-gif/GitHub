 /*
    Author: Alvin
    Reg Number: BCS-05-0068/2026
    Description:Program to calculate the volume and surface area of a cylinder using C
    Date: 17/9/2026
    Version 1
    */

#include <stdio.h>
#define π 3.14159

int main() {
    float radius, height;
    double volume, surface_area;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    volume = π * radius * radius * height;
    surface_area = 2 * π * radius * radius + 2 * π * radius * height;

    printf("Volume of the cylinder: %.2lf\n", volume);
    printf("Surface area of the cylinder: %.2lf\n", surface_area);

    return 0;
}