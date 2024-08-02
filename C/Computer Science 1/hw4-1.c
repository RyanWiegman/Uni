#include <stdio.h>

int order(char letter) {

int order;

	if( (int)letter < 97 || (int)letter > 122)
		return -1;

	order = (int)letter - 96;

return order;
}


int main() {

char letter;

	printf("Enter a character: ");
	scanf("%c",&letter);
	printf("Order in alphabet: %d\n",order(letter));

return 0;
}
