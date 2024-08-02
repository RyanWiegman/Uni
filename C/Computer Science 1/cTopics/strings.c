#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string you want to print silly (*L__*)\n");

    /*  This will only print the first word in a sentence
    scanf("%s", str);

    printf("%s", str);
    */

    // May require <string.h> but prints whole string
    gets(str);

    printf("%s\n", str);

    /* This will print the whole string
    printf("%s", str);
    
    int i = 0;
    
    while(str[i] != NULL)
    {
        printf("%c", str[i]);
        i++
    } 
    */

   // STRING LENGTH //

   /* 
   while(str[i] != NULL)
        i++;

    printf("Size: %d", i)
     */


    return 0;
}
