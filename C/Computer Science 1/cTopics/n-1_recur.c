#include <stdio.h> 

  

void print(int n) 

{ 

    // Base Case 

    if(n == 0) 

        return; 

  

    printf("%d ", n); 

  

    print(n - 1); 

  

    return; 

} 

  

int main(void) 

{ 

    int a; 

  

    printf("Enter any positive value: "); 

    scanf("%d", &a); 

  

    print(a); 

  

    return 0; 

} 
