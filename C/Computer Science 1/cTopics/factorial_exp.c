// Factorial Expressions 

// n! = n * (n-1) * (n-2) * (n-3) * ... * 3 * 2 * 1 

// 0! = 1, 15! = 1.3 trillion 

#include <stdio.h> 

  

int main(void) 

{ 

    unsigned long long int n, i, result = 1; 

  

    printf("Enter any number for a factorial: "); 

    scanf("%llu", &n); 

  

    for(i = 1; i <= n; i++) 

        result *= i; 

  

    printf("The factorial of %llu is %llu", n, result); 

  

    return 0; 

} 
