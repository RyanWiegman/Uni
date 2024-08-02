#include <stdio.h> 

#include <stdlib.h> 

  

int main(void) 

{ 

    int pass = 1234, i = 1, status = 0, n; 

  

    while(i <= 3 && status == 0) 

    { 

        printf("Enter password: "); 

        scanf("%d", &n); 

        if(n == pass) 

        { 

            status = 1; // Or status++; 

        } 

        i++; 

    } 

  

    if(status == 0) 

    { 

        printf("Exiting...."); 

        exit(1); 

    } 

  

    if(status == 1) 

        printf("Welcome :)"); 

  

    return 0; 

} 
