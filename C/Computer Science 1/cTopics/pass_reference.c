#include <stdio.h> 

  

void function(int a[], int size) 

{ 

    int i; 

  

    for(i = 0; i < size; i++) 

    { 

        a[i]++; 

        printf("Function: %d\n", a[i]); 

    } 

    return; 

} 

  

int main(void) 

{ 

    int i, b[3] = {6,7,8}; 

  

    function(b,3); 

    for(i = 0; i < 3; i++) 

        printf("Main: %d\n", b[i]); 

  

    return 0; 

} 
