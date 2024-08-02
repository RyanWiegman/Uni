#include <stdio.h> 

  

int main(void) 

{ 

    int x; // signed [-2,147,483,648 to 2,147,483,647] 

  

    x = 2147483647; 

    printf("Test 1: %d\n", x); 

  

    x = x + 1; 

    printf("Test 2: %d\n", x); 

  

    return 0; 

} 
