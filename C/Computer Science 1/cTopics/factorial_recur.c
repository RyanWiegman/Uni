#include <stdio.h> 

  

int factorial(int n) 

{ 

    // Base Cases 

    if(n == 0 || n == 1) 

        return 1; 

  

    return n * factorial(n - 1); 

} 

  

int main(void) 

{ 

    int a, result; 

  

    printf("Enter any positive number you would like to factorial: "); 

    scanf("%d", &a); 

  

    result = factorial(a); 

  

    printf("The factorial of %d is %d", a, result); 

  

    return 0; 

} 
