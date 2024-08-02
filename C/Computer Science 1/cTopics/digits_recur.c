#include <stdio.h> 

  

void print_reverse(int n) 

{ 

    int digit; 

  

    // Base Case 

    if(n == 0) 

        return; 

  

    digit = n % 10; 

  

    printf("%d ", digit); 

  

    print_reverse(n / 10); 

  

    return; 

} 

  

int main(void) 

{ 

    int a; 

  

    printf("Enter any positive integer: "); 

    scanf("%d", &a); 

  

    print_reverse(a); 

  

    return 0; 

} 
