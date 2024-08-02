#include <stdio.h> 

  

int main(void) 

{ 

 

    int i, n, counter, total_1 = 0, total_2 = 0, total_3 = 0; 

  

    printf("Enter -1 when finished.\n\n"); 

    // Loop over people (Person i) 

    for(i = 1; i <= 3; i++) 

    { 

        printf("Person %d\n\n", i); 

        counter = 1, n = 0; 

        while(n != -1) 

        { 

            printf("Pies on day %d: ", counter); 

            scanf("%d", &n); 

            // Process legitimate inputs 

            if(n >= 0) 

            { 

                if(i == 1) 

                    total_1 += n; 

                else if(i == 2) 

                    total_2 += n; 

                else 

                    total_3 += n; 

                counter++; 

            } 

        } 

        printf("\n"); 

    } 

  

    printf("Total of Person 1: %d pies\n", total_1); 

    printf("Total of Person 2: %d pies\n", total_2); 

    printf("Total of Person 3: %d pies\n", total_3); 

    printf("The grand total of pies made is: %d\n", total_1 + total_2 + total_3); 

  

    return 0; 

} 
