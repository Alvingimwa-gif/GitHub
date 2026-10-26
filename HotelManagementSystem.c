/*
Author: Alvin
Reg No: BCS-05-0068/2026
Description: Program to monitor revenue and room occupancy using arrays
Date: 26/10/2026
Version 1
*/
#include <stdio.h>

int main(void){
    int revenue[7]={10000, 20000, 40000, 50000, 70000, 30000, 80000};
    int i;
    int total = 0;
    int average;

    for(int i=0; i<=7; i++){
        printf("Total revenue: %d\n", total);
        total = total + revenue[i];
        average = total/7;
    }
    printf("Revenue average: %d\n", average);
        
    int occupancy[5][10]={
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 0, 1, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 1, 1, 1, 1},
        {0, 0, 1, 1, 0, 0, 0, 0, 0, 1},
        {0, 1, 1, 0, 0, 0, 0, 1, 1, 1}
    };
    
    int j;
    int k;

    for(j=0; j<5; j++){
        for(k=0; k<10; k++){
            printf("Room[%d] Floor[%d]: %d\n", j, k, occupancy[j][k]);
        }
    }
    int chain[3][5][10]={
      {
        {1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,0,0,1,1},
        {0,1,1,0,0,0,0,1,1,0},
        {1,1,1,1,0,0,0,0,0,0},
        {0,0,1,0,1,1,1,0,0,1}
      },
      {
        {1,1,1,1,1,0,0,0,0,1},
        {0,0,1,1,1,1,0,0,0,1},
        {0,1,1,1,1,1,0,0,0,1},
        {1,0,1,1,1,1,0,0,0,0},
        {0,0,0,0,0,0,0,1,1,1}
      },
      {
        {1,1,1,1,1,1,1,1,1,1},
        {0,0,0,0,0,0,1,1,1,1},
        {0,1,1,1,1,0,0,0,0,0},
        {1,1,1,1,1,0,0,0,0,1},
        {0,0,0,0,0,0,1,1,1,1}
      }
    };
    int b;
    int f;
    int r;
    int sumRooms = 0;

    for(b=0; b<3; b++){
        for(f=0; f<5; f++){
            for(r=0; r<10; r++){
                printf("Branch[%d] Floor[%d] Room[%d]: %d\n", b, f, r, chain[b][f][r]);
                sumRooms = sumRooms + chain[b][f][r];
            }
        }
    }
    printf("Total rooms occupied across branches: %d\n", sumRooms);
}
