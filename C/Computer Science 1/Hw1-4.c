#include <stdio.h>

int main() {

int x;

	printf("Enter integer:\n");
	scanf("%d",&x);

	if(x >= 0) {

		 printf("The integer %d is positive.\n",x);


	}

	if(x % 2 == 0) {

    		printf("The integer %d is a multiple of 2.\n",x);

	}

	if(x % 3 == 0) {

	printf("The integer %d is a multpile of 3.\n",x);


	}

	if(x < 0) {

		printf("The integer %d doesn't meet any criteria.\n",x);

	}



return 0;
}
