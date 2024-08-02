#include <stdio.h> 

  

int main(void) 

{ 

    int i, j, n; 

  

    printf("How many lines do you want the pattern to be? "); 

    scanf("%d", &n); 

  

    for(i = 1; i <= n; i++) 

    { 

        // Spaces 

        for(j = 1; j <= i - 1; j++) 

            printf(" "); 

        // Stars 

        for(j = 1; j <= n + 1 - i; j++) 

            printf("*"); 

        printf("\n"); 

    } 

  

    return 0; 

} 
