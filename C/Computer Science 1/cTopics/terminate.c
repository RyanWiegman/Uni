// Read integers and add them. User enters -1 to terminate. 

#include <stdio.h> 

  

int main(void) 

{ 

    int n = 0, total = 0; 

  

    printf("Enter -1 when finished entering integers.\n"); 

  

    while(n != -1) 

    { 

        printf("Enter integer: "); 

        scanf("%d", &n); 

        // Process legitimate input only 

        if(n != -1) 

            total = total + n; 

    } 

  

    printf("The sum of the integers is: %d", total); 

  

    return 0; 

} 
