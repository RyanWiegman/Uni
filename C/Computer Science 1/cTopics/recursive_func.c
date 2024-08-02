#include <stdio.h> 

  

int gcd(int a, int b) 

{ 

    if(a == 0) 

        return b; 

    if(b == 0) 

        return a; 

    if(a == b) 

        return a; 

    if(a > b) 

        return gcd(a - b, b); 

  

    return gcd(a, b - a); 

} 

  

int gcd_2(int a, int b) 

{ 

    if(b == 0) 

        return a; 

    return gcd_2(b, a % b); 

} 

  

int main(void) 

{ 

    int a, b, result_1, result_2; 

  

    printf("Enter two positive integers: "); 

    scanf("%d %d", &a, &b); 

  

    result_1 = gcd(a,b); 

    result_2 = gcd_2(a,b); 

  

    printf("The greatest common factor between the two integers is: %d\n", result_1); 

    printf("We checked again and the gcd really is: %d", result_2); 

  

    return 0; 

} 
