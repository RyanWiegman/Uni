// !(condition 1 && condition 2) => !condition 1 || !condition 2 

// !(condition 1 || condition 2) => !condition 1 && !condition 2 

#include <stdio.h> 

  

int main(void) 

{ 

    int grade; 

  

    printf("Please enter your grade: \n"); 

    scanf("%d", &grade); 

  

    // Check if a grade is valid 

    if(grade >= 0 && grade <= 100) 

        printf("Grade is valid\n"); 

    // Check if a grade is invalid 

    // same as saying: if(grade < 0 || grade > 100) 

    if(!(grade >= 0 && grade <= 100)) 

        printf("Grade is invalid\n"); 

  

    return 0; 

} 
