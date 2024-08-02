#include <stdio.h>

int order(char letter) {


	if((int)letter < 97 || (int)letter > 122){
		printf("Invalid input!");
		return 0;
	}

	printf("Order in alphabet is: %d",(int)letter - 96);

return 0;
}



int main() {

char letter;

	printf("Enter a character: ");
	scanf("%c",&letter);

	order(letter);
	printf("\n");

return 0;
}
