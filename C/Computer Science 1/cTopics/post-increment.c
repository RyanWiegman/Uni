// Post-Increment Example 

#include <stdio.h> 

  

int main(void) 

{ 

    int a = 2, b = 4; 

  

    a = a + (b++); 

    // a = 2 + 4 = 6 

    // b = 4++ = 5 

    printf("%d %d", a, b); 

  

    return 0; 

} 
