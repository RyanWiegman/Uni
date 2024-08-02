// Is used to compare a variable to multiple constants 

#include <stdio.h> 

  

int main(void) 

{ 

    int rating; 

  

    printf("Please enter the rating of this restaurant\n"); 

    scanf("%d", &rating); 

  

    switch (rating) 

    { 

        case 1: printf("Bad Restaurant\n"); break; 

        case 2: 

        case 3: printf("Average Restaurant\n"); break; 

        case 4: 

        case 5: printf("Great Restaurant\n"); break; 

        default: printf("Invalid Choice\n"); 

    } 

    return 0; 

} 
