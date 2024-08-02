#include <stdio.h>

int main() {

int num = 0, star;

	while( 1 ) {
		printf("Enter an integer: ");
		scanf("%d",&num);

		if( num == -1)
			return 0;

		if( num <= -2) {
			printf("Invalid input!\n");
		}

		else {
			printf("Output:");
			for(star = 0; star < num; star++) {
				printf("*");
			}

			printf("\n");
		}

		printf("\n");
	}

return 0;
}
