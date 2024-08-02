// Do-While Loop introduction 

// Read integers and add them. User enters -1 to terminate. (same as above) 

#include <stdio.h> 

  

int main(void) 

{ 

    int n, total = 0; 

  

    printf("Enter -1 when finished entering integers.\n"); 

  

    do  

    { 

        printf("Enter integer: "); 

        scanf("%d", &n); 

        // Process legitimate input only 

        if(n != -1) 

            total = total + n; 

    } while (n != -1); 

  

    printf("The sum of the integers is: %d", total); 

  

    return 0; 

} 
