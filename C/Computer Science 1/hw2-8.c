#include <stdio.h>

int main() {


int x, i;

	printf("Enter an integer that's a multiple of both 2 and 3.\n");
	printf("You have 3 attempts.\n\n");

	for(i = 1; i <= 3; i++) {

		printf("%d. Enter integer: ",i);
		scanf("%d",&x);

		if(x % 2 == 0  && x % 3 == 0) {
			printf("\n\nYou got it! %d is a good answer.\n",x);
			break;
		}
	}

	if(i == 4)
		printf("\n\nYou used up all the attempts. You didn't get it right!\n");
return 0;
}
