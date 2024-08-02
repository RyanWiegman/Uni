// Same as above but using data_size 

#include <stdio.h> 

  

int main(void) 

{ 

    int count = 1, grade, total = 0, data_size; 

    float average; 

  

    printf("How many grades are there?\n"); 

    scanf("%d", &data_size); 

  

    while(count <= data_size) 

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

  

    average = (float)total / data_size; 

  

    printf("The average is: %.2f", average); 

  

    return 0; 

} 
