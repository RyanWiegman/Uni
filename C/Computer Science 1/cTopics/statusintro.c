// Status introduction 

#include <stdio.h> 

  

int main(void) 

{ 

    int n, min, status = 0; 

  

    do 

    { 

        scanf("%d", &n); 

        // Process legitimate input only 

        if(n >= 0) 

        { 

            if(status == 0) 

            { 

                min = n; 

                status = 1; 

            } 

            else 

            { 

                if(n < min) 

                min = n; 

            } 

        } 

    } while(n != -1)); 

  

    return 0; 

} 
