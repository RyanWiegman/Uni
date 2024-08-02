// Approximate Pi -- the more number of terms, the closer to pi 

#include <stdio.h> 

  

int main(void) 

{ 

    int i, nterms, denominator = 1, w = 1; 

    double pi = 0; 

  

    printf("How many terms of pi would you like? "); 

    scanf("%d", &nterms); 

  

    for(i = 1; i <= nterms; i++) 

    { 

        pi += w * ((double) 1 / denominator); 

        denominator += 2; 

        w *= -1; 

    } 

  

    pi *= 4; 

    printf("Pi is %lf", pi); 

  

    return 0; 

} 
