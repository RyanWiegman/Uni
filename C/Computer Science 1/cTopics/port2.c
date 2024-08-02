// Check if the user password is correct (3 valid passwords) 

#include <stdio.h> 

#include <stdlib.h> 

  

int main(void) 

{ 

    int n, x = 1234, y = 3211, z = 6969; 

  

    printf("Please enter your 4 digit password: \n"); 

    scanf("%d", &n); 

  

    if(n == x || n == y || n == z) 

    { 

        printf("Correct Password\n"); 

            printf("Exiting...\n"); 

            exit(0); // shuts down the program 

    } 

    else 

    { 

        printf("Incorrect Password\n"); 

    } 

    return 0; 

} 
