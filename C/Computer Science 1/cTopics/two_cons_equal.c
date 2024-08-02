#include <stdio.h> 

#include <stdlib.h> 

#include <time.h> 

#define SIZE 5 

  

int main(void) 

{ 

    int i, result = 0, a[SIZE]; 

    srand(time(0)); 

  

    printf("The array: "); 

  

    for(i = 0; i <= SIZE; i++) 

    { 

        // Fills array with random numbers from 1 - 10 

        a[i] = rand() % 10 + 1; 

        printf("%d ", a[i]); 

    } 

  

    printf("\n"); 

  

    for(i = 0; i <= SIZE - 2; i++) 

        // Decisive Knowledge 

        if(a[i] == a[i + 1]) 

        { 

            result = 1; 

            break; 

        } 

  

    if(result == 1) 

        printf("Two consecutive values in the array were equal."); 

    if(result == 0) 

        printf("There were no consecutive equal values :("); 

  

    return 0; 

} 
