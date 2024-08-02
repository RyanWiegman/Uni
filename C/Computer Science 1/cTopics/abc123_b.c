#include <stdio.h> 

  

int main(void) 

{ 

    int a, b, c; 

  

    for(a = 1; a <= 3; a++) 

        for(b = a; b <= 3; b++) 

            for(c = b; c <= 3; c++) 

                printf("%d %d %d\n", a, b, c); 

  

    return 0; 

} 
