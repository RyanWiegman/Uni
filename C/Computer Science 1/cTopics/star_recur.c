void pattern(int n) 

{ 

    int i; 

  

    // Base Case 

    if(n == 1) 

    { 

        printf("*"); 

        return; 

    } 

    // Print n stars 

    for(i = 1; i <= n; i++) 

        printf("*"); 

    printf("\n"); 

  

    pattern(n - 1); 

  

    return; 

} 

  

int main(void) 

{ 

    int a; 

  

    printf("Enter integer: "); 

    scanf("%d", &a); 

  

    pattern(a); 

  

    return 0; 

} 
