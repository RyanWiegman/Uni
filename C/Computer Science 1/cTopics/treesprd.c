// Trees produce 1000 lbs of fruit in the 1st year 

// Yield grows by 5% annually, print the yield for 7 years 

#include <stdio.h> 

  

int main(void) 

{ 

    int n; 

    float yield = 1000; 

  

    for(n = 1; n <= 7; n++) 

    { 

        printf("Year %d: %.2f lbs of fruit\n", n, yield); 

        yield = yield * 1.05; 

    } 

  

    return 0; 

} 
