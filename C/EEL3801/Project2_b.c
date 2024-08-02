#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define DELIMITER ", \n"

char** parse_string(char* string_check){
    char** p_string = malloc(sizeof(char*) * 500);
    int index = 0;

    string_check = strtok(string_check, DELIMITER);
    while(string_check != NULL){
        p_string[index] = string_check;
        string_check = strtok(NULL, DELIMITER);
        index++;
    }

    return p_string;
}

char* to_lowercase(char* word){
    int index = 0;
    while(word[index] != '\0'){
        word[index] = tolower(word[index]);
        index++;
    }

    return word;
}

int main(){
    char string_check[650] = "UCF, its athletic program, and the university's alumni and sports fans are sometimes jointly referred to as the UCF Nation, and are represented by the mascot Knightro. The Knight was chosen as the university mascot in 1970 by student election. The Knights of Pegasus was a submission put forth by students, staff, and faculty, who wished to replace UCF's original mascot, the Citronaut, which was a mix between an orange and an astronaut. The Knights were also chosen over Vincent the Vulture, which was a popular unofficial mascot among students at the time. In 1994, Knightro debuted as the Knights official athletic mascot.";
    char** p_string = parse_string(string_check);
    char* first_word = malloc(sizeof(char) * 20);
    char* second_word= malloc(sizeof(char) * 20);
    int first_word_ctr = 0;
    int second_word_ctr = 0;

    printf("Please input first word:\n");
    scanf("%s", first_word);
    printf("Please enter second word:\n");
    scanf("%s", second_word);

    first_word = to_lowercase(first_word);
    second_word = to_lowercase(second_word);

    int index = 0;
    int char_index = 0;
    while(p_string[index] != NULL){
        p_string[index] = to_lowercase(p_string[index]);
        
        while(first_word[char_index] != '\0'){           
            if(first_word[char_index] == p_string[index][char_index]){
                char_index++;

                if(first_word[char_index] == '\0'){
                    first_word_ctr++;
                    char_index = 0;
                    break;
                }
            }
            else{
                char_index = 0;
                break;
            }
        }

        while(second_word[char_index] != '\0'){           
            if(second_word[char_index] == p_string[index][char_index]){
                char_index++;

                if(second_word[char_index] == '\0'){
                    second_word_ctr++;
                    char_index = 0;
                    break;
                }
            }
            else{
                char_index = 0;
                break;
            }
        }
        
        index++;
    }

    printf("%s: %d\n", first_word, first_word_ctr);
    printf("%s: %d\n", second_word, second_word_ctr);

    printf("%s", first_word);
    for(int index = 0; index < first_word_ctr; index++)
        printf("#");
    
    printf("\n%s", second_word);
    for(int index = 0; index < second_word_ctr; index++)
        printf("#");
    printf("\n");


    return 0;
}