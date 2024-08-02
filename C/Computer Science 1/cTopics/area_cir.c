// Compute the area of a circle 

#include <stdio.h> 

#include <math.h> 

  

int main(void) 

{ 

    double radius, area; 

  

    printf("Enter the radius of the circle: "); 

    scanf("%lf", &radius); 

    printf("The radius of the circle is: %lf\n", radius); 

  

    area = M_PI * pow(radius, 2); 

  

    printf("The area of the circle is %lf units", area); 

  

    return 0; 

} 
