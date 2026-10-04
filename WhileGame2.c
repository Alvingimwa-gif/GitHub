/*
Author: Alvin
Reg Number: BCS-05-0068/2026
Description: Program to play a guessing game using while loop
Date: 4/10/2026
Version 2
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getGuess(void){
    int guess;

    printf("Guess the number between 1 and 20: ");
    scanf("%d", &guess);
    while(guess < 1 || guess > 20){
        printf("Invalid guess. Enter a number between 1 and 20: ");
        scanf("%d", &guess);
    }

    return guess;
}

int main(){
    srand((unsigned int)time(NULL));
    int number = rand() % 20 + 1;
    int guess = getGuess();
    int guesses = 0;

    while(guess != number){
      
        if(guess < number){
            printf("Too Low!\n");
            guess = getGuess();
            guesses++;

        } else if(guess > number){
            printf("Too High!\n");
            guess = getGuess();
            guesses++;
        }
    }

    printf("Congratulations!\n");
    guesses++; 
    printf("You guessed the correct number in %d tries\n", guesses);
    
    return 0;
}