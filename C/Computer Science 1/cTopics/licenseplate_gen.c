#include <stdio.h> 

  

int main(void) 

{ 

    int digit_1, digit_2; 

    char letter; 

  

    for(digit_1 = 0; digit_1 <= 9; digit_1++) 

        for(letter = 'A'; letter <= 'F'; letter++) 

            for(digit_2 = 0; digit_2 <= 9; digit_2++) 

                if(!(letter == 'A' && (digit_1 == 4 || digit_2 == 4)) && digit_1 != digit_2) 

                    printf("%d %c %d\n", digit_1, letter, digit_2); 

  

    return 0; 

} 
