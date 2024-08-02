#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {


int n, upperbound, target, counter = 0;

	srand(time(0));

	printf("How many random numbers: ");
	scanf("%d",&n);

	printf("Between 0 and what: ");
	scanf("%d",&upperbound);

	printf("What's your number: ");
	scanf("%d",&target);

	 printf("Random numbers:\n");


	int i;
	int temp;
	for(i = 0; i < n; i++){
		temp = rand() % (upperbound + 1);
		printf("%d ",temp);

		if(target == temp)
			counter++;
	}

	printf("\n\n");

	printf("Your number showed up %d times.\n",counter);

return 0;
}
