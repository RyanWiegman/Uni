#include <stdio.h> 

  

int max3(int x, int y, int z) 

{ 

    int temp; 

  

    if(x > y && x > z) 

        temp = x; 

    else if(y > z) 

        temp = y; 

    else 

        temp = z; 

    return temp; 

} 

  

int main(void) 

{ 

    int a, b, c, result; 

     

    printf("Enter three integers: "); 

    scanf("%d %d %d", &a, &b, &c); 

  

    result = max3(a,b,c); 

  

    printf("The max number is %d", result); 

} 
