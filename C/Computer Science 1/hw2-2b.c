#include <stdio.h>

int main() {

	char ch;



	printf("Enter a character: ");
	scanf("%c",&ch);



	if(ch >= 65 && ch <= 90) {
		printf("The character %c is an uppercase letter. \n",ch);
		return 0;
	}

	if(ch >=97 && ch < 122) {
		printf("The character %c is a lowercase letter. \n",ch);
		return 0;
	}

	if(ch >= 48 && ch <= 57) {
		printf("The character %c is a digit. \n",ch);
		return 0;
	}

	printf("The character %c is not alphanumeric. \n",ch);
	return 0;
}
