#include <stdio.h> 

#define SIZE 4 

  

int main(void) 

{ 

    int i, j, a[SIZE] = {6,7,8,9}; 

  

    for(i = 0; i < SIZE; i++) 

    { 

        for(j = i; j < SIZE; j++) 

            printf("%d%d ", a[i], a[j]); 

    printf("\n"); 

    } 

  

    return 0; 

} 


