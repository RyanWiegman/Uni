#include <stdio.h>

int main() {

int x = 0;


//while loop.

	printf("While loop from 0-40. \n");

	while(x <= 40) {

		printf("%d ",x);

		x++;
	}

	printf("\n");


//for loop.

	printf("For loop from 0-40. \n");

	for(x = 0; x <= 40; x++) {

		printf("%d ",x);

	}

	printf("\n");


//1-10 loop.

	printf("Loop from 1-10, evens twice. \n");

	x = 0;

	while(x <= 10) {

		if(x%2 == 0){

			printf("%d%d",x,x);
		}
		else {

			printf("%d",x);
		}

		x++;
	}

	printf("\n");

return 0;
}
