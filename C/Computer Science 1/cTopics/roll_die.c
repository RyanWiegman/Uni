#include <stdio.h> 

#include <stdlib.h> 

#include <time.h> 

#define N 1000000 

  

int roll_dice() 

{ 

    int temp;  

    temp = rand() % 6 + 1; 

    return temp; 

} 

  

int main(void) 

{ 

    int i, temp, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0; 

  

    srand(time(0)); 

  

    // Roll the dice 

    for(i = 1; i <= N; i++) 

    { 

        temp = roll_dice(); 

        if(temp == 1) 

            c1++; 

        else if(temp == 2) 

            c2++; 

        else if(temp == 3) 

            c3++; 

        else if(temp == 4) 

            c4++; 

        else if(temp == 5) 

            c5++; 

        else 

            c6++; 

    } 

  

    printf("Value 1: %.2lf %%\n", (double) c1/N * 100); 

    printf("Value 2: %.2lf %%\n", (double) c2/N * 100); 

    printf("Value 3: %.2lf %%\n", (double) c3/N * 100); 

    printf("Value 4: %.2lf %%\n", (double) c4/N * 100); 

    printf("Value 5: %.2lf %%\n", (double) c5/N * 100); 

    printf("Value 6: %.2lf %%\n", (double) c6/N * 100); 

  

    return 0; 

} 
