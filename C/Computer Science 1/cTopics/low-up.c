// Convert lowercase to uppercase 

// Could use some error conditons like if user entered a number 

#include <stdio.h> 

  

int main(void) 

{ 

    char ch; 

  

    printf("..."); 

    scanf("%c", &ch); 

  

    ch = ch - 32; 

    printf("Uppercase %c", ch); 

  

    return 0; 

} 
