#include <stdio.h> 

  

int main(void) 

{ 

    int i, j, n, nstars, nspaces; 

  

    printf("How many lines do you want the pattern to be? "); 

    scanf("%d", &n); 

  

    nstars = n; 

    nspaces = 0; 

  

    for(i = 1; i <= n; i++) 

    { 

        // Spaces 

        for(j = 1; j <= nspaces; j++) 

            printf(" "); 

        // Stars 

        for(j = 1; j <= nstars; j++) 

            printf("*"); 

        printf("\n"); 

        nstars--; nspaces++; 

    } 

  

    return 0; 

} 
