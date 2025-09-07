#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guessed;
    // Seed the random number generator with current time
    srand(time(0));
    
    // Generate a random number
    int randomNumber = (rand()%100)+1;
    int no_of_guesses =0;

    // printf("Random Number: %d\n", randomNumber);
 printf("guess the number");
 scanf("%d",guessed);
 do{
    
    
    if(guessed>randomNumber)
    { 
        printf("smaller number please!");
    }
    else{
        printf("greater number please!");
    }
 }while(guessed!=randomNumber);
 
 printf("you guessed in %d times",++no_of_guesses);
 
 return 0;
}
