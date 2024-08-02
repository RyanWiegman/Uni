#include <stdio.h> 

  

int main(void) 

{ 

    int x, y, n; 

  

    printf("How many lines do you want the pattern to be? "); 

    scanf("%d", &n); 

  

    for(y = 0; y < n; y++) 

    { 

        for(x = 0; x < n; x++) 

        { 

            if(y >= x) 

                printf("*"); 

            else 

                printf(" "); 

        } 

        printf("\n"); 

    } 

  

    return 0; 

} 
