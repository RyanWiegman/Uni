// Allignment Formatting 

#include <stdio.h> 

  

int main(void) 

{ 

    int n = 123; 

    float m = 4.56; 

  

    printf("%10d\n", n); // Right Allignment 

    printf("%-10d\n", n); // Left Allignment 

    printf("%10.2f\n", m); // Right Allignment 

    printf("%-10.2f\n", m); // Left Allignment 

  

    return 0; 

} 
