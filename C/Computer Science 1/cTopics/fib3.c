#include <stdio.h> 

  

int fib_term(int n, int small, int large) 

{ 

    // Base Case 

    if(n == 1) 

        return small; 

  

    return fib_term(n - 1, large, small + large); 

} 

  

int main(void) 

{ 

    int n, result; 

  

    printf("Enter the term you would like to start from: "); 

    scanf("%d", &n); 

  

    result = fib_term(n,0,1); 

  

    printf("%d", result); 

} 
