#include <stdio.h> 

  

void function(int n) 

{ 

 

    n++; 

    printf("Function: %d", n); 

    return; 

} 

  

int main(void) 

{ 

    int a = 4; 

    function(a); 

    printf("Main: %d", a); 

  

    return 0; 

} 
