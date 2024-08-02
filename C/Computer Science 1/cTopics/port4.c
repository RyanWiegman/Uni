// Nested If-Else Statements Formatting 

#include <stdio.h> 

  

int main(void) 

{ 

    if(codition 1) 

    { 

        code 1; 

        if(condition 2) 

        { 

            code 2; 

        } 

        else{code 3} 

    } 

    else if(condition 4) 

    { 

        code 4; 

        if(condition 5) 

        { 

            code 5; 

        } 

        else{code 6} 

    } 

} 

// Only codes 1, 4, 5 are true 

// --> codes 1, 3 

// Only codes 2, 4, 5 are true 

// --> codes 4, 5 

// Only codes 2, 5 are true 

// --> none 
