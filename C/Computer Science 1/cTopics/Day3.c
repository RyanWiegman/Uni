// Read an integer and check how many criteria it meets 

// Positive, multiple of 2 and multiple of 3 

#include <stdio.h>



int main(void) {

    int n;



    printf("Enter an integer: \n");

    scanf("%d", &n);


    if(n > 0)

        printf("Integer is positive\n");

    if(n%2 == 0)

        printf("Integer is even\n");

    if(n%3 == 0)

        printf("Integer is odd\n"); 



    return 0; 

} 


