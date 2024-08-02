// Printing a table 

#include <stdio.h> 

  

int main(void) 

{ 

    printf("%10s%15s%15s\n", "Value A", "Value B", "Value C"); // s means string 

  

    for(n = 1; n <= 1000; n *= 10) 

        printf("%10d%15d%15d\n", n, n + 1, n + 2); 

  

    return 0; 

} 
