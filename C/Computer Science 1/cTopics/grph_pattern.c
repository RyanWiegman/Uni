// Printing a graphical pattern 

#include <stdio.h> 

  

int main(void) 

{ 

    int i, j, n; 

  

    printf("How many lines do you want the pattern to be? "); 

    scanf("%d", &n); 

  

    for(i = 1; i <= n; i++) 

    { 

        for(j = 1; j <= i; j++) 

            printf("*"); 

        printf("\n"); 

    } 

     

    return 0; 

} 
