#include <stdio.h> 

#include <stdlib.h> 

#include <time.h> 

  

void roll_a_dice(int param) 

{ 

    int temp; 

    static int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, counter = 0; 

  

    if(param == 0) 

    { 

        temp = rand() % 6 + 1; 

            counter++; 

        if(temp == 1) 

            c1++; 

        else if(temp == 2) 

            c2++; 

        else if(temp = 3) 

            c3++; 

        else if(temp = 4) 

            c4++; 

        else if(temp = 5) 

            c5++; 

        else 

            c6++; 

    } 

} 

  

  

int main(void) 

{ 

    int i; 

  

    srand(time(0)); 

  

    for(i = 1; i <= 1000000; i++) 

    { 

        roll_a_dice(0); 

  

        if(i % 100 == 0) 

            roll_a_dice(1); 

    } 

} 
