#include <stdio.h> 

  

int main(void) 

{ 

    int grade, total = 0, counter = 1; 

  

    while(counter <= 10) 

    { 

        printf("%d: Enter grade: ", counter); 

        scanf("%d", &grade); 

  

        if(grade < 0 || grade > 100) 

        { 

            printf("Invalid Input!\n"); 

            continue; 

        } 

        // Process Grade 

        total += grade; 

        counter++; 

    } 

  

    printf("%f", (float) total / 10); 

  

    return 0; 

} 
