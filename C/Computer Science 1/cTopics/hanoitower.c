#include <stdio.h> 

  

void Hanoi(int n, char origin, char dest, char temp) 

{ 

    // Base Case 

    if(n == 1) 

    { 

        printf("%c ---> %c\n", origin, dest); 

        return; 

    } 

  

 

    printf("%c ---> %c\n", origin, dest); 

    Hanoi(n - 1, temp, dest, origin); 

  

    return; 

} 

  

int main(void) 

{ 

    int pieces; 

    char a = 'A', b = 'B', c = 'C'; 

  

    printf("How many game pieces do you want to play with? "); 

    scanf("%d", &pieces); 

  

    Hanoi(pieces, a, c, b); 

  

    return 0; 

} 
