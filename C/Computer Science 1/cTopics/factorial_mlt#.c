#include <stdio.h> 

  

int main(void) 

{ 

    long long int n = 0, i, result; 

  

    while(n != -1) 

    { 

        printf("Enter integer: "); 

        scanf("%lld", &n); 

        // Process legitimate input 

        if(n >= 0) 

        { 

            result = 1; 

            for(i = 1; i <= n; i++) 

                result *= i; 

            printf("The factorial of %lld is %lld\n\n", n, result); 

        } 

        else if(n <= -2) 

            printf("Invalid Input!\n\n"); 

    } 

  

    return 0; 

} 
