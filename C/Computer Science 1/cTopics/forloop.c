// For-Loop introduction 

// Prints 1, 2, 3, ..., 100 

#include <stdio.h> 

  

int main(void) 

{ 

    int n; 

  

    for(n = 1; n <= 100; n++) 

        printf("%d", n); 

    // And backwards by 2 

    for(n = 100; n >= 0; n -= 2)  // n = n - 2 

        printf("%d", n); 

  

    return 0; 

} 
