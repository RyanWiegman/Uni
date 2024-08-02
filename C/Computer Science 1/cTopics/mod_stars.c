// Modify lines of stars to be able to have any width and height 

#include <stdio.h> 

  

int main(void) 

{ 

    int a, b, height, width; 

  

    printf("Enter the height you want: "); 

    scanf("%d", &height); 

    printf("Enter the width you want: "); 

    scanf("%d", &width); 

    printf("\n"); 

  

    for(a = 1; a <= height; a++) 

    { 

        for(b = 1; b <= width; b++) 

            printf("*"); 

        printf("\n"); 

    } 

  

    return 0; 

} 
