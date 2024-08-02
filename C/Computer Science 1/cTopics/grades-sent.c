// Same as above but using a sentinel 

#include <stdio.h> 

  

int main(void) 

{ 

    int grade = 0, total = 0, count = 0; 

    float average; 

  

    printf("Enter -1 when finished entering grades.\n"); 

  

    while(grade != -1) // -1 is sentinel value 

    { 

        printf("Enter grade: "); 

        scanf("%d", &grade); 

        // Process legitimate input only 

        if(grade >= 0 && grade <= 100) 

        { 

            total = total + grade; 

            count = count + 1; 

        } 

        else if(grade != -1) 

            printf("Invalid Entry\n\n"); 

    } 

    if(count == 0) 

        printf("No grades were entered!"); 

    else 

    { 

        average = (float)total / count; 

        printf("The average is: %.2f", average); 

    } 

    return 0; 

} 
