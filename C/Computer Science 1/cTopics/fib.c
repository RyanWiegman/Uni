#include <stdio.h> 

  

int fib_term(int n) 

{ 

    // Base Case 

    if(n == 1) 

        return 0; 

    if(n == 2) 

        return 1; 

  

    return fib_term(n - 1) + fib_term(n - 2); 

} 

  

int main(void) 

{ 

    int i, a, result; 

  

    printf("This code produces a Fibonacci sequence.\n"); 

    printf("Enter the number you would like to start from: "); 

    scanf("%d", &a); 

  

    for(i = 0; i <= a; i++) 

    { 

        result = fib_term(a); 

        printf("%d", result); 

    } 

  

    //result = fib_term(a); 

  

    //printf("%d", result); 

  

    return 0; 

} 
