#include <stdio.h> 

#define SIZE 4 

  

int main(void) 

{ 

    int i, result = 1, a[SIZE], b[SIZE]; 

  

    // Loop over arrays 

    for(i = 0; i < SIZE; i++) 

    { 

        // Decisive Knowledge 

        if(a[i] != b[i]) 

        { 

            result = 0; 

            break; // code would still work the same if we got rid of this break 

        } 

    } 

} 
