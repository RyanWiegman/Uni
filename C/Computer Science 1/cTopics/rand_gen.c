//doesn't compile
#include <stdio.h> 

#include <stdlib.h> 

  

int main(void) 

{ 

    // n = rand(); // Sets variable to a random number 

    // Gives a random number b/t 0 to RAND_MAX (at least 32767) 

    printf("%d", RAND_MAX); 

  

    // With the same seed, the same random numbers are generated 

    // Set the seed to the time 

    // The computer has been tracking time since January 1, 1970 

    srand(value); // w/o a value, the default seed is 0 

} 
