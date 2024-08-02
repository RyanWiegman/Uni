#include <stdio.h> 

#include <stdlib.h> 

#include <time.h> 

  

int main(void) 

{ 

    int n = -1, secret, counter = 0; 

    srand(time(0)); 

    secret = rand() % 101; 

  

    printf("There's a secret number from 0-100, can you guess what it is?\n"); 

  

    while(n != secret) 

    { 

        printf("Enter your guess: "); 

        scanf("%d", &n); 

        counter++; 

        if(n > secret) 

            printf("The number is smaller!\n"); 

        else if(n < secret) 

            printf("The number is larger!\n"); 

        else 

            printf("DING DING DING! WINNER WINNER CHICKEN DINNER!\n\n"); 

    } 

  

    printf("It took you %d tries to find out the secret number.\n", counter); 

  

    if(counter <= 5) 

        printf("You've received a GOLD medal!"); 

    else if(counter <= 8) 

        printf("You've received a SILVER medal!"); 

    else if(counter <= 10) 

        printf("You've received a BRONZE medal!"); 

  

    return 0; 
