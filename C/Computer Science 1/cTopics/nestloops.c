// Print 0-99 with 10 numbers a line 

#include <stdio.h> 

  

int main(void) 

{ 

    int n; 

  

    for(n = 0; n <= 99; n++) 

    { 

        printf("%2d ", n); 

        if(n%10 == 9) 

            printf("\n"); 

    } 

  

    return 0; 

} 
