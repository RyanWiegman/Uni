// Backspace -- moves cursor to the left w/o deleting anything 

#include <stdio.h> 

  

int main(void) 

{ 

    printf("12345");  // 12345 

    printf("\b\b\b"); // move left 3 times 

    printf("x");      // 12x45 

  

    return 0; 

} 
