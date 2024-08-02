#include <stdio.h> 

  

void print_max(int x, int y) 

{ 

    int temp; 

  

    if(x > y) 

        temp = x; 

    else 

        temp = y; 

  

    printf("The max number is: %d", temp); 

  

    return; // Not returning anything because function is declared as void 

} 

  

int main(void) 

{ 

    int a, b; 

  

    printf("Enter two integers: "); 

    scanf("%d %d", &a, &b); 

  

    print_max(a,b); 

  

    return 0; 

} 
