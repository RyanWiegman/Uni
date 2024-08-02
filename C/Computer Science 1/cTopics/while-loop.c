// Pseudocode Example 

// Algorithm: Perform n%2. If result = 0, n is even 

  

/* 

print(Enter integer) 

scan(integer into n) 

result = n%2 

if(result = 0) 

    print(even) 

else 

    print(odd) 

*/ 

  

//----------------------------------------------------------------------------- 

// While-Loop introduction 

#include <stdio.h> 

  

int main(void) 

{ 

    int n = 1; 

  

    while(n <= 100) // Removing the = will print up to 99 

    { 

        printf("%d ", n); 

        n = n + 1; 

    } 

    return 0; 

} 
