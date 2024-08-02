 // Playing with floats 

#include <stdio.h> 

  

int main(void) 

{ 

    float x, y, z; 

    x = 2.3458; 

    y = 2.999999999999999999; 

    z = 2.91254875612532698; 

  

    printf("%f\n", x); // 2.345800 

    printf("%.3f\n", x); // 2.346 

    printf("%.20f\n", y); // 3.0000000000... 

    printf("%f\n", z); 

  

    return 0; 

} 
