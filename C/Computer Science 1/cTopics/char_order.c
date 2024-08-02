#include <stdio.h> 

  

int order_in_alphabet(char ch) 

{ 

    int result; 

  

    // Check validity 

    if(!(ch >= 'a' && ch <= 'z')) 

        return -1; // terminates the fucntion 

  

    result = ch - 'a' + 1; 

  

    return result; 

} 

  

int main(void) 

{ 

    int n; 

    char ch; 

  

    printf("Enter any lowercase letter: "); 

    scanf("%c", &ch); 

  

    n = order_in_alphabet(ch); 

  

    printf("The letter is the %d letter in the alphabet.", n); 

  

    return 0; 

} 
