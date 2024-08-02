// Read 10 grades from the user and find the average (using floats) 

#include <stdio.h> 

  

int main(void) 

{ 

    int count = 1, grade, total = 0; 

    float average; 

  

    while(count <= 10) 

    { 

        printf("Enter grade: "); 

        scanf("%d", &grade); 

        if(grade < 0) 

            printf("Invalid Entry\n\n"); 

        if(grade >= 0) 

        { 

            total = total + grade; 

            count = count + 1; 

        } 

    } 

  

    average = (float)total / 10; 

  

    printf("The average is: %.2f", average); 

  

    return 0; 

} 
