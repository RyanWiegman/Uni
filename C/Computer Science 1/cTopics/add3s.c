#include <stdio.h> 

  

int main(void) 

{ 

    int n, total = 0; 

  

    for(n = 0; n <= 100; n += 3) 

    { 

        total = total + n; 

        printf("%d\n", total); 

    } 

  

    return 0; 

} 
