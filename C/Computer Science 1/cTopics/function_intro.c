// Function finds the max of two integers 

#include <stdio.h> 

// int max(int, int); -- Function prototype this is only needed if you declare 

// the function after main 

// I like to declare before main however 

  

int max(int x, int y) 

{ 

    int temp; 

  

    if(x > y) 

        temp = x; 

    else 

        temp = y; 

  

    return temp; 

} 

  

int main(void) 

{ 

    int a, b, result; 

  

    printf("Enter two integers: "); 

    scanf("%d %d", &a, &b); 

  

    result = max(a,b); // This calls the function 

  

    printf("Larger value is: %d", result); 

  

    return 0; 

} 
