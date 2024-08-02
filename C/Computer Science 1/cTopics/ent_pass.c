// Break Introduction 

#include <stdio.h> 

#include <stdlib.h> 

  

int main(void) 

{ 

    int pass = 1234, n, i, status = 0; 

  

    for(i = 1; i <= 3; i++) 

    { 

        printf("Enter password: "); 

        scanf("%d", &n); 

  

        if(n == pass) 

        { 

            status = 1; 

            break; 

        } 

    } 

  

    if(status == 0) 

    { 

        printf("Exiting...."); 

        exit(1); 

    } 

  

    if(status == 1) 

        printf("Welcome"); 

  

    return 0; 

} 
