// Read a phone area code and print the city that it belongs to 

#include <stdio.h> 

  

int main(void) 

{ 

    int code; 

  

    printf("Enter an area code: \n"); 

    scanf("%d", &code); 

  

    if(code == 407) 

        printf("Orlando\n"); 

    else if(code == 305) 

        printf("Miami\n"); 

    else if(code == 904) 

        printf("Jacksonville\n"); 

    if(code |= 407 || 305 || 904) 

        printf("CITY UNKNOWN\n"); 

  

    return 0; 

} 
