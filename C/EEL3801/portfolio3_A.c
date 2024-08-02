#include <stdio.h>
#include <ctype.h>

int main(){
    char* string = "\"This is a test. 1 2 3 4 5 !!\"";
    int index = 0, counter = 0;

    printf("%s\n", string);

    char check_char = string[index];
    while(check_char != '\0'){
        if(ispunct(check_char))
            counter++;
        check_char = string[++index];
    }
    printf("Punctuation count: %d\n", counter);

    return 0;
}