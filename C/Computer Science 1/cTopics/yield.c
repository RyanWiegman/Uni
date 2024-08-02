// Print the results until the yield reaches 3000 lbs 

#include <stdio.h> 

  

int main(void) 

{ 

    float yield = 1000; 

    int counter = 1; 

  

    while(yield < 3000) 

    { 

        printf("Year %d: %.2f lbs of fruit\n", counter, yield); 

        counter++; 

        yield *= 1.05; 

    } 

  

    printf("Year %d: %.2f lbs of fruit\n", counter, yield); 

    printf("It took %d years to produce a yield of 3000 lbs.", counter); 

  

    return 0; 

} 
