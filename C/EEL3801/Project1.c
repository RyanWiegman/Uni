//f = (A4-4B3+3C2-2D) 
//g = (AB2+C2D3)
#include <stdio.h>

int main(){
    int f, a, b, c, d;
    int g, g_a, g_b, g_c, g_d;

    printf("Enter 4 integers for A,B,C,D respectively: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    g_a = a;
    g_b = b;
    g_d = d;
    
/////////////////////// a term
    int temp = a;
    for(int ctr = 1; ctr < temp; ctr++)
        a += temp;
    temp = a;
    for(int ctr = 1; ctr < temp; ctr++)
        a += temp;

//////////////////////// b term
    temp = b;
    for(int ctr = 1; ctr < (temp * temp); ctr++)
        b += temp;
    temp = b;
    for(int ctr = 1; ctr < 4; ctr++)
        b += temp;
    
//////////////////////// c term
    temp = c;
    for(int ctr = 1; ctr < temp; ctr++)
        c += temp;
    g_c = c;
    temp = c;
    for(int ctr = 1; ctr < 3; ctr++)
        c += temp;

//////////////////////// d term
    temp = d;
    for(int ctr = 1; ctr < 2; ctr++)
        d += temp;

//////////////////////// g equation
//////////////////////// d term
    temp = g_d;
    for(int ctr = 1; ctr < (temp * temp); ctr++)
        g_d += temp;
    temp = g_b;
    for(int ctr = 1; ctr < temp; ctr++)
        g_b += temp;

//////////////////////// answers for f and g    
    f = a - b + c - d;
    g = g_a * g_b + g_c * g_d;

///////////////////////// h equation
    temp = f;
    int quotient = 0;
    while(g <= temp){
        temp -= g;
        quotient++;
    }
    int remainder = temp;

    printf("\nf = %d \n", f);
    printf("g = %d \n", g);
    printf("h and i equations: \n");
    printf("quotient = %d \n", quotient);
    printf("remainder = %d \n", remainder);

///////////////////////// i equation
    if(quotient > 0){
        temp = f + g;
        while(quotient <= temp)
            temp -= quotient;
        
        printf("i_MOD = %d \n", temp);
    }
    else
        printf("quotient is zero, MOD undefined. \n");
    
    return 0;
}