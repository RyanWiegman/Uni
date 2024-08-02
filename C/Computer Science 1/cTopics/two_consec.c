#include <stdio.h> 

#define SIZE 5 

  

int main(void) 

{ 

    int i, a[SIZE] = {6,7,8,9,1}; 

  

    for(i = 0; i <= SIZE - 2; i++) 

        printf("%d%d ", a[i], a[i + 1]); 

  

    return 0; 

} 

  
