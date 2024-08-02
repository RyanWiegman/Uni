// Check if n is b/t 0 & 10 inclusive 

#include <stdio.h> 

  

int main(void) 

{ 

    int n; 

  

    printf("Please enter a number.\n"); 

    scanf("%d", &n); 

  

    // Check if valid 

    if(n >= 0 && n <= 10) 

        printf("Hey! You entered a valid number!\n"); 

    // Check if invalid 

    if(n < 0 || n > 10) 

        printf("Wo there buddy, that number isn't valid!\n"); 

  

    return 0; 

} 
