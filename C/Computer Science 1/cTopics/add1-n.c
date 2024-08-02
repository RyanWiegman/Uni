#include <stdio.h> 

  

int sum(int n) 

{ 

    // Invalid Case 

    if(n <= 0) 

        return -1; 

    // Base Case 

    if(n == 1) 

        return 1; 

  

    return n + sum(n - 1); 

} 

  

int main(void) 

{ 

    int n, result; 

  

    printf("Enter integer: "); 

    scanf("%d", &n); 

  

    result = sum(n); 

  

    printf("The sum of all the numbers between 1 and %d is %d.", n, result); 

  

    return 0; 

} 
