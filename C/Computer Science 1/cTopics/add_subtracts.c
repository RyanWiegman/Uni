float add_sub(char op, float x, float y) 

{ 

    float result; 

  

    if(op == '+') 

        result = x + y; 

    else if(op == '-') 

        result = x - y; 

    else 

        result = 0; 

  

    return result; 

} 

  

// BROKEN 

int main(void) 

{ 

    float a, b, ans; 

    char sign; 

  

    printf("Enter two numbers that you'd like to add or subtract: "); 

    scanf("%f %f", &a, &b); 

    printf("Enter the operator you would like to use (+ or -): "); 

    scanf("%c", &sign); 

  

    if(sign != '+' && sign != '-') 

        printf("Invalid Input!"); 

  

    ans = add_sub(sign,a,b); 

  

    printf("The answer is: ", ans); 

} 
