#include <stdio.h> 

  

double power(double a, double b) 

{ 

    if(b < 0) 

        return 1 / power(a, -b); 

    // Base Case 

    if(b == 0) 

        return 1; 

  

    return a * power(a, b - 1); 

} 

  

int main(void) 

{ 

    double base, exp, result; 

  

    printf("Enter base: "); 

    scanf("%lf", &base); 

    printf("Enter exponent: "); 

    scanf("%lf", &exp); 

  

    result = power(base, exp); 

  

    printf("The answer is %lf", result); 

  

    return 0; 

} 
