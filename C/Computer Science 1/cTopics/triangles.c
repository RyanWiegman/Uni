#include <stdio.h> 

  

int main(void) 

{ 

    int a, b, h; 

  

    for(a = 1; a <= 100; a++) 

        for(b = a; b <= 100; b++) 

            for(h = b; h <= 100; h++) 

                if(h * h == a * a + b * b) 

                    printf("%d %d %d\n", a, b, h); 

  

    return 0; 

} 
