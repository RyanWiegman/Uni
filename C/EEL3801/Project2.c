#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define BUFFER 1028

void char_counter(int* counter_array, int index, int print){
    switch(index){
        case 0:
            counter_array[index]++;
            break;
        case 1:
            counter_array[index]++;
            break;
        case 2:
            counter_array[index]++;
            break;
        case 3:
            counter_array[index]++;
            break;
        case 4:
            counter_array[index]++;
            break;
        case 5:
            counter_array[index]++;
            break;
        case 6:
            counter_array[index]++;
            break;
    }

    if(print){
        printf("K:  ----------- %d\n", counter_array[0]);
        printf("N:  ----------- %d\n", counter_array[1]);
        printf("I:  ----------- %d\n", counter_array[2]);
        printf("G:  ----------- %d\n", counter_array[3]);
        printf("H:  ----------- %d\n", counter_array[4]);
        printf("T:  ----------- %d\n", counter_array[5]);
        printf("S:  ----------- %d\n", counter_array[6]);

        printf("K:");
        for(int ind = 0; ind < counter_array[0]; ind++)
            printf("#");

        printf("\nN:");
        for(int ind = 0; ind < counter_array[1]; ind++)
            printf("#");
        
        printf("\nI:");
        for(int ind = 0; ind < counter_array[2]; ind++)
            printf("#");

        printf("\nG:");
        for(int ind = 0; ind < counter_array[3]; ind++)
            printf("#");

        printf("\nH:");
        for(int ind = 0; ind < counter_array[4]; ind++)
            printf("#");

        printf("\nT:");
        for(int ind = 0; ind < counter_array[5]; ind++)
            printf("#");

        printf("\nS:");
        for(int ind = 0; ind < counter_array[6]; ind++)
            printf("#");
        printf("\n");
    }
}

void char_check(char user_input[]){
    if(user_input == NULL){
        printf("ERROR: User input empty\n");
        return;
    }
    
    char string_to_check[7] = "KNIGHTS";
    int counter_array[6];
    int user_index = 0;

    for(int index = 0; index < 7; index++)
        counter_array[index] = 0;

    do{
        char temp_char = user_input[user_index];
        if(temp_char == '\0')
            break;
        
        int index = 0;
        while(index < 7){
            if(tolower(string_to_check[index]) == tolower(temp_char))
                char_counter(counter_array, index, 0);
            index++;
        }

        user_index++;
    }while(1);
    char_counter(counter_array, -1, 1);
}

int main(){
    char user_input[BUFFER];

    printf("Enter sentence to check.\n");
    fgets(user_input, BUFFER, stdin);
    
    char_check(user_input);

    return 0;
}