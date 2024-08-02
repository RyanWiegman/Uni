// Generate 20 random numbers b/t 0 and 10 inclusive 

#include <stdio.h> 

#include <stdlib.h> 

#include <time.h> 

  

int main(void) 

{ 

    srand(time(0)); // set seed to time 

    int n, temp; 

  

    for(n = 1; n <= 20; n++) 

    { 

        temp = rand() % 11; 

        printf("%d\n", temp); 

    } 

  

    return 0; 

} 
