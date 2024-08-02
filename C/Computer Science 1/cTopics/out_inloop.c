// Outer Loop: prints 1st number of every line 

// Inner Loop: finishes the line 

#include <stdio.h> 

  

int main(void) 

{ 

    int i, j; 

  

    for(i = 0; i <= 90; i += 10) 

    { 

        for(j = i; j <= i + 9; j++) 

            printf("%2d ", j); 

        printf("\n"); 

    } 

  

    return 0; 

} 
