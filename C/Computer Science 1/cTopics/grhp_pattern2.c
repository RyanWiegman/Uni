#include <stdio.h> 

  

int main(void) 

{ 

    int i, j, n, nstars = 1; 

  

    printf("How many lines do you want the pattern to be? "); 

    scanf("%d", &n); 

  

    for(i = 1; i <= n; i++) 

    { 

        for(j = 1; j <= nstars; j++) 

            printf("*"); 

        printf("\n"); 

        nstars++; 

    } 

  

    return 0; 

} 
