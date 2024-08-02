// Add all numbers between 1 and 100 ((n(n+1))/2) 

#include <stdio.h> 

  

int main(void) 

{ 

    int n, total = 0; 

  

    for(n = 0; n <= 100; n++) 

    { 

        total = ((n * (n + 1))/2); 

        printf("%d\n", total); 

    } 

  

    printf("The sum of all numbers between 1 and 100 is: %d", total); 

  

    return 0; 

} 
