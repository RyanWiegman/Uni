// Averaging an integer and a float 

// Also introduction of "casting" 

#include <stdio.h> 

  

int main(void) 

{ 

    int a = 4, b = 5; 

    float n; 

  

    n = (a + b)/2; 

    printf("%f\n", n); // Prints 4.0 

  

    // Using a "cast" 

    n = (float)(a + b)/2; 

    printf("%f\n", n); // Prints 4.5 

  

    n = (a + b)/2.0; 

    printf("%f\n", n); // Prints 4.5 

  

    n = (a + b)/2.0f; 

    printf("%f\n", n); // Prints 4.5 

  

    n = (float)(a + b)/(float)2; 

    printf("%f\n", n); // Prints 4.5 

  

    n = (float)((a + b)/2); 

    printf("%f\n", n); // Prints 4.0 

  

    return 0; 

} 
